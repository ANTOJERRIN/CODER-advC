#include <stdio.h>

int main() {
    int a[]={10,20,5,40,30};
    int n=5;
    int first=-1,second=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>first)
        {
            second=first;
            first=a[i];
        }
        else if(a[i]>second && a[i]!= first){
            second=a[i];
        }
    }
    printf("second largest:%d",second);
    return 0;
}
