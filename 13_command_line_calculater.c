// #include <stdio.h>
// #include <string.h>
// // i done may thigs write but due to atoi  i fail
// int main(int argc, char const *argv[])
// {
//     char str[50];
//     printf("%s",argv[1]);
//     printf("%s",str);
//     scanf("%s",&a);
//     printf("%s",argv);

//     if (strcmp(argv[1],"add") == 0)
//     {
//         printf("the adition of two number is ");
//     }
//     else if (strcmp(argv[1],"sub") == 0)
//     {
//         printf("the substrat of two number is ");
//     }
//     else if (strcmp(argv[1],"mult") == 0)
//     {
//         printf("the adition of two number is ");
//     }
//     else if (strcmp(argv[1],"div") == 0)
//     {
//         printf("the dividation of two number is ");
//     }
//     else
//     {
//         printf("Plese Enter valid sentex ___(process to done then 1st intager then 2nd intager)____");
//         return 1;  
//     }
    

//     return 0;
// }
    //gbt answer 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // Check that there are three command-line arguments
    if (argc != 4) {
        printf("Usage: %s [operation] [number1] [number2]\n", argv[0]);
        return 1;
    }

    // Parse the command-line arguments
    char *operation = argv[1];
    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);

    // Perform the operation based on the command-line argument
    int result;
    if (strcmp(operation, "addition") == 0) {
        result = num1 + num2;
    } else if (strcmp(operation, "subtraction") == 0) {
        result = num1 - num2;
    } else if (strcmp(operation, "multiplication") == 0) {
        result = num1 * num2;
    } else if (strcmp(operation, "division") == 0) {
        result = num1 / num2;
    } else {
        printf("Invalid operation: %s\n", operation);
        return 1;
    }

    // Print the result
    printf("%d %s %d = %d\n", num1, operation, num2, result);

    return 0;
}
