#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    int liked=0;
    int start=5;
    for(int i=0;i<n;i++){
        liked=floor(start/2);
        count=count+liked;
        int share=liked*3;
        start=share;
    }
    cout<<count<<endl;
}