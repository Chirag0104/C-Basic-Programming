#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,sum1=0,sum2=0,diff;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        sum1+=arr[i][i];
    }
    int i=0,j=n-1;
    while(i<n){
        sum2+=arr[i][j];
        i++;
        j--;
    }

    diff=abs(sum1-sum2);
    printf("%d",diff);   
}
