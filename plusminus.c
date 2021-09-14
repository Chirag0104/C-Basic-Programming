#include<stdio.h>
int main(){
    int n1=0,n2=0,n3=0,n;
    float p1,p2,p3;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            n1++;
        }
        else if(arr[i]<0){
            n2++;
        }
        else
        n3++;
    }
    p1=(float)n1/(float)n;
    p2=(float)n2/(float)n;
    p3=(float)n3/(float)n;
    printf("%f\n%f\n%f",p1,p2,p3);
}