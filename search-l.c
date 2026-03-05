#include<stdio.h>
void input(int a[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
int search(int a[],int n,int k){
    for(int i=0;i<n;i++){
        if(a[i]==k){
            return i;
        }
    }
}
int main(){
int n,k;
printf("enter the sixe and key:");
scanf("%d%d",&n,&k);
int a[n];
input(a,n);
int f=search(a,n,k);
if(f==-1){
    printf("the elment is not fouind");
}
else{printf("the elemnt is found");
}
return 0;
}