#include <stdio.h>
#include <stdlib.h>

//function prototypes
void read_entire_file(void);
void read_until(char marker);
void write_to_file(void);

int main(){
	//read_entire_file();
	printf("----\n");
	//void read_until('m');
	void write_to_file(void);
}

void read_entire_file(){
	int ch;
	FILE *fp; 				//pointer to file type
	fp = fopen("message","r");
	ch = getc(fp);
	while (ch != EOF) 		//Keep looping to eof
	{
		putchar(ch);		//print the characters read
		ch = getc(fp);
	}
	fclose(fp);
}


void read_until(char marker){
	int ch;
	FILE *fp; 				//pointer to file type
	fp = fopen("message","r");
	ch = getc(fp);
	while (ch != marker) 		//Keep looping to eof
	{
		putchar(ch);		//print the characters read
		ch = getc(fp);
	}
	fclose(fp);
}

void write_to_file(void){
	FILE *fp;
	fp = fopen("mess2", "w");
	char name[10] = "Mcfucked";
	fprintf(fp, "this message is for %s\n", name);
	fclose(fp);
}

