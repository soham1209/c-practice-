#include <stdio.h>  
int factorial(int nu){
    if (nu == 1 || nu == 0)
    {
        return 1;
    }
    else
    {
        return (nu * factorial(nu - 1));
    }
}

int main()
{
    int num;
    printf("Enter the number you want the facorial of\n");
    scanf("%d",&num);
    printf("The factorial of %d is %d\n",num,factorial(num));

    
    return 0;
}
// 4!=4*3!

// same using looping
/*#include <stdio.h>
int main()
{
    int i,fact = 1,number;
    printf("enter a number");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
        fact=fact*i;
    }
    printf("factorial of %d is %d",number,fact);
    return 0;
    
}*/
// i=1 i<=4 i++
// the loop is work as
// 1*2*3*4