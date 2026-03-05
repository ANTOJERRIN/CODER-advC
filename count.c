#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int c[256]={0};
    for(int i=0;s[i]!='\0';i++){
        c[s[i]]++;

    }
    for(int i=0;i<256;i++){
        if(c[i]!=0){
            printf("%c:%d\n",i,c[i]);
        }
    }
}