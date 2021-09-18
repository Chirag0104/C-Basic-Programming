#include<iostream>
using namespace std;
int main(){
    int n,p,count1=0,count2=0;
    cin>>n>>p;
    
    
    
    if(n%2==0){
    for(int i=n-1;i>0;){
        if(i==p || i-1 == p){
            count2++;
            break;
        }
        else{
            count2++;
        }
        i=i-2;
    } }
    else{
        for(int i=n-2;i>0;){
        if(i==p || i-1 == p){
            count2++;
            break;
        }
        else{
            count2++;
        }
        i=i-2;
    }
    }
    
    for(int i=2;i<=n;){
        if(i==p || i+1 == p){
            count1++;
            break;
        }
        else{
            count1++;
        }
        i=i+2;
    }
    

    
    if(p==1 || n==p){
        cout<<0<<endl;
    }
    else if(n%2!=0){
        if(p==1 || p==n || p==n-1 ){
            cout<<"0"<<endl;
        }
        else{
            if(count1>count2){
            cout<<count2<<endl;
        }
        else{
            cout<<count1<<endl;
        } 
        }
    }
    else{
        if(count1>count2){
            cout<<count2<<endl;
        }
        else{
            cout<<count1<<endl;
        }
    }
    }
    
