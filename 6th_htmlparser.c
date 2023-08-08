#include <stdio.h>
#include <string.h>
void parser(char * str){
    int in = 0;//variable to track whether weare inside the tag
    int index = 0;
    // int i = 0; 
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '<')   
        {
            in = 1;
            continue;
        }
        else if (str[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in==0)
        {
            str[index] = str[i];
            index ++;
        }
        
    }
    str[index] = '\0';
    // romove the trailing spaces 
    while (str[0] ==' ')
    {
        //shift the string to the left
        for (int i = 0; i < strlen(str); i++)
        {
            str[i] = str[i+1];
        }
    }
    // romove the trailing spaces 
    while (str[strlen(str) - 1] == ' ')
    {
        str[strlen(str) - 1] = '\0';

    }

}
int main()
{
    char str[] = "<h1>               this is a heading            </h1>";
    parser(str);
    printf("the parsed stringis ~~~~%s~~~~~\n",str);
    // printf("the persered html text is %d\n",str);

    return 0;
}    