#include <stdio.h>
int main()
{
    int i=0;
    char str[100]={0};
    printf("Please Enter a String to calculate its length: ");
    gets(str);
    for(i=0;str[i]!=0;i++);
    printf("\nThe Length of a given string is: %d\n",i);
    return 0;
}
