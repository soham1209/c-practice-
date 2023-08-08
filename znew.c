#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int genraterandaomnumber(int n)
{
    srand(time(NULL)); // srand takes secod as input and is drfinde inside stdib.h
    return rand() % n;
}
int main()
{
    int a,b;
    a = genraterandaomnumber(3);
    printf("The ramdom number between 0 to 3 is %d\n", a);
    scanf("%d",&b);
    if (a = b)  
    {
        printf("e");
    }
    
    
    
    return 0;
}