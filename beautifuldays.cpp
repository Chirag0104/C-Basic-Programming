#include<iostream>
#include<algorithm>
using namespace std;
int reverse(int i){
    int reve=0,rem;
    while(i!=0)    
  {    
     rem=i%10;      
     reve=reve*10+rem;    
     i/=10;    
  }
  return reve;    
}
int main(){
    int i,j,k;
    cin>>i>>j>>k;
    int count=0;
    for(int a=i;a<=j;a++){
        int rev=reverse(a);
        
        int diff= abs(rev-a);
        if(diff%k==0){
           
            count++;
        }
    }
    cout<<count<<endl;
}
