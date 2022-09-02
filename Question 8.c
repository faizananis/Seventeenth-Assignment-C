#include <stdio.h>
int main()
{
    int i=0;
    int n=0;
    char str1[100];
    printf("Please Enter a String: ");
    gets(str1);
    for(n=0;str1[n]!=0;n++);
    char str2[n];
    for(i=0;i<=n;i++)
    {
        str2[i]=str1[i];
    }
    printf("\nYour given string after copying to another string is: %s\n",str2);
    return 0;
}
