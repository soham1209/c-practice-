#include <stdio.h>
// #include <stdlib.h>
int main()
{
    int arr1[2][2];
    int arr2[2][2];
    int Ans[2][2];
    int a,b,c,d;
    printf("Enter the numbers you want the matrix of in the way which shown in below\n");    
    printf("Enter number\nFor first matrix\n");    
    printf("first digt first row first coloum");
    scanf("%d",&arr1[0][0]);
    printf("\nfirst digt first row second coloum");
    scanf("%d",&arr1[0][1]);
    printf("\nfirst digt second row first coloum");
    scanf("%d",&arr1[1][0]);
    printf("\nfirst digt second row second coloum\n");
    scanf("%d",&arr1[1][1]);
    
    printf("Enter number\nFor second matrix\n");
    printf("first digt first row first coloum");
    scanf("%d",&arr2[0][0]);
    printf("\nfirst digt first row second coloum");
    scanf("%d",&arr2[0][1]);
    printf("\nfirst digt second row first coloum");
    scanf("%d",&arr2[1][0]);
    printf("\nfirst digt second row second coloum");
    scanf("%d",&arr2[1][1]);
    // printing the given array
    printf("Printing the first entered array\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    printf("Printing the second entered array\n");
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }

    // a  b     w  x        aw+by     ax+bz
    // c  d     y  z        cw+dy     cx+dz   
    a = (arr1[0][0] * arr2[0][0]) + (arr1[0][1] * arr2[1][0]);
    b = (arr1[0][0] * arr2[0][1]) + (arr1[0][1] * arr2[1][1]);
    c = (arr1[1][0] * arr2[0][0]) + (arr1[1][1] * arr2[1][0]);
    d = (arr1[1][0] * arr2[0][2]) + (arr1[1][1] * arr2[1][1]);
    Ans[0][0] = a;
    Ans[0][1] = b;
    Ans[1][0] = c;
    Ans[1][1] = d;
    // printing the answer array
    printf("the answer of the given array is \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t",Ans[i][j]);
        }
        printf("\n");
    }
    
     
    return 0;
}
// gbt answar
/*#include <stdio.h>

int main() {
    int a[2][2], b[2][2], c[2][2];
    int i, j, k;
    
    // Taking input for the first matrix
    printf("Enter the elements of the first 2x2 matrix: \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Taking input for the second matrix
    printf("\nEnter the elements of the second 2x2 matrix: \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Performing matrix multiplication
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            c[i][j] = 0;
            for (k = 0; k < 2; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Displaying the result
    printf("\nThe result of matrix multiplication is: \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/