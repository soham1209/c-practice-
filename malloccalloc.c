#include <stdio.h>
#include <stdlib.h> //dinamic memory aloction

int main()
{
    // use of malloc
    /*int *ptr;
    int n;
    printf("enter the size of array you want os create\n");
    scanf("%d",&n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of no %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at %d of this array is %d\n",i,ptr[i]);
    
    }*/
    //use of calloc
    int *ptr;
    int n;
    printf("enter the size of array you want os create\n");
    scanf("%d",&n);
    ptr = (int *)calloc(n , sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of no %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at %d of this array is %d\n",i,ptr[i]);
    
    }
    // use of realloc
    printf("enter the size of new array you want os create\n");
    scanf("%d",&n);
    ptr = (int *)realloc(ptr , n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value of no %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value at %d of this array is %d\n",i,ptr[i]);
    
    }
    free(ptr);
    

    return 0;
}