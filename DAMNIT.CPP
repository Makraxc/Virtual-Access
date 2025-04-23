#include<stdio.h>
#include<conio.h>
#include<string.h>

  struct student{
	char name[20], gender[12];
	int age;
       };
  char search[20];

void main(){
	clrscr();
	struct student students[50];
	printf("Press x to stop inserting!\n");
	printf("Press any other key to continue!\n");
	for(int i=1; i<50; i++) {
		printf("Enter student's name: ");scanf("%s", &students[i].name );
		printf("Enter gender: "); scanf("%s", &students[i].gender);
		printf("Enter age:"); scanf("%d", &students[i].age);
		char ch=getch();
		if(ch=='x' || ch=='X') break;
	}
	printf("Enter name to search: "); scanf("%s", &search);
	for(int k=1, b=0; k<50; k++) {

		if(strcmp(students[k].name,search)==0) { b=1;
			printf("%-20s%-10s%-20s\n", "Name", "Gender", "Age");
			printf("%-20s%-10s%-20d\n", students[k].name, students[k].gender, students[k].age);

		}

	}
	if(b==0) printf("No data found\n");
		getch();

}