Sample Input 1 :
00001231
Sample Output 1 :
1231
Sample Input 2 :
12567
Sample Output 2 :
12567


#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}



#include<bits/stdc++.h>

#include<cmath>
int helper(char *str,int size)
{
    int p=str[0];
    p=p-48;
    
    if(size==1)
    {
        return p;
    }
    
    return (p*pow(10,size-1)) + helper(str+1,size-1);
}

int stringToNumber(char input[])
{
    int size=strlen(input);
    int ans=helper(input,size);
    return ans;
}
