#include<stdio.h>
#include <limits.h>
int main()
{
    int n;

    printf("enter the number of elements in the array");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int l=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>l)
        {
            l=a[i];

        }
    }
    printf("largest:%d",l);
    int s=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<s){
            s=a[i];
        }
    }
    printf("smallest:%d",s);
    int sl=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]>sl && a[i]<l)
        {
            sl=a[i];
        }
    }
    printf("second largest:%d",sl);

}