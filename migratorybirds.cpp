#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,k=5;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int arr1[k]={0,0,0,0,0};
    for(int i=0;i<n;i++){
        for(int j=1;j<6;j++){
            if(arr[i]==j){
                arr1[j-1]++;
            }
        }
    }
    
    int max=arr1[0];
    for(int i=0;i<k;i++){
        if(arr1[i]>max){
            max=arr1[i];
        }
    }
    for(int i=0;i<k;i++){
        if(arr1[i]==max){
            cout<<i+1<<endl;
            break;
        }
    }
    
    
}