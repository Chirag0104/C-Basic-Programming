#include<stdio.h>
int main(){
    int n;
    long int sum=0;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        sum=sum+array[i];
    }
    printf("%ld",sum);
}
