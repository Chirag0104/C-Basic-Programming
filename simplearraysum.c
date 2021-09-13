#include <stdio.h>


int main()
{
    int ar_count;
    scanf("%d",&ar_count);
    int ar[ar_count];
    for(int i=0;i<ar_count;i++){
        scanf("%d",&ar[i]);
    }
    int sum=0;
    for(int i=0;i<ar_count;i++){
        sum=sum+ar[i];
    }
    
    printf("%d",sum);

    return 0;
}
