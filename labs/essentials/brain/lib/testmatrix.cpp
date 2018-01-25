#include <cstdio>
#include "matrix.h"

//test
int main(){
    Matrix a(3, 3);											
    a.setvalue(0, 0, 7);									//set the values for the indicies of the matrix, for example('a1,1' = 7, 'a1,2' = 41, 'a1,3' = 52...)
    a.setvalue(0, 1, 41);
    a.setvalue(0, 2, 52);
    a.setvalue(1, 0, 16);
    a.setvalue(1, 1, 6);
    a.setvalue(1, 2, 23);
    a.setvalue(2, 0, 32);
    a.setvalue(2, 1, 46);
    a.setvalue(2, 2, 746);

    std::puts("matrix a:");									
    a.printMatrix();
	
	//comment out the transpose if you only want to multiply a * b
    a.transpose();
    puts("matrix entered (after transpose):");
    a.printMatrix();

    Matrix b(3, 3);
    b.setvalue(0, 0, 3);
    b.setvalue(0, 1, 9);
    b.setvalue(0, 2, 2);
    b.setvalue(1, 0, 6);
    b.setvalue(1, 1, 8);
    b.setvalue(1, 2, 13);
    b.setvalue(2, 0, 25);
    b.setvalue(2, 1, 7);
    b.setvalue(2, 2, 23);

    std::puts("matrix b:");
    b.printMatrix();

	//if you don't comment out the transpose then you'll have a.transpose * b
    std::puts("matricies multiplied together");
    Matrix c(a.rows, b.columns);
    matrixMultiply(&a,&b,&c);
    c.printMatrix();
}
