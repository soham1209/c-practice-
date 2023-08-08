#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    int marks;
    char fav_char;
    char name[35];
} /*soham,ravi,rohit*/;

int main()
{
    struct student soham, ravi, rohit;
    soham.id = 1;
    rohit.id = 3;
    ravi.id = 4;
    soham.marks = 45;
    rohit.marks = 35;
    ravi.marks = 25;
    soham.fav_char = 'a';
    rohit.fav_char = 'b';
    ravi.fav_char = 'c';
    strcpy(soham.name, "the soham big bang");
    printf("soham name is %s\n", soham.name);
    printf("soham got %d marks \n", soham.marks);

    return 0;
}

// union
/*#include <stdio.h>
#include <string.h>
union student
{
    int id;//get the value of bigger just as int val 4 char val 2 thean the size of the union id intsize
    int marks;
    char fav_char;
    char name[35];
};
int main()
{
    union student s1;//only one menber who is most resent is activetd other return garbege value
    s1.marks = 35;
    s1.fav_char = 'd';
    strcpy(s1.name ,"soham");
    s1.id = 4;

    printf("the id is %d\n",s1.id);
    printf("the marks is %d\n",s1.marks);
    printf("the fav char is %c\n",s1.fav_char);
    printf("the name is %s\n",s1.name);
    return 0;
}
*/