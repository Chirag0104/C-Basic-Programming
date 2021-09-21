#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,k,req;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    req=max-k;
    if(req>0){
        cout<<req<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
}