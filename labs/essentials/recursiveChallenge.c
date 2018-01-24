#include<stdio.h>
#include<stdlib.h>

void recur();

/*whoa need to talk to David about this. Why is this printing letters but seg faults when you give it numbers?*/

int main(){
    int a, b;
    printf("enter two numbers: \n");
    scanf("%d, %d", a, b);
    printf("%d\n %d\n", a, b);
}

/*here is the out put:

cfiles/labs/essentials git/master*  
❯ ./recursiveChallenge                                                                     ubuntu@ip-172-31-34-201
enter two numbers: 
12
[1]    22067 segmentation fault (core dumped)  ./recursiveChallenge
                                                                                                                   
cfiles/labs/essentials git/master*  
❯ ./recursiveChallenge                                                                     ubuntu@ip-172-31-34-201
enter two numbers: 
asd
0
 0
*/
