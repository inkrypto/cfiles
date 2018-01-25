class Matrix {
    int **matrix;
public:
    int rows;
    int columns;
    Matrix(int, int);										//the constructor       
    ~Matrix();												//the destructor
    void setvalue(int, int, int);							//sets the value in row[i] and column[j]
    int getvalue(int, int);									//gets the value for a row/column index
    void transpose();										//transposes matrix
    void printMatrix();										//print the matricies
};

void matrixMultiply(Matrix *, Matrix *, Matrix *);			//not part of the matrix class
