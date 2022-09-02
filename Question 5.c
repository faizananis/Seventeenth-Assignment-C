#include <stdio.h>
int main()
{
    int i=0;
    char str[100]={0};
    printf("Please Enter a String: ");
    gets(str);
    for(i=0;str[i]!=0;i++)
    {
        if(str[i]>96&&str[i]<123);
        else if(str[i]>64&&str[i]<91)
        {
            str[i]=str[i]+32;
        }
    }
    printf("\nThe Given String in LOWER CASE letters is: %s\n",str);
    return 0;
}
