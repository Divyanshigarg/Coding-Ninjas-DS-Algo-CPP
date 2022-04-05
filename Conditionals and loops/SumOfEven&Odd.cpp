#include<iostream>
using namespace std;

int main() {
	// Write your code here
	long int n;
    int even_sum=0,odd_sum=0,rem=0;
    cin>>n;
    while(n!=0)
    {
        rem=n%10;       // for separating the digits from the number
        if(rem%2==0)
            even_sum+=rem;    //adding the digits
        else
            odd_sum+=rem;
        n=n/10;            //for making the number one digit smaller
    }
    cout<<even_sum<<" ";
    cout<<odd_sum;
    
}
