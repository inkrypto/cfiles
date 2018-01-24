/*
============================================================================
Name        : Matrix1.cpp
Author      : Brent Morris
Version     : 8.9
Description : A library to transpose and multiply a MxN matrix 
============================================================================
*/

#include <cstdio>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>
using namespace std;

// -- interface --
class Matrix {
    int **matrix;
public:
    int rows;
    int columns;
    Matrix(int row, int column);                                        //the constructor       
    void setvalue(int row, int column, int value);                      //sets one value in row[i] and column[j]
    int getvalue(int row, int column);                                  //gets the value for a row/column index
    void transpose();                                                   //transposes matrix function
    void printMatrix();                                                 //print the matricies
    ~Matrix();                                                          //the destructor
};


//method to create the matrix
Matrix::Matrix(int init_row, int init_column)  {
    int i;
    matrix = (int **) malloc(sizeof(int *) * init_row);                 //creates array in the heap
    for (i = 0; i < init_row; i++) {
        matrix[i] = (int *) malloc(sizeof(int) * init_column);  
        bzero(matrix[i], sizeof(int) * init_column);
    }
    rows = init_row;
    columns = init_column;
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
    int **tmp_matrix;                                                   //**tmp_matrix same as tmp_matrix[][]
    tmp_matrix = (int **) malloc(sizeof(int *) * rows);                 //dynamically create with malloc
    for (i = 0; i < rows; i++) {
        tmp_matrix[i] = (int *) malloc(sizeof(int) * columns);
        memcpy(tmp_matrix[i],matrix[i],sizeof(int) * columns);          //since it's a 2d array you have to do it to each array
    }
    
    for(i=0; i<rows; i++) {
        for(j=0; j<columns; j++) {
            matrix[j][i] = tmp_matrix[i][j];                            //swap rows and columns
        }
    }

    for (i = 0; i < rows; i++) {
        free(tmp_matrix[i]);
    }
    free(tmp_matrix);
}

//method to print the matrix
void Matrix::printMatrix() {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d\t", getvalue(i,j));
                if(j == columns-1)
                    puts("\n");
        }
    }
}

void matrixMultiply(Matrix *a, Matrix *b, Matrix *c) {
    if (a->columns != b->rows) {
        // incorrect dimensions error
        errno = 1;
        exit(errno);
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

Matrix::~Matrix() {
    int i;
    for (i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

//test
int main(){
    Matrix a(3, 3);
    a.setvalue(0, 0, 7);
    a.setvalue(0, 1, 41);
    a.setvalue(0, 2, 52);
    a.setvalue(1, 0, 16);
    a.setvalue(1, 1, 6);
    a.setvalue(1, 2, 23);
    a.setvalue(2, 0, 32);
    a.setvalue(2, 1, 46);
    a.setvalue(2, 2, 746);

    puts("matrix a (before transpose):");
    a.printMatrix();

//    a.transpose();
//    puts("matrix entered (after transpose):");
//    a.printMatrix();

    Matrix b(3, 3);
    b.setvalue(0, 0, 7);
    b.setvalue(0, 1, 41);
    b.setvalue(0, 2, 52);
    b.setvalue(1, 0, 16);
    b.setvalue(1, 1, 6);
    b.setvalue(1, 2, 136);
    b.setvalue(2, 0, 32);
    b.setvalue(2, 1, 46);
    b.setvalue(2, 2, 23);

    puts("matrix b:");
    b.printMatrix();

    puts("matricies multiplied together");
    Matrix c(a.rows, b.columns);
    matrixMultiply(&a,&b,&c);
    c.printMatrix();
}
