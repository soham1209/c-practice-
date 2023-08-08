/*#include <stdio.h>
void printstr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    { 
        printf("%c",str[i]);
        i++;
    }
}
int main()
{
    // char str[6] = {'s','o','h','a','m','\0'};
    // printf(str);
    char str[34];
    gets(str);
    printf("using the prinftf %s\n",str);
    printf("using puts\n");
    puts(str);
    printf("using custom function");
    printstr(str);          
    return 0;
} */
// strcat()thid function is used to concatenate or combine two given strings
// strlen()this funtion is used to show length of a string
// strrev()this funtion is used to show revese of a string
// strcpy()this functon id used to copy one string to another
// strcmp()this functon is used to compare two given string
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[]="soham";
    char s2[]="rohit";
    // puts(strcat(s1,s2));
    // printf("the length of s1 is %d",strlen(s1));
    puts(strrev(s1));
    
    return 0;
}
