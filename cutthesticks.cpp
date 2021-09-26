#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    int minimum=1000;
    int m=0;
    while(m<n){
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                count++;
            }
        }
        if(count>0){
        cout<<count<<endl;}
        for(int i=0;i<n;i++){
            if(arr[i]>0){
        minimum=min(minimum,arr[i]);}
    }
        for(int i=0;i<n;i++){
            arr[i]=arr[i]-minimum;
        }
        count=0;
        minimum=1000;
        m++;
    }
}