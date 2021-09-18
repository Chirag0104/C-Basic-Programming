#include<iostream>
using namespace std;
int main(){
    int budget,key_mod,mouse_mod;
    cin>>budget>>key_mod>>mouse_mod;
    int arr1[key_mod], mouse[mouse_mod];
    for(int i=0;i<key_mod;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<mouse_mod;i++){
        cin>>mouse[i];
    }
    int max = -1;
    for(int i=0;i<key_mod;i++){
        for(int j=0;j<mouse_mod;j++){
            int sum = arr1[i]+mouse[j];
            if(sum>max && sum<=budget){
                max=sum;
            }
        }
    }
    if(max>budget){
        cout<<"-1"<<endl;}
    else{
        cout<<max<<endl;
    }    
    }
