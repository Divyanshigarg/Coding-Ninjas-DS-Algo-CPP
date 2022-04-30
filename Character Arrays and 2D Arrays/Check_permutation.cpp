Sample Input 1:
abcde
baedc
Sample Output 1:
true


#include <iostream>
#include <cstring>
using namespace std;

#include "solution.h"

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}


bool isPermutation(char str1[], char str2[]) 
{
    int index=0,freq[256]={0};
    
    for(int i=0;str1[i]!=0;i++)
    {
        int index= str1[i]++;
        freq[index]++;
    }
    
     for(int i=0;str2[i]!=0;i++)
    {
        int index= str2[i]++;
         freq[index]--;
    }
    
    for(int i=0;i<256;i++)
    {
        if(freq[i]!=0)
            return false;
    }
    
    return true;

}
