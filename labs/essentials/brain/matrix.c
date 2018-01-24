#include<stdio.h>

int main(){
    int matrix[10][10], transpose[10][10], multi[10][10];               //# of columns must = # or rows
    int rows, columns;                                                  
    int i, j, k;                                                        //loop counters
    printf("Enter the number of rows, in positive integars, for the matrix.\n");
    scanf("%d", &rows);
    printf("Enter the number of columns, in positive integars, for the matrix.\n");
    scanf("%d", &columns);

    while (rows != columns)
    {
        printf("Whoops! ERROR: please make sure that rows are equal to the columns\n");
        printf("Enter the number of rows for the matrix.\n");
        scanf("%d", &rows);
        printf("Enter the number of columns for the matrix.\n");
        scanf("%d", &columns);
    }

    //storing elements of the matrix
    for(i = 0; i < rows; i++)
        for(j = 0; j < columns; j++){ 
            printf("Enter the elements for the matrix, a%d[%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    
    //displaying the matrix
    printf("\nHere's the matrix entered: \n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < columns; j++)
        {
            printf("%d\t", matrix[i][j]);
                if(j == columns-1)
                    puts("\n"); 
        }

    //finding the transpose of matrix
    for(i=0;i<rows;i++)
        for(j=0;j<columns;j++)
        {
            transpose[j][i] = matrix[i][j];
        }                


    //displaying the transposed matrix
    printf("\nHere's a transpose of that matrix:\n");
    for(i=0;i<columns;i++)
        for(j=0;j<rows;j++){
            printf("%d\t", transpose[i][j]);
                if(j == columns-1)
                    puts("\n"); 
        }
        
    //Multiplying matrix and transpose then storing in array multi.
    for(i = 0; i < rows; i++)
        for(j = 0; j < columns; j++)
            {
            multi[i][j] = 0;

            for(k=0; k < rows; k++){   
                multi[i][j] += matrix[i][k] * transpose[k][j];
            }
        }   

    //displaying the multimatrix
    printf("\nHere are the two matrices multiplied together:\n");
    for(i=0;i<rows;i++)
        for(j=0;j<columns;j++){
            printf("%d\t", multi[i][j]);
                if(j == columns-1)
                    puts("\n");
        }
    return 0;   
}
