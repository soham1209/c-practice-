// void pointer
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 345;
    float b = 8.3;
    void *ptr;
    ptr = &a;
    printf("the value of the a is%d \n", *((int *)ptr));
    ptr = &b;
    printf("the value of the a is%f \n", *((float *)ptr));
    return 0;
}*/

// NULL pointer

/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 34;
    // int * ptr = NULL;
    int *ptr = &a;
    if (ptr != NULL)
    {
        printf("the address of a is %d\n", *ptr);
    }
    else
    {
        printf("the pointeris a null pinter and canotbe derference\n");
    }

    return 0;
}*/

// Dangling Pointer

/*#include <stdio.h>
#include <stdlib.h>
 int* funtionganling() //for case 2
 {
    int a, b,sum;
    a = 34;
    b = 363;
    sum = a + b;
    return &sum;
}
int main()
{
    // case 1 : de allocatin of a memory block
    int * ptr = ( int *) malloc (7* sizeof(int));
    ptr[0] = 34;
    ptr[0] = 3;
    ptr[0] = 43;
    ptr[0] = 4;
    free ( ptr);//ptr is now a danglig pointer
    
    
    // case 2 : Function Returing Local Variable address
    int * dangptr = funtionganling();// ptr is now adangling pointer
    
    //case 3: is a variabvle goes out scope
    int * danglingPtr3;
    {
        int a = 12;
        danglingPtr3 = &a;
        // Hare variable a goes out of scop e which means danlingptr3 is point to a location
        // which is freed and hence danglingptr3 is now a danglilg pointer
    } 
    return 0;
}*/

//wild pointer
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 334;
    int *ptr; // this is a wild pointer
    // *ptr = 34; //this is not a good thing to do 
    ptr = &a;// ptr is no longer a wild pinter
    printf("the vlaue of a is%d\n",*ptr);   
    return 0;
} 