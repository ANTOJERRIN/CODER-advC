#include <stdio.h>
int f(int n){
    if(n==2){
        return 1;
    }
    if(n>2){
        return f(n-2)+f(n-1);
    }
}
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;ii<n;i++){
        
    }
    return 0;
}
