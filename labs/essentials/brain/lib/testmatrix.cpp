#include <cstdio>
#include "matrix.h"

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

//    puts("matrix a (before transpose):");
    std::puts("matrix a:");
    a.printMatrix();

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

    std::puts("matricies multiplied together");
    Matrix c(a.rows, b.columns);
    matrixMultiply(&a,&b,&c);
    c.printMatrix();
}
