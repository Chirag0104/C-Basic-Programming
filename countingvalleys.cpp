#include<iostream>
using namespace std;
    int main() {
    int n,i,s=0,k=0;
    char c;
    cin>>n;
    for(i=0;i<n;i++)
        {
        cin>>c;
        if(c=='U')
            k++;
        else
            k--;
        if(k==0&&c=='U')
            s++;
    }
    cout<<s;
    return 0;
}
