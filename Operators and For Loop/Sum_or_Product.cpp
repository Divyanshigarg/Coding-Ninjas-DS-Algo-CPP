#include<iostream>
using namespace std;

int main() {
	int n,sum=0,product=1;
    cin>>n;
    
    int c;
    cin>>c;
    
    for(int i=1;i<=n;i++)
    {
        sum+=i;
        product*=i;
    }
    
    if(c==1)
        cout<<sum;
    else if(c==2)
        cout<<product;
    else
        cout<<"-1";
}

