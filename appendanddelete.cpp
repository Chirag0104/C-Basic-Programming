#include<iostream>
using namespace std;
int main(){
    int d1,m1,y1,d2,m2,y2;
    cin>>d1>>m1>>y1>>d2>>m2>>y2;
    int fine;
    if(m1==m2 && y1==y2){
        fine = (d1 - d2) * 15;
    }
    else if(y1==y2 && m1!=m2){
        fine = (m1 - m2) * 500;
    }
    else{
        fine = 10000;
    }
    cout<<fine<<endl;
}
