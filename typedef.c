//typedef
#include <stdio.h>
#include <string.h>

typedef struct student
{
    int id;
    int marks;
    char fav_char;  
    char name[35];
} std;
    

int main()
{
    std s1, s2;
    s1.id = 54;
    s2.id = 45;
    printf("value of s1 id is %d\n",s1.id);

    // typedef <previous_name> <alias_name>;
    // typedef unsigned long ul;
    // ul l1, l2, l3;

    // typedef int integer;
    // integer a = 4;
    // printf("value of a is %d\n",a);
    return 0;
}