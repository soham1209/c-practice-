#include <stdio.h>
int rivfunc(int array[])
{
    int temp;
    // array[0]=array[6];
    for (int i = 0; i < 7/2; i++)
    {
        temp = array[i];
        array[i] = array[6-i];
        array[6-i] = temp;
        
    }
    return 0;
}

int main()
{
    int arr[] = {10,20,30,4,5,6,67};
    for (int i = 0; i < 7; i++)
    {
        // printf("%d\n",arr[i]);
        printf("the value at %d is %d\n",i,arr[i]);
    }
    rivfunc(arr);
    // printf("%d",arr[6]);
    for (int i = 0; i < 7; i++)
    {
        // printf("%d\n",arr[i]);
        printf("the value at %d is %d\n",i,arr[i]);
    }
    return 0;
}
