#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x,y,z,diff1,diff2;
        cin>>x>>y>>z;
        diff1=abs(x-z);
        diff2=abs(y-z);
        if(diff1<diff2){
            cout<<"Cat A"<<endl;
        }
        else if(diff1>diff2){
            cout<<"Cat B"<<endl;
        }
        else{
            cout<<"Mouse C"<<endl;
        }
        
    }
}