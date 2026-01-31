#include <stdio.h>
#include <stdlib.h>

struct student {
    int roll;
    char name[50];
    float marks;
};

void addStudent() {
    struct student s;
    FILE *fp = fopen("students.dat","ab");

    printf("Enter Roll No: ");
    scanf("%d",&s.roll);
    printf("Enter Name: ");
    scanf("%s",s.name);
    printf("Enter Marks: ");
    scanf("%f",&s.marks);

    fwrite(&s,sizeof(s),1,fp);
    fclose(fp);
}

void displayStudents() {
    struct student s;
    FILE *fp = fopen("students.dat","rb");

    while(fread(&s,sizeof(s),1,fp))
        printf("\n%d %s %.2f",s.roll,s.name,s.marks);

    fclose(fp);
}

int main() {
    int choice;
    do {
        printf("\n1.Add\n2.Display\n3.Exit\nChoice: ");
        scanf("%d",&choice);

        if(choice==1) addStudent();
        else if(choice==2) displayStudents();

    } while(choice!=3);

    return 0;
}