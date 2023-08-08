#include <stdio.h>
// #include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    char string[100] = "now this is soham new god of earth";
// wrinting a file
    // ptr = fopen("myfile.txt","w");
    // fprintf(ptr,"%s",string);
//reding a file
/*    ptr = fopen("myfile.txt","r");
    fscanf(ptr,"%s",string);
    printf("the content of this file has %s\n",string);
*/
// ambetd made of file
    ptr = fopen("myfile.txt","a");
    fprintf(ptr,"%s",string);

    return 0;
}
