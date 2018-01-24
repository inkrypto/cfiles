#include <cstdio>
#include <iostream>
#include <array>
using namespace std;

//example of class, used inside this file just as an example and for simplicities sake
class Matrix1{
private:
    int mMatrix[10][10];
    int mTranspose[10][10];
    int mRows;
    int mColumns;
public:
    void setvalue(mRows, mColumns);
    void printMatrix();
}

void Matrix::setvalue(mRow, mColumns){
    cout << "Enter the number of mRows for the mMatrix.\n";
    cin >> mRows;
    cout << "Enter the number of mColumns for the mMatrix.\n";
    cin >> mColumns;
    cout << endl;
}

void printMatrix(){

}

int main(){
    int i;      //outer loop counter
    int j;      //inner loop counter
    
    //storing elements of the mMatrix
    for(i = 0; i < mRows; i++)
        for(j = 0; j < mColumns; j++)
        {
            cout << "Enter the elements for the mMatrix, a" << i+1 << ":" << j+1 << " ";
            cin >> mMatrix[i][j];
        }
    cout << endl;

    //displaying the mMatrix
    cout << "Here's your mMatrix: " << endl;
    for(i = 0; i < mRows; i++)
        for(j = 0; j < mColumns; j++)
        {
            cout << mMatrix[i][j] << " ";
                if(j == mColumns-1)
                    cout << endl;
        }

    //finding the mTranspose of the mMatrix
    for(i=0;i<mRows;i++)
        for(j=0;j<mColumns;j++)
        {
            mTranspose[j][i] = mMatrix[i][j];
        }


    //displaying the mTransposed mMatrix
    cout << "\nTranspose of mMatrix:\n";
    for(i=0; i < mColumns; i++)
        for(j=0; j < mRows; j++)
        {
            cout << mTranspose[i][j] << " ";
            if(j==mRows-1)
                cout << endl;
        }

    return 0;
}

