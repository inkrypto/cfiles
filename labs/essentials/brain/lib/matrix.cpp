/*
============================================================================
Name        : matrix.cpp
Author      : Brent Morris
Version     : 0.999999999999999999991
Description : A library to transpose and multiply a MxN matrix 
============================================================================
*/

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cerrno>

#include "matrix.h"

using namespace std;

//constructor method to create the matrix object
Matrix::Matrix(int init_row, int init_column)  {
	if(init_row > MAX_RANGE || init_column > MAX_RANGE){
		errno = 1;
		std::puts("Error, input out of range");
		std::exit(errno);
	}
    matrix = (int **) ec_malloc(sizeof(int *) * init_row);                 
    for (auto i = 0; i < init_row; i++) {
        matrix[i] = (int *) ec_malloc(sizeof(int) * init_column);  
        std::memset(matrix[i], 0, sizeof(int) * init_column);
    }
    rows = init_row;
    columns = init_column;
}

//destructor method
Matrix::~Matrix() {
    for (auto i = 0; i < rows; i++) {
        std::free(matrix[i]);
    }
    std::free(matrix);
}

//method to set the values in the matrix
void Matrix::set_value(int row, int column, int value) {
    matrix[row][column] = value;
}

//method to get the values, row and column
int Matrix::get_value(int row, int column) {
    return matrix[row][column];
}

//method transposing the matrix, switch the rows to columns and columns to rows
void Matrix::transpose() {
    int **tmp_matrix;                                                   
    tmp_matrix = (int **) ec_malloc(sizeof(int *) * rows);                 
    for (auto i = 0; i < rows; i++) {
        tmp_matrix[i] = (int *) ec_malloc(sizeof(int) * columns);
        std::memcpy(tmp_matrix[i],matrix[i],sizeof(int) * columns);         
    }
    
    for (auto i=0; i<rows; i++) {
        for (auto j=0; j<columns; j++) {
            matrix[j][i] = tmp_matrix[i][j];                            
        }
    }

    for (auto i = 0; i < rows; i++) {
        std::free(tmp_matrix[i]);
    }
    std::free(tmp_matrix);
}

//method to print the matrix
void Matrix::print_matrix() {
    for (auto i = 0; i < rows; i++) {
        for (auto j = 0; j < columns; j++) {
            std::printf("%d\t", get_value(i, j));
                if(j == columns - 1)
                    std::puts("\n");
        }
    }
}

//multiply matrix function not part of class
void matrix_multiply(Matrix *a, Matrix *b, Matrix *c) {
    if (a->columns != b->rows) {
        // incorrect dimensions error
        errno = ENOTSUP;
        std::exit(errno);
    } else {
        for (auto i = 0; i < a->rows; i++) {
            for (auto j = 0; j < b->columns; j++) {
                // enter in c[i][j] += a[i][k] * b[k][j]
                for (auto k = 0; k < a->rows; k++) {
                    c->set_value(i, j, c->get_value(i, j) + ( a->get_value(i, k) * b->get_value(k, j) ));
                }
            }
        }
    } 
}

//error checked malloc
void *ec_malloc(size_t size) {
	void *ptr = std::malloc(size);
	if (ptr == NULL ) {
			errno = 1;
			puts("Unable to allocate memory");
			std::exit(errno);
	}
	return ptr;
}
