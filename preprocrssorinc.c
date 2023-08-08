#include <stdio.h>
#include <stdlib.h>
// # include "1st_multiplicationtable.c"
// # define PI 3.14
// # define circle(r) r*r
int main()
{
    // float var = PI;
    // int r = 3;
    // printf("this is me %f\n",PI * circle(r));
    printf("File name is %s\n",__FILE__);
    printf("todays date is %s\n",__DATE__);
    printf("Line no is %d\n",__LINE__);
    printf("File name is %d\n",__STDC__);
    return 0;
}