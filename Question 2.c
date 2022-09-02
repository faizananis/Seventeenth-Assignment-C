#include <stdio.h>
int main()
{
    int i=0;
    char c=0;
    int count=0;
    char str[100]={0};
    printf("Please Enter a String: ");
    gets(str);
    printf("\nPlease Enter a Character which occurence you want to find in the string: ");
    scanf("%c",&c);
    for(i=0;str[i]!=0;i++)
    {
        if(str[i]==c)
        {
            count++;
        }
    }
    printf("\nYour given character which is '%c' is availabe %d times in the given string.\n",c,count);
    return 0;
}
