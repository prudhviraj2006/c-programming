#include <stdio.h>
#include<string.h>
struct Student
{
    char name[50];
    int id;
	int class;
};

int main()
{
     struct Student s;

     printf("Data of first student\n" );
     strcpy(s.name, "prudhvi");
     s.id = 192324274;
     s.class = 12;
     printf("Student Name: %s", s.name);
     printf("\nStudent Id: %d", s.id);
     printf("\nStudent Class: %d", s.class);
     
     return 0;
}
