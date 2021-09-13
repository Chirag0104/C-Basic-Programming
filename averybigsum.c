#include<stdio.h>
int main(){
    int n;
    long int sum=0;
    scanf("%d",&n);
    int array1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array1[i]);
    }
    for(int i=0;i<n;i++){
        sum=sum+array1[i];
    }
    printf("%ld",sum);
}
