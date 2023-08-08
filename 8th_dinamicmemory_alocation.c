#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    //malloc functiion
    printf("Emp 1 Enter the size of your employ id\n");
    printf("Emp 1 please Enter the id \n");
    scanf("%d",&n);
    ptr = (int *)malloc(n * sizeof(n));
    for (int i = 0; i < n; i++)
    {   
        printf("Enter the id's %d numbaer of your id\n",i+1);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d",ptr[i]);
    }
    
     // realloc function
    printf("\nEmp 2 Enter the size of your employ id size\n");
    printf("Emp 2 please Enter the id \n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(n));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the id's %d number of your id\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    printf("the id of emp 1 is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", ptr[i]);
    }
    //use of second realloc
    printf("\nEmp 3 Enter the size of your employ id size\n");
    printf("Emp 3 please Enter the id \n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(n));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the id's %d number of your id\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    printf("the id of emp 1 is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", ptr[i]);
    }
return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int chars, i = 0;
    char *ptr;
    while (i > 0)
    {
        printf("Enter the number of characots in your Emplyee id\n");
        scanf("%d",&char);
        ptr = (char *)malloc((char+1)*sizeof(char));
        printf("Enter Your Emplouee id\n");
        scanf("%s",ptr);
        printf("Your Emplyeeid is %s\n",ptr);
        free((ptr));

        i = i + 1;
    }
    
    
    return 0;
}