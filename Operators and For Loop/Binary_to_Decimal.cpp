#include<iostream>
using namespace std;

int main() {
	int binary,rem=0,b=1,temp,dec=0;
    cin>>binary;
    
    while(binary!=0)
    {
        rem=binary%10;
        dec=dec+rem*b;
        b*=2;
        binary=binary/10;
    }
    cout<<dec;
}

