#include <stdio.h>
int func1(int a, int b)
{
    //    auto int sum;//here i can write auto sum also but the class is by defult auto thats why not written
    // int sum;//here it take the value of local so it return on the value of local variab
    // extern int sum; // for geting the value of globle variable here you need to use extern
    // sum = a + b; //for use of wxtern it is not needed
    static int myvar;
    printf("the myvar is %d\n", myvar);
    myvar++;
    return myvar;
    // return sum;
}
// int sum = 345;
int main()
{

    // Declaration = telling complier about the variavle (no space reserve)
    // definition = telling about vaiable and reserving the space
    //  int sum = func1(4,5);
    //  printf("the sum is %d",sum);
    register int myvar = func1(2, 3);
    myvar = func1(2, 3);
    return 0;
}