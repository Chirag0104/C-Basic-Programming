#include<iostream>
using namespace std;
int main(){
    int t,n,count,rem,i;
    cin>>t;
    for(int j=0;j<t;j++){
        cin>>n;
        count =0;
        i=n;
        while(i!=0){
            rem=i%10;
            if(rem==0);
            else if(n%rem==0){
                count++;
            }
            i=i/10;
        }
        cout<<count<<endl;
    }
}