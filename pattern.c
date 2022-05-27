// #include<stdio.h>

// void main(){
//     int i,j,space,x=0;
//     for(i=1;i<=6;i++){
//         for(space=6;space>=6-i;space--){
//             printf("  ");
//         }
//         for(j=6;j>=i;j--){
//             printf("%c ",'F'-x);
//             x++;
//         }
//         x=i;
//         printf("\n");
//     }
//     getch();
// }


#include <stdio.h>
int main() {
    int i,j,n;
    printf("Enter the rows : \n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(j=i-1;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

// #include<stdio.h>

// int main(){
//     int i,j,space;
//     for(i=1;i<=4;i++){
//         for(space=i;space<4;space++)
//             printf(" ");
//         for(j=1;j<=2*i-1;j++){
//             if(j==1 || j== 2*i-1 || i==4){
//                 printf("*");
//             }else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }