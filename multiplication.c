#include<stdio.h>

int main(){
    int i,j,n;
    printf("Enter an integer : ");
    scanf("%d", &n);

    for(i=0;i<=n;i++)
        printf("%d",i);
    printf("\n");

        for(i=1;i<=n;i++)
        {
            printf("%d",i);
            for(j=i;j<=n*i;j+=i){
                printf("%d",j);
            }
            printf("\n");
        }
    
    return 0;
}