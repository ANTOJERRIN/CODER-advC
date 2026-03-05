#include <stdio.h>
#include <string.h>

int main() {
    char S[100];
    scanf("%s",S);
    int l=strlen(S);
    int f=0;
    for(int i= 0;i<=l/2;i++)
    {
        if(S[i]!=S[l-i-1])
        {
            f=1;
            break;
        }
    }
    if(f)
    {
        printf("not a palindrome");
    }
    else
    {
        printf("palindrome");
    }

    return 0;
}
