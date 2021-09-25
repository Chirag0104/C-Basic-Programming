#include<iostream>
using namespace std;
int main(){
    long long int t,b,w,wc,bc,z;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>b>>w>>bc>>wc>>z;
        long long int cost;
        if(bc < wc-z){
            cost = bc*b + bc*w + w*z;
        }
        else if(wc < bc -z){
            cost = wc*b + wc*w + b*z;
        }
        else{
           cost = wc*w + bc*b; 
        }
        cout<<cost<<endl;
    }
}