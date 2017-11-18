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

//this is a place holder for the person_create function
struct Person *Person_create(char *name, int age, int height,
    int weight)
{
    //setting the size in memory for the person
    struct Person *who = malloc(sizeof(struct Person));
    //this is to verify that ptr who isn't Null
    assert(who != NULL);

    //this is the same as an object in python who.name = copy pointer name
    who->name = strdup(name);
    //object age
    who->age = age;
    //object height
    who->height = height;
    //object weight
    who->weight = weight;
    //returning this back so the next function can use it
    return who;
}

//this is to free up memory
void Person_destroy(struct Person *who)
{
    //assumptions verification again
    assert(who != NULL);
    //freeing pointer from mem
    free(who->name);
    //freeing objects
    free(who);
}
//new function to print this out which uses struct person and pointer who
void Person_print(struct Person *who)
{
    //printing out attributes
    printf("Name: %s\n", who->name);
    printf("\tAge: %d\n", who->age);
    printf("\tHeight: %d\n", who->height);
    printf("\tWeight: %d\n", who->weight);
}

//this is main to use all previous functions and the struct person
int main(int argc, char *argv[])
{
    //make two people structures
    struct Person *joe = Person_create("Joe Alex", 32, 64, 140);
    
    struct Person *frank = Person_create("Frank Black", 20, 72, 180);

    //print them out and where they are in memory
    printf("Joes lives in memory location %p:\n", joe);
    Person_print(joe);

    printf("Frank is at memory location %p:\n", frank);
    Person_print(frank);

    //make everyone age 20 years and print them again
    joe->age += 20;
    joe->height += 2;
    joe->weight += 40;
    Person_print(NULL);

    frank->age += 20;
    frank->weight += 20;
    Person_print(frank);

    //destroy them both so we clean up
    Person_destroy(joe);
    Person_destroy(frank);
    
    return 0;
}
