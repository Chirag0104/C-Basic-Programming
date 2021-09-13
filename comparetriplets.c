#include<stdio.h>
int main(){
    int score1=0,score2=0,array1[3];
    int array_two[3];
    for(int i=0;i<3;i++){
        scanf("%d",&array1[i]);
    }
    for(int i=0;i<3;i++){
        scanf("%d",&array_two[i]);
    }
    for(int i=0;i<3;i++){
    if(array1[i]>array_two[i]){
        score1+=1;
    }
    else if(array1[i]<array_two[i]){
        score2+=1;
    }
    }
    printf("%d %d",score1,score2);
}
