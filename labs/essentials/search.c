#include<stdio.h>
#include<stdlib.h>

int main(){
    int mpg[10]={12, 23 ,4 ,53, 323, 75, 78, 99, 66, 821};
    for(int i=0; i<10; i++){
        if(mpg[i]<80){
            //printf("Index:%d MPG:%d:\n",i, mpg[i]);
            int temp;
            int j;
            temp = mpg[i];
            mpg[i] = mpg[j];
            mpg[j] = temp;
            printf("%d\n", mpg[j]);
        }
}
