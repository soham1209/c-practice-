#include <stdio.h>
#include <stdlib.h>
//code by gbt
int main()
{
    int num, temp, remainder, reverse = 0;
    printf("Enter a number :");
    scanf("%d",&num);
     
    temp = num

    // i am unable to think this loop
    while (temp != 0)
    {
        remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp /= 10;
    }
    if (num == reverse)
    {   
        printf("%d is a palindrome \n",num);
    }
    else
    {
        printf("%d is not a palindrome\n",num);
    }
    
    
    return 0;
}