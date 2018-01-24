#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

//function to handle error messages
void die(const char *message)
{
    if(errno){
        perror(message);                                        //perror = print error
    } else {
        printf("ERROR: %s\n", message);
    }
    
    exit(1);
}

//a typedef creates a fake type, in this case for a function pointer
typedef int (*compare_cb)(int a, int b);                        //this is how you create a function pointer in C

// A classic bubble sort function that uses the compare_cb to do the sorting
int *bubble_sort(int *numbers, int count, compare_cb cmp)       //**** where is cmp being defined ****
{
    int temp = 0;                                               //temp var
    int i = 0;                                                  //counter
    int j = 0;                                                  //nested loop counter
    int *target = malloc(count * sizeof(int));                  //4 x 5 = 20 so the heap has 20bytes?????

    if(!target)
        die("Mem error!");                                      //if mem doesn't get allocated die

    memcpy(target, numbers, count * sizeof(int));               //copying into numbers and target

    for( i= 0; i < count; i++ ){                                //loop 1 through count
        for (j = 0; j < count - 1; j++) {                       //loop 2
            if (cmp(target[j], target[j + 1]) > 0) {            //if target greater than 0
                temp = target[j + 1];                           //iternate into var temp
                target[j + 1] = target[j];                      //step through target
                target[j] = temp;                               //result = temp
            }   
        }
    }
    
    return target;                              //return target
}

int sorted_order(int a, int b)                  //function to sort
{
    return (a > b) - (a < b);                   //this is more like the sort, this isn't working 
}

int reverse_order(int a, int b)                 //this is the reverse sort
{
    return (a < b) - (a > b);                   
}
/*
int strange_order(int a, int b)
{
    if (a == 0 || b == 0) {
        return 0;
    } else {
        return a % b;
    }
}
*/
//used to test that we are sorting things correctly by doing the sort and printing it out.
void test_sorting(int *numbers, int count, compare_cb cmp)
{
    int i = 0;
    int *sorted = bubble_sort(numbers, count, cmp);

    if (!sorted){
        die("Failed to sort as requested.");
    }
    for(i=0;i<count;i++){
        printf("%d ", sorted[i]);
    }
    printf("\n");
    
    unsigned char *data = (unsigned char *)cmp;
    
    for(i =0; i < 25; i++){
        printf("%02x:", data[i]);
    }

    free(sorted);                               //free up mem
    printf("\n");

}

int main(int argc, char *argv[])
{
    if(argc < 2) die("Usage ex18 4 3 1 5 6");

    int count = argc - 1;                       //count is argc - 1
    int i = 0;
    char **inputs = argv + 1;

    int *numbers = malloc(count * sizeof(int));
    if (!numbers) die("Mem error!!!");

    for (i=0; i < count; i++) {
        numbers[i] = atoi(inputs[i]);
    }

    test_sorting(numbers, count, sorted_order);
    test_sorting(numbers, count, reverse_order);
    test_sorting(numbers, count, die);

    free(numbers);
    return 0;
}
