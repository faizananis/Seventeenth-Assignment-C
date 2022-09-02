#include <stdio.h>
int main()
{
    int i=0;
    int count=0;
    char str[100]={0};
    printf("Please Enter a String: ");
    gets(str);
    for(i=0;str[i]!=0;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            count++;
        }
    }
    printf("\nThere are %d Vowels in the whole string.\n",count);
    return 0;
}
