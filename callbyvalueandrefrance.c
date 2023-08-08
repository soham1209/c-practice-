#include <stdio.h>
// call by value
void changevalue(int *a)
{
    *a = 345;
}
int main()
{
    int a = 34, b = 56;
    printf("the value of a now is %d\n", a);
    changevalue(&a);
    printf("the value of a now is %d\n", a);

    return 0;
}

// given two numbers a and b,add them subtract them them and assign them to aa and b sing call by refrance
// a =4
// b =3

// after running the function the valuer of a and b should b
// a =7
// b =1
/*
#include <stdio.h>
int c,d;
int changedvalue(int* a,int* b)
{

    *a = c;
    *b = d;

}
int main()
{
    int a =134,b =55;
    printf("the value of a is %d and the value of %d is\n",a,b);
    c = a + b;
    d = a - b;
    changedvalue(&a,&b);

    printf("the value of a is %d and the value of %d is\n",a,b);


    return 0;
}
*/