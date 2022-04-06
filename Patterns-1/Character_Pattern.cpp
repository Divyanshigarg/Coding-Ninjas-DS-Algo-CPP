#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            char startchar='A'+i-1;
            char ch=startchar+j-1;
            cout<<ch;
        }
        cout<<endl;
    }
}


