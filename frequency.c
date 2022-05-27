#include<stdio.h>

int main(){
    int n;
    printf("Enter string length= ");
    scanf("%d",&n);
    char s[n];
    printf("Enter string(in lowercase):: ");
    scanf("%s",&s);

    int a[26]={0};
    for(int i=0;i<n;i++){
        a[s[i]-97]++;
    }
    for(int i=0;i<26;i++)
    if(a[i]!=0)
    printf("%c: %d\n",'a'+i,a[i]);
    return 0;
}