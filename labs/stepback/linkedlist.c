#include<stdio.h>
#include<stdlib.h>
//global var struct stats to set up list all linked back to this var
struct stats{
    int account;
    float balance;
    struct stats *next; //next is a pointer to type struct
};

//set up function to fill data into the struct stats
void fill_structure(struct stats *s);

//function to pointer function
struct stats *create(void);


//main duh
int main()
{
    struct stats *first;        //pointer first to 1st struct
    struct stats *current;      //pointer to current struct
    struct stats *new;          //pointer to new struct   
    int x;                      //x to loop

    //creat first structure
    first = create();           //use first pointer to store create funct
    current = first;            //use current pointer to store first

    for(x=0;x<5;x++)            //loop through structs
    {
        if(x==0)                //if there is no struct to loop through create it
        {
            first = create();   //same as line 26
            current = first;
        }
        else
        {
            new = create();     //here's new that equals create, don't know what's happening now
            current->next = new;//current attribute next = new
            current = new;      //saving current in new
        }
        fill_structure(current); //call fill
    }
    current->next=NULL;         //stop shit

    current = first;            //again? idk
    while(current)              //print out with while loop
    {
        printf("Account %05d:\t$%.2f\n", current->account, current->balance);
        current = current->next;        //moving current->next into current
    }
    return 0;
}

//fill in struct
void fill_structure(struct stats *s)    //function to fill in struct
{
    printf("Account Number: ");         //print then add to attributes of stats
    scanf("%d", &s->account);
    printf("Account Balance: $");
    scanf("%f", &s->balance);
    s->next = NULL;
}

//allocate storage for new structure
struct stats *create()              //function to create pointer
{
    struct stats *baby;                 //where the fuck did baby come from

    baby = (struct stats *)malloc(sizeof(struct stats));        //set up memory
    if(baby == NULL)                    //if Null error
    {
        puts("Memory error");
        exit(1);
    }
    return(baby);                       //we return baby but wtf is it used?
}
