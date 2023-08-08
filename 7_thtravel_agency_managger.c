#include <stdio.h>
#include <string.h>
typedef struct emplye
{
    char name[40];
    int dlno;
    char Route_name[20];
    int kms;
} emp;

int main()
{
    emp emp1, emp2, emp3;
    emp1.name;
    emp2.name;
    emp3.name;
    emp1.dlno;
    emp2.dlno;
    emp3.dlno;
    emp1.Route_name;
    emp2.Route_name;
    emp3.Route_name;
    emp1.kms;
    emp2.kms;
    emp3.kms;
    printf("To fill the information you need to enter the information in following type\n");
    printf("1. Name \n2. driving license No\n3. Route name\n4. KM you travals\n");
    printf("Enter information for first emp\n");
    scanf("%s", &emp1.name);
    scanf("%d", &emp1.dlno);
    scanf("%s", &emp1.Route_name);
    scanf("%d", &emp1.kms);
    printf("Enter information for second emp\n");
    scanf("%s", &emp2.name);
    scanf("%d", &emp2.dlno);
    scanf("%s", &emp2.Route_name);
    scanf("%d", &emp2.kms);
    printf("Enter information for theird emp\n");
    scanf("%s", &emp3.name);
    scanf("%d", &emp3.dlno); 
    scanf("%s", &emp3.Route_name);
    scanf("%d", &emp3.kms);

    printf("The name of emp 1 is%s\n", emp1.name);
    printf("The driving license No of the emp 1 is%d\n", emp1.dlno);
    printf("The Route name of emp 1 is%s\n", emp1.Route_name);
    printf("The kms to traval are%d\n", emp1.kms);

    printf("The name of emp 2 is%s\n", emp2.name);
    printf("The driving license No of the emp 2 is%d\n", emp2.dlno);
    printf("The Route name of emp 2 is%s\n", emp2.Route_name);
    printf("The kms to traval are%d\n", emp2.kms);

    printf("The name of emp 3 is%s\n", emp3.name);
    printf("The driving license No of the emp 3 is%d\n", emp3.dlno);
    printf("The Route name of emp 3 is%s\n", emp3.Route_name);
    printf("The kms to traval are%d\n", emp3.kms);

    return 0;
}