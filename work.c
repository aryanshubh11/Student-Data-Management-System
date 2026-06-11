#include<stdio.h>

struct student
{
    int rollNo;
    char name[50];
    char course[30];
    float marks;
};
struct student s1, s2, s3;

int main(){

    int n, roll, i;
    int sum = 0;
    float average;

    printf("Enter number of students\n");
    scanf("%d", &n);

    struct student s[n];

    for (i = 0; i < n; i++)
    {
        printf("Student Details\n");

        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);

        printf("Name: ");
        scanf("%s", &s[i].name);

        printf("Course: ");
        scanf("%s", &s[i].course);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("RollNo\tName\tCourse\tMarks\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t%s\t%s\t%f\n",s[i].rollNo, s[i].name, s[i].course, s[i].marks);
    }

    float highest = s[0].marks;
    for (i = 1; i < n; i++)
    {
        if (s[i].marks > highest)
        {
            highest = s[i].marks;
        }
        
    }
    
    for (i = 0; i < n; i++)
    {
        if (s[i].marks == highest)
        {
            printf("The highest marks i.e, %f are obtained by %s\n", highest, s[i].name);

        }
    }

    printf("Enter Roll No.\n");
    scanf("%d", &roll);

    for (i = 0; i < n; i++)
    {
        if (s[i].rollNo == roll)
        {
            printf("RollNo: %d\nName: %s\nCourse: %s\nMarks: %f\n",s[i].rollNo, s[i].name, s[i].course, s[i].marks);
        }

        else{
            printf("Student not found!\n");
        }
        
    }
    

    sum = 0;
    for(i = 0; i < n; i++) 
    {
        sum += s[i].marks;
    }
    
    average = sum/n;
    
    printf("Average marks of class %f", average);

    return 0;    
}