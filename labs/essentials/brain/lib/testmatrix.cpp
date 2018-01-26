#include <cstdio>
#include "matrix.h"

//test
int main(){
    Matrix a(3, 3);											
	//set the values for the indicies of the matrix, for example('a1,1' = 7, 'a1,2' = 41, 'a1,3' = 52...) 
	a.set_value(0, 0, 7);
    a.set_value(0, 1, 41);
    a.set_value(0, 2, 52);
    a.set_value(1, 0, 16);
    a.set_value(1, 1, 6);
    a.set_value(1, 2, 23);
    a.set_value(2, 0, 32);
    a.set_value(2, 1, 46);
    a.set_value(2, 2, 746);

    std::puts("matrix a:");									
    a.print_matrix();
	
	//comment out the transpose if you only want to multiply a * b
    a.transpose();
    puts("matrix entered (after transpose):");
    a.print_matrix();

    Matrix b(3, 3);
    b.set_value(0, 0, 3);
    b.set_value(0, 1, 9);
    b.set_value(0, 2, 2);
    b.set_value(1, 0, 6);
    b.set_value(1, 1, 8);
    b.set_value(1, 2, 13);
    b.set_value(2, 0, 25);
    b.set_value(2, 1, 7);
    b.set_value(2, 2, 23);

    std::puts("matrix b:");
    b.print_matrix();

	//if you don't comment out the transpose then you'll have a.transpose * b
    std::puts("matricies multiplied together");
    Matrix c(a.rows, b.columns);
    matrix_multiply(&a,&b,&c);
    c.print_matrix();
}
