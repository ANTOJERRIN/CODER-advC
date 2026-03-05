//first reversing an array
#include<stdio.h>
int main()
{
    int a[4]={1,0,5,3};
    int n=4;
    for (int i=n-1;i>=0;i--)//we are starting from the last element and going to the first element
    {
        printf("%d",a[i]);
    }
}