#include <stdio.h>
int main()
{
    int i=0;
    int j=0;
    char t=0;
    char str[100]={0};
    printf("Please Enter a String: ");
    gets(str);
    for(i=0;str[i]!=0;i++);
    for(i=i-1;i>=0;i--)
    {
        t=str[j];
        str[j]=str[i];
        str[i]=t;
        j++;
        if(i<=j)
            break;
    }
    printf("\nThe Given String in the Reverse form is: %s\n",str);
    return 0;
}
