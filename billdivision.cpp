#include<iostream>
using namespace std;
int main(){
    int n,k,sum=0,expense,brian_expense,difference;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cin>>brian_expense;
    expense=(sum-arr[k])/2;
    if(expense==brian_expense){
        cout<<"Bon Appetit"<<endl;
    }
    else{
        difference=brian_expense - expense;
        cout<<difference<<endl;
    }
    
}