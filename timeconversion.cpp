#include <iostream>
using namespace std;
int main()
{
    int hr,min,sec;
    string str;
    getline(cin,str);
    hr=(str[0]-'0')*10+(str[1]-'0');
    min=(str[3]-'0')*10+(str[4]-'0');
    sec=(str[6]-'0')*10+(str[7]-'0');
    if(str[8]=='A'&&hr==12){
        hr=00;
    }
    else if(str[8]=='P'||str[7]=='P'){
        if(hr==12){
            hr=12;
        }
        else{
            hr=hr+12;
        }
    }
     printf("%02d:%02d:%02d",hr,min,sec);

    return 0;
}
