#include <stdio.h>
int main()
{
    int i=0;
    int alpha=0;
    int digit=0;
    int spec=0;
    char str[100]={0};
    printf("Please Enter a String: ");
    gets(str);
    for(i=0;str[i]!=0;i++)
    {
        if(str[i]>=65&&str[i]<=122)
        {
            alpha++;
        }
        else if(str[i]>=48&&str[i]<=57)
        {
            digit++;
        }
        else
        {
            spec++;
        }
    }
    printf("\nThere are %d alphabets, %d digits and %d",alpha,digit,spec);
    printf(" special characters are available in the given string.\n");
    return 0;
}
