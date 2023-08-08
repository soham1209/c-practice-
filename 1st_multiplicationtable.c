#include <stdio.h>

int main2() {
   int a,b;
   int i = 0;
   printf("give the number you want to get table of \n");
   scanf("%d",&a); 
   printf("your taken number is %d\n",a);
   for ( i = 0; i < 11; i++)
   {
      b = a * i;
      printf ("%d\n",b);
   }
        
   return 0;
}
