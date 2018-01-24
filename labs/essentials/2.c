#include<stdio.h>
#include<stdlib.h>

#define NUM_COLS 3

void printTable(int table[][NUM_COLS]);
void out(int t[]);

int main(){
    int table[2][3] = {
        {132, 142, 23},
        {0, 76, 872}
    };
    printf("Row 1 column 2 contains %d\n", table[1][2]);
    printTable(table);
    out(table[1]);
}

void printTable(int table[][NUM_COLS]){
    printf("\n The table:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<NUM_COLS; j++){
            printf("%4d", table[i][j]);
            }
            printf("\n");
    }
}

void out(int t[]){
    int k = 3;
    t[k] -= 6;
    
    for(int i=0; i<NUM_COLS; i++)
        printf("%4d", t[i]); 
    puts("\n"); 
}
