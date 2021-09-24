#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        if(n==0){cout<<"1"<<endl;}
        else if(n==1){cout<<"2"<<endl;}
        else{
            int h=2;
            for(int j=2;j<=n;j++){
                if(j%2==0){h++;}
                else{h=h*2;
                    }
            }
            cout<<h<<endl;
        }
        
    }
}