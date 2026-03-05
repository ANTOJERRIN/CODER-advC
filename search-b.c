#include <stdio.h>
int bs(int a[],int n,int k){
    int l=0,r=n-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(a[m]==k){
            return m;
        }
        else if(a[m]<k){
            l=m+1;
        }
        else{
            r=m-1;
        }
    }
    return -1;
}

int main() {
    int n,k;
    printf("enter");
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    int f=bs(a,n,k);
    if(f==-1){
        printf("element is not found");
    }
    else{
        printf("element is found at index %d", f);

    }
    
    return 0;
}
