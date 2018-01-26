/*
============================================================================
Name        : matrix.h
Author      : Brent Morris
Version     : 2
Description : A library to transpose and multiply a MxN matrix 
============================================================================
*/

#define MAX_RANGE	 		1024							//max 4096k

class Matrix {
    int **matrix;
public:
    Matrix(int, int);										//the constructor       
    virtual ~Matrix();										//the destructor
    void set_value(int, int, int);							//sets the value in row[i] and column[j]
    int get_value(int, int);									//gets the value for a row/column index
    void transpose();										//transposes matrix
    void print_matrix();										//print the matricies	
    unsigned int rows;
    unsigned int columns;
};

void matrix_multiply(Matrix *, Matrix *, Matrix *);			//not part of the matrix class
void *ec_malloc(size_t);
