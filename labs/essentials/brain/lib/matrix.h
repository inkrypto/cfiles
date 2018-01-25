class Matrix {
    int **matrix;
public:
    int rows;
    int columns;
    Matrix(int, int);                                        //the constructor       
    void setvalue(int, int, int);                      //sets one value in row[i] and column[j]
    int getvalue(int, int);                                  //gets the value for a row/column index
    void transpose();                                                   //transposes matrix function
    void printMatrix();                                                 //print the matricies
    ~Matrix();                                                          //the destructor
};

void matrixMultiply(Matrix *, Matrix *, Matrix *);

