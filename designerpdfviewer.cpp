#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n=26;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

string str;
cin>>str;
char arr2[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
int count=0;
int max=arr[0];
int length=str.length();
for(int i=0;i<length;i++){
    for(int j=0;j<26;j++){
        if(str[i]==arr2[j]){
            count++;
            if(arr[j]>max){
                max=arr[j];
           }
        }
    }
}
int area = count*max;
cout<<area<<endl;
}