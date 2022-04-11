#include<iostream>
using namespace std; 

int main ()
{
    long int num, bin[20];
    cin >> num;
    
    if(num==0)
    {
        cout<<"0";
    }
    
    int i=0;
    while (num > 0)
    {
        bin[i] = num % 2;
        i++;
        num /= 2;
    }
    for(int j=i-1;j>=0;j--)
        cout<<bin[j];
    return 0;
}
