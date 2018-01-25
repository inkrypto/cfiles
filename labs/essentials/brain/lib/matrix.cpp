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
    int i;
    matrix = (int **) std::malloc(sizeof(int *) * init_row);                 
    for (i = 0; i < init_row; i++) {
        matrix[i] = (int *) std::malloc(sizeof(int) * init_column);  
        std::memset(matrix[i], 0, sizeof(int) * init_column);
    }
    rows = init_row;
    columns = init_column;
}

//destructor method
Matrix::~Matrix() {
    int i;
    for (i = 0; i < rows; i++) {
        std::free(matrix[i]);
    }
    std::free(matrix);
}

//method to set the values in the matrix
void Matrix::setvalue(int row, int column, int value) {
    matrix[row][column] = value;
}

//method to get the values, row and column
int Matrix::getvalue(int row, int column) {
    return matrix[row][column];
}

//method transposing the matrix, switch the rows to columns and columns to rows
void Matrix::transpose() {
    int i,j;
    int **tmp_matrix;                                                   
    tmp_matrix = (int **) std::malloc(sizeof(int *) * rows);                 
    for (i = 0; i < rows; i++) {
        tmp_matrix[i] = (int *) std::malloc(sizeof(int) * columns);
        std::memcpy(tmp_matrix[i],matrix[i],sizeof(int) * columns);         
    }
    
    for(i=0; i<rows; i++) {
        for(j=0; j<columns; j++) {
            matrix[j][i] = tmp_matrix[i][j];                            
        }
    }

    for (i = 0; i < rows; i++) {
        std::free(tmp_matrix[i]);
    }
    std::free(tmp_matrix);
}

//method to print the matrix
void Matrix::printMatrix() {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            std::printf("%d\t", getvalue(i,j));
                if(j == columns-1)
                    std::puts("\n");
        }
    }
}

//multiply matrix function not part of class
void matrixMultiply(Matrix *a, Matrix *b, Matrix *c) {
    if (a->columns != b->rows) {
        // incorrect dimensions error
        errno = ENOTSUP;
        std::exit(errno);
    } else {
        int i, j, k;
        for (i = 0; i < a->rows; i++) {
            for (j = 0; j < b->columns; j++) {
                // enter in c[i][j] += a[i][k] * b[k][j]
                for (k = 0; k < a->rows; k++) {
                    c->setvalue(i, j, c->getvalue(i, j) + ( a->getvalue(i, k) * b->getvalue(k, j) ));
                }
            }
        }
    } 
}

/*
       a                b
    3  4  5          5  1  0
               x   
    8  9  3          4  2  1

*/

