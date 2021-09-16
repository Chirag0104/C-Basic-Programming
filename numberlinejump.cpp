#include<iostream>
using namespace std;
int main(){
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    int counter=0;
    for(int i=0;i<10000;i++){
        if(x1 + i*v1 == x2 + i*v2){
            counter++;
        }
    }
    if(counter>0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
