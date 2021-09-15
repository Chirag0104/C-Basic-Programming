#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=38){
            int b=arr[i]%10;
            if(5-b==2||10-b==2){
                arr[i]+=2;
            }
            else if(5-b==1||10-b==1){
                arr[i]+=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;;
    }
}