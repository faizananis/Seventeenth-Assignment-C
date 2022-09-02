#include <stdio.h>
int main()
{
    int i=0;
    int j=0;
    int k=0;
    int count=0;
    char str[100]={0};
    printf("Please Enter a String: ");
    gets(str);
    printf("\nThe Frequency of each character in th string are given below: \n\n");
    printf("Character         Frequency\n\n");
    for(i=0;str[i]!=0;i++)
    {
        count=0;
        for(j=0;str[j]!=0;j++)
        {
            if(str[i]==str[j]||str[i]==str[j]+32||str[i]==str[j]-32)
                count++;
        }
        for(k=0;k<i;k++)
        {
            if(str[i]==str[k]||str[i]==str[k]+32||str[i]==str[k]-32)
                break;
        }
        if(i==k)
            printf("    %c                 %d\n",str[i],count);
    }
    return 0;
}
