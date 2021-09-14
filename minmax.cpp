#include<iostream>
#include<algorithm>
#include<stdint.h>
using namespace std;
int main(){
    long long int max,min,sum=0;
    int n=5;
    int arr[n];
    for(int i=0;i<5;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    
    

sort(arr,arr+n);
max=sum-arr[0];
min=sum-arr[4];
cout<<min<<" "<<max;
}