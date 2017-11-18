#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>

//this creates the place holder for the attributes of person
struct Person{
    char *name; //character attribute
    int age;    //age is an int
    int height; //so is height and weight
    int weight;
};

int main(int argc, char *argv[])
{
    //make two people structures
    struct Person who={"Joe Alex", 32, 64, 140};
    
    printf("Name: %s\n", who.name);
    printf("Age: %d\n", who.age);
    printf("Height: %d\n", who.height);
    printf("Weight: %d\n", who.weight);
    return 0;
}
