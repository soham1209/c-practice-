/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *replacword(const char *str, const char *oldword, const char *newword)
{
    char *resultingstring;
    int i, count = 0;
    int newwordLength = strlen(newword);
    int oldwordLength = strlen(oldword);
    // lets count the number of times old word occurs in the string
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldword) == &str[i])
        {
            count++;
            // jump over this word
            i = i + oldwordLength - 1;
        }
    }
    // making a new string to fit in the replaced words
    resultingstring = (char *)malloc(i + count * (newwordLength - oldwordLength) + 1);

    i = 0;
    while (*str)
    {
        // compare teh substring with result
        if (strstr(str, oldword) == str)
        {
            strcpy(&resultingstring[i], newword);
            i += newwordLength;
            str += oldwordLength;
        }
        else
        {
            resultingstring[i] = *str;
            i += 1;
            str += 1;
        }
    }
    resultingstring[i] = '\0';
    return resultingstring;
}
int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;
    ptr = fopen("latter.txt", "r");
    ptr2 = fopen("latter2.txt", "w");
    char str[200];
    fgets(str, 200, ptr);
    printf(" the given bill latter was %s\n", str);
    // call teh replace function and genrate result
    char *newStr;
    newStr = replacword(str, "{{item}}", "fan");
    newStr = replacword(newStr, "{{outlaet}}", "ram fan");
    newStr = replacword(newStr, "{{name}}", "soham");
    printf(" the actual bill latter is %s\n", newStr);
    fprintf(ptr2, "%s", newStr);
    fclose(ptr);
    fclose(ptr2);
    return 0;
}*/
// refrer this code

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// this is a string
char * replaceWord(const char * str, const char * oldWord, const char * newWord)
{
    char * resultString;
    int i, count = 0;
    int newWordLength = strlen(newWord);
    int oldWordLength = strlen(oldWord);

    // Lets count the number of times old word occurs in the string
    for (i = 0; str[i] !='\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;

            // Jump over this word
            i = i + oldWordLength - 1;
        }
    }

    // Making a new string to fit in the replaced words
    resultString = (char *)malloc(i + count * (newWordLength - oldWordLength) + 1);

    i = 0;
    while (*str)
    {
        // Compare the substring with result
        if(strstr(str, oldWord) == str)
        {
            strcpy(&resultString[i], newWord);
            i += newWordLength;
            str += oldWordLength;
        }
        else{
            resultString[i] = *str;
            i += 1;
            str +=1;
        }
    }
    resultString[i] = '\0';
    return resultString;
}

int main()
{
    FILE * ptr = NULL;
    FILE * ptr2 = NULL;
    ptr = fopen("bill.txt", "r");
    ptr2 = fopen("genBill.txt", "w");
    char str [200];
    fgets(str, 200, ptr);
    printf("The given bill template was: %s\n", str);

    // Call the replaceWord function and generate newStr
    char * newStr;
    newStr = replaceWord(str, "{{item}}", "Table Fan");
    newStr = replaceWord(str, "{{outlet}}", "Ram Laxmi fan outlet");
    newStr = replaceWord(newStr, "{{name}}", "Harry");
    printf("The actual bill generated is: %s\n", newStr);
    printf("The generated bill has been written to the file genBill.txt\n");

    
    fprintf(ptr2, "%s", newStr);
    fclose(ptr);
    fclose(ptr2);
    return 0;
}