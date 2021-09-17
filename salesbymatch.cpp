#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,pair=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int k=0,i=0,j=1;
    while(k<n && i<n && j<n){
        if(arr[i]==arr[j]){
            pair++;
            i=i+2;
            j=j+2;
            k++;
        }
        else{
            i=j;
            j++;
            k++;
        }
        
    }
    cout<<pair<<endl;
}