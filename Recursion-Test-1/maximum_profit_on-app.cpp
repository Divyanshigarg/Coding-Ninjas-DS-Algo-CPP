Sample Input 1 :
4
30 20 53 14
Sample Output 1 :
60
Sample Output 1 Explanation :
Price of your app should be Rs. 20 or Rs. 30. For both prices, you can get the profit Rs. 60.
Sample Input 2 :
5
34 78 90 15 67
Sample Output 2 :
201

#include <iostream>
using namespace std;
#include "solution.h"

int main() {
    int n ,*input,i,*cost;
    cin>>n;
    input = new int[n];
    for(i = 0;i < n;i++)
        cin>>input[i];
    
    cout << maximumProfit(input, n) << endl;
    
}



#include<bits/stdc++.h>
int maximumProfit(int budget[], int n) 
{
    sort(budget,budget+n);
    int max_profit= budget[0]*n ;
    for(int i=1;i<n-1;i++)
    {
    if(budget[i] * (n-i) > max_profit)
        max_profit= budget[i]* (n-i);
    }
    return max_profit;
}

