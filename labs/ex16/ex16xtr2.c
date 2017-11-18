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
struct Person Person_create(char *name, int age, int height, int weight)
{
    //make two people structures
    struct Person who={.name=name, .age=age, .height=height, .weight=weight};
    
    return who;

}

void Person_print(struct Person who)
{
    printf("Name: %s\n", who.name);
    printf("\tAge: %d\n", who.age);
    printf("\tHeight: %d\n", who.height);
    printf("\tWeight: %d\n", who.weight);
}

int main(int argc, char *argv[])
{
    //make struct of two people
    struct Person joe=Person_create("Joe Alex", 32, 64, 140);
    struct Person frank=Person_create("Frank Black",20, 72, 108);

    //print them out and where they are in mem
    printf("Joe is at mem loc %p\n", (void*)&joe);
    Person_print(joe);

    printf("Frank is at mem loc %p\n", (void*)&frank);
    Person_print(frank);
    
    joe.age += 20;
    joe.height -= 2;
    joe.weight += 40;
    Person_print(joe);
    frank.age += 20;
    frank.weight += 20;
    Person_print(frank);

    return 0;
}
