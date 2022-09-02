#include <stdio.h>
int main()
{
    int i=0;
    int j=0;
    int k=0;
    int n=0;
    int tempi=0;
    int tempj=0;
    char str[100]={0};
    printf("Please Enter a String: ");
    gets(str);
    for(n=0;str[n]!=0;n++);
    char sorted[n+1];
    for(i=0;i<=n;i++)
        sorted[i]=0;
    for(i=0;str[i]!=0;i++)
    {
        k=0;
        tempi=0;
        tempj=0;
        if(str[i]>=65&&str[i]<=90)
        {
            tempi=str[i]+32;
        }
        else
        {
            tempi=str[i];
        }
        for(j=0;str[j]!=0;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(str[j]>=65&&str[j]<=90)
            {
                tempj=str[j]+32;
            }
            else
            {
                tempj=str[j];
            }
            if(tempi>tempj)
            {
                k++;
            }
        }
        if(sorted[k]==0)
            sorted[k]=str[i];
        else
        {
            while(k<n-1)
            {
                if(sorted[k]!=0)
                    k++;
                else
                    break;
            }
            sorted[k]=str[i];
        }
    }
    printf("\nThe Sorted String in ascending order of the given string is: %s\n",sorted);
    return 0;
}
