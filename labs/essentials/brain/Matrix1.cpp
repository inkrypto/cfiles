/*
 ============================================================================
 Name        : Matrix1.cpp
 Author      : Brent Morris
 Version     : 8.9
 Copyright   : Umm what
 Description : A library to transpose then multiply a MxN matrix 
 ============================================================================
 */

#include <cstdio>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
using namespace std;

class Matrix {
    int **matrix;
    int rows;
    int columns;
public:
    ~Matrix();                                          //what is this?
    Matrix(int row, int column);        
    void setvalue(int row, int column, int value);      //setting the rows, columns and then the a1..aN value
    int getvalue(int row, int column);                  //
    void transpose();
    void multiply();
    void printMatrix();
};

Matrix::~Matrix() {
    int i;
    //puts("deleting matrix\n");
    for (i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

Matrix::Matrix(int init_row, int init_column)  {
    int i;
    //puts("creating matrix\n");
    matrix = (int **) malloc(sizeof(int *) * init_row);
    for (i = 0; i < init_row; i++) {
        matrix[i] = (int *) malloc(sizeof(int) * init_column);
    }
    rows = init_row;
    columns = init_column;
}

void Matrix::setvalue(int row, int column, int value) {
    matrix[row][column] = value;
}

int Matrix::getvalue(int row, int column) {
    return matrix[row][column];
}

void Matrix::transpose() {
    int i,j;
    int **tmp_matrix;
    tmp_matrix = (int **) malloc(sizeof(int *) * rows);
    for (i = 0; i < rows; i++) {
        tmp_matrix[i] = (int *) malloc(sizeof(int) * columns);
        memcpy(tmp_matrix[i],matrix[i],sizeof(int) * columns);
    }
    
    for(i=0; i<rows; i++) {
        for(j=0; j<columns; j++) {
            matrix[j][i] = tmp_matrix[i][j];
        }
    }

    for (i = 0; i < rows; i++) {
        free(tmp_matrix[i]);
    }
    free(tmp_matrix);
}

void Matrix::multiply()

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

int main(){
    Matrix m(3, 3);
    m.setvalue(0, 0, 7);
    m.setvalue(0, 1, 41);
    m.setvalue(0, 2, 52);
    m.setvalue(1, 0, 16);
    m.setvalue(1, 1, 6);
    m.setvalue(2, 0, 32);
    m.setvalue(2, 1, 46);
    m.setvalue(2, 2, 746);

    puts("matrix entered (before transpose):\n");
    m.printMatrix();
    m.transpose();
    puts("matrix entered (after transpose):\n");
    m.printMatrix();
}
