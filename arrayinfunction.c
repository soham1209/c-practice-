#include <stdio.h>
int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value at %d is %d\n", i, array[i]);
    }
    array[0] = 45; // this reflets in main
    return 0;
} // new type for same work
void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 34;
} // multy dimination array
void funk3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("the value at %d, %d is %d\n", i, j, arr[i][j]);
        }
    }
}
int main()
{

    // int arr[] = {25,5,7,8};
    int arr[][2] = { {23, 13},
                     {4, 5} };

    // printf("the value at index 0 is %d\n",arr[0]);
    // func1(arr);
    // printf("the value at index 0 is %d\n",arr[0]);
    // func2(arr);
    // func2(arr);
    funk3(arr);

    return 0;
}
