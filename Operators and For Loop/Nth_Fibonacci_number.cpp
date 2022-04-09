#include<iostream>
using namespace std;


int main(){
    int a=0,b=1,c;
    int n;
    cin>>n;
    
    if(n==0 || n==1)
    {
        cout<<n;
    }
    else
    {
    for(int i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    cout<<c;
    }
}

