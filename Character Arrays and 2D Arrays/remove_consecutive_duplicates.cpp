Sample Input 1:
aabccbaa
Sample Output 1:
abcba


#include <iostream>
#include <cstring>
using namespace std;

#include "solution.h"

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}

void removeConsecutiveDuplicates(char str[]) {
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=str[i+1])
            cout<<str[i];
        str[i]='\0';
    }
}
