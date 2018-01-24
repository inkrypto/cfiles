#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void func(int num){
    func(num+1);        //function calls itself
    printf("num =%d\n", num);
}

int main(){
    //int conv = 3;
    //long conv = strtol(argv[1], NULL, 10);
    //printf("%d\n", conv);
    func(5);
    return 0;
}

