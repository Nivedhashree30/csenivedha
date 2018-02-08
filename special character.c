#include <stdio.h>
 int main()
{
    char    str[100];
    int countSpecialCha;
    int counter;
    countSpecialChar=0
    printf("Enter a string: ");
    gets(str);
    for(counter=0;str[counter]!=NULL;counter++)
    {
        if(str[counter]>='0' && str[counter]<='9')
            countDigits++;
        else if((str[counter]>='A' && str[counter]<='Z')||(str[counter]>='a' && str[counter]<='z'))
            countAlphabet++;
        else if(str[counter]==' ')
            countSpaces++;
        else
            countSpecialChar++;
    }
    printf(" \nSpecial Characters":%countSpecialChar);
    return 0;
}
