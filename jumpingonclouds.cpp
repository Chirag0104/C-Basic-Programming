#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    int count=0,i=0;
    while(i<n-1){
        if(arr[i]==1){
            i=i+1;
        }
        else{
            if(arr[i + 2] == 0){
                count++;
                i=i+2;
                }
            else{
                count++;
                i=i+1;
            }    
        }
    }
    cout<<count<<endl;
}