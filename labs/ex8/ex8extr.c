#include<stdio.h>

int brentisdigit(char c) {
    // if digit return 0
    // else return 1
    if(c>48 && c<57){
        return 1;
    }
    else{
        return 0;
    }
}

int main(int argc, char **argv)
{
    //not David's way but trying to use function instead 
    if(brentisdigit(argv[1][0])){
        printf("Number\n");
    }     
    return 0;    
}
