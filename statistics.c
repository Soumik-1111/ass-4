#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter limit =");
    scanf("%d",&n);
    int a[n];
    int m=0,v=0,sd;
    printf("Enter %d values: ",n);
    for(int i=0;i<n;i++){

        scanf("%d",&a[i]);
        m+=a[i];
    }
    m/=n;
    for(int i=0;i<n;i++){
        v+= pow(a[i]-m,2);
    }
    sd=sqrt(v);

    printf("Mean = %d \nvariance= %d\nStandard Deviation= %d\n",m,v,sd);

    return 0;
}