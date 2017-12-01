/* clampz cant code but doesnt screw with mitigation, everything's enabled ;) */
/* gcc -m32 -z relro -z now -fPIE -pie -fstack-protector-all -o bears bears.c */

// theres a UAF and another type of vuln.... 

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

//disable buffering(fd) then setvbuf()...hmmm what's going on here?
#define disable_buffering(_fd) setvbuf(_fd, NULL, _IONBF, 0)


//struct polar, attributes are name, name length, molecules of vitamins hahaha, and number of humans kilt hahaha
struct polar {
    char name[16];
    unsigned int name_len;
    void (* print_me)(char *, int);
    unsigned long long int molecules_of_vitamin_a;
    unsigned int humans_killed;
};

//struct grizzly, almost the same, name, name length, hibernating, location array, age
struct grizzly {
    char name[16];
    unsigned int name_len;
    unsigned int months_hibernated;
    char location[8];
    unsigned int age;
};

//function secret admin shell, void no returns
void secret_admin_shell() {
    system("/bin/bash");
}

//function edit the polar bear -- all these voids are to set up the functions later
void edit_polar(struct polar *polie) {
    printf("Enter your name (length is limited by length of old name for security!!): ");
    fflush(stdout);
    read(0, polie->name, strlen(polie->name));
}

//function print_white_bear( arguments for this are *ptr bear_name, and humans_killed )
void print_white_bear(char *bear_name, int humans_killed) {
    printf("%s has killed %d people\n", bear_name, humans_killed);
}

//function print brown bear( *name, months hibernated )
void print_brownish_bear(char *bear_name, int months_hibernated) {
    printf("%s has hibernated %d months\n", bear_name, months_hibernated);
}

//function for the print menu
void print_menu() {
    printf("== Menu ========================\n"
    "1. Make grizzly\n"
    "2. Make polar\n"
    "3. Delete grizzly\n"
    "4. Delete polar\n"
    "5. Print grizzly months hibernated\n"
    "6. Print polar humans killed\n"
    "7. Edit polar\n"
    "8. Exit\n");
}

//main
int main() {
    
    struct polar *agnis = NULL;                                                                         //set up pointer var to struct polar 
    struct grizzly *fred = NULL;                                                                        //set up pointer var to struct grizzly
    char y_or_n;                                                                                        //var y_or_n: thinking this is a yes or no string
    unsigned int randfd;                                                                                //positive number randfd
    unsigned int option = 0;                                                                            //positive number option

    disable_buffering(stdout);                                                                          //here's the disabling buffering define from line 13
    disable_buffering(stdin);                                                                           //again -- question: what is (_fd) in line 13


    //main loop to get the menu
    while (1) {                                                                                         //what is while(1) mean? what is 1?
        print_menu();                                                                                   //print the menu

        /* get menu option */
        printf("Which do you want to do? ");
        scanf("%u", &option);                                                                           //user input into address &option
        getc(stdin);                                                                                    //what is this getc(stdin)? haven't seen this before

        if (option == 1) {                                                                              //if a user selects 1 kick of this branch
            if (fred != NULL) {                                                                         //fred = pointer to struct grizzly
                printf("You already have a grizzly, would you like to rename it instead? (y/n) ");
                y_or_n = getc(stdin);                                                                   //y_or_n is a yes or no
                if (y_or_n == 'n') {
                    ;
                } else {
                    printf("K, whats your grizzly's new name? ");
                    fflush(stdout);
                    read(0, fred->name, fred->name_len);
                    continue;
                }
            }
            fred = malloc(sizeof(struct grizzly));                                                      //this is weird, looks like changing the varialbe fred to now be a malloc?
            printf("K your grizzly is at 0x%08x\n", (unsigned int) fred);                               //hint to crack challenge

            printf("Where is your grizzly at? ");                                                       //shouldn't this come before the line above it?
            fgets(fred->location, 8, stdin);                                                            //we love fgets ;) pwnme
            fred->location[strcspn(fred->location, "\n")] = 0;                                          //please shed light this? "computes the string array index of the first character of s which is not in charset, else the index of the first null character."

            printf("How old is your grizzly? ");        
            scanf("%u", &fred->age);                                                                    //store in var struct pointer age 
            getc(stdin);                                

            printf("How many months has your grizzly hibernated? ");
            scanf("%u", &fred->months_hibernated);
            getc(stdin);

            while (fred->name_len <= 0 || fred->name_len > 16) {
                printf("How many characters is your grizzlys name? (must be less than 17) ");
                scanf("%u", &fred->name_len);
            }
            printf("What's your grizzlys name? ");
            fflush(stdout);
            read(0, fred->name, fred->name_len);
        } else if (option == 2) {
            if (agnis != NULL) {
                printf("You already have a polar, would you like to rename it instead? (y/n) ");
                y_or_n = getc(stdin);
                getc(stdin);
                if (y_or_n == 'n') {
                    ;
                } else {
                    printf("K, what's your polars new name? ");
                    fflush(stdout);
                    read(0, agnis->name, agnis->name_len);
                    continue;
                }
            }
            agnis = malloc(sizeof(struct polar));                                                       //like like 104
            printf("K your polar is at 0x%08x\n", (unsigned int) agnis);

            agnis->print_me = &print_white_bear;                                                        //ok why didn't we see this earlier? no fred printme = &print...

            printf("Whoa, how many humans has that polar killed? ");            
            scanf("%u", &agnis->humans_killed);                                                         //what is this "%u", it's an unsigned int, cool haven't seen that before
        
            randfd = open("/dev/random", O_RDONLY);                                                     //what is O_RDONLY? here we have some randomness being stored in randfd
            read(randfd, &agnis->molecules_of_vitamin_a, sizeof(long long int));                        //this reads randfd, polar bear struct vitamin attributes and size of to create some randomness?
            close(randfd);                                                                              //close this randomness

            while (agnis->name_len <= 0 || agnis->name_len > 16) {                                      //check to make sure name is less than 17
                printf("How many characters is your polars name? (must be less than 17) ");
                scanf("%u", &agnis->name_len);
                
                int brentPatchLoop = strlen(&agnis->name_len);
                printf("%d", brentPatchLoop);
                break;
/*                if( < 16))                                                        //brent's attempt to kill infinite loop 
                {                    
                    continue;
                } else {
                    break;
                }*/
            }
            printf("What's your polars name? ");        
            fflush(stdout);
            read(0, agnis->name, agnis->name_len);

        } else if (option == 3) {
            if (fred != NULL) {
                free(fred);
                printf("Deleted grizz\n");
            } else {
                printf("You haven't made a grizzly\n");
            }

        } else if (option == 4) {
            if (agnis != NULL) {
                free(agnis);
                printf("Deleted polar\n");
            } else {
                printf("You haven't made a polar\n");
            }

        } else if (option == 5) {
            if (fred != NULL) {
                print_brownish_bear(fred->name, fred->months_hibernated);
            } else {
                printf("You haven't made a grizzly\n");
            }

        } else if (option == 6) {
            if (agnis != NULL) {
                agnis->print_me(agnis->name, agnis->humans_killed);
            } else {
                printf("You haven't made a polar\n");
            }
        } else if (option == 7) {
            if (agnis != NULL) {
                edit_polar(agnis);
            } else {
                printf("You haven't made a polar\n");
            }
        } else if (option == 8) {
            printf("K laterz\n");
            exit(0);
        } else {
            printf("wat?\n");
        }
        option = 0;
    }
    printf("dope stuff yo! howd you get here?\n");                                                      //love it, my goal to get here
    return 0;
}
