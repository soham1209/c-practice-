/*#include <stdio.h>
#include <stdlib.h>
int sum(int a ,int b)
{

    return a + b;
}
int main()
{
    printf("the sum of number 1 and 2 is %d\n",sum(1,2));// for testing
    int (*fptr) (int,int);// declaring a funtion pointer
    fptr = &sum;//creting a funtion pointer
    int d = (*fptr)(14,30);// derefercing a funtion pointer
    printf("the value of  d is %d\n",d);
     return 0;
}*/

// funtion pointer
#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b)
{
    return a + b;
    return 0;
}
void greetHelloAndExecut(int (*fptr)(int, int))
{
    printf("Good Moring and Hello user");
    printf("the sum of 5 and 7 is %d\n", fptr(5, 7));
}
void greetGmAndExecut(int(*fptr(int, int)))
{
    printf("Good Moring and Hello user");
    printf("the sum of 5 and 7 is %d\n", fptr(5, 7));
}
int main(int argc, char const *argv[])
{
    int (*ptr)(int, int);
    ptr = sum; // or ptr = &sum
    greetHelloAndExecut(ptr);
    return 0;
}
