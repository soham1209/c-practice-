#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt","w+");
    // ptr = fopen("myfile.txt","r+");
    // char c = fgetc(ptr);
    // printf("the character i red was %c\n",c);
    // c = fgetc(ptr);
    // printf("the character i red was %c\n",c);
    /*int n = 0;// this loop can be run for geting hole file content in a single letter format
    while (n<200)
    {
        c = fgetc(ptr);
        printf("%c",c);
        n++;
    }*/
    // char str[5];
    // fgets(str, 5,ptr);
    // printf("the string is %s\n",str);

    fputc('o',ptr);
    fputs("this is dady kang",ptr);
    fclose(ptr);
}