#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int counter=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int b = arr1[i]+arr1[j];
            if(i<j){
            if(b == k || b%k == 0 ){
                counter++;
                
            }}
        }
    }
    cout<<counter<<endl;
}