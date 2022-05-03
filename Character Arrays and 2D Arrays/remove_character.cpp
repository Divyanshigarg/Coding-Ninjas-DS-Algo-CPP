Sample Input 1:
aabccbaa
a
Sample Output 1:
bccb

#include <iostream>
#include <cstring>
using namespace std;

#include "solution.h"

int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    char c;
    cin >> c;
    removeAllOccurrencesOfChar(str, c);
    cout << str;
}


void removeAllOccurrencesOfChar(char str[], char c) 
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=c)
           cout<<str[i];
        
        str[i]='\0';  
    }
}

//both the solutions are correct
#include<cstring>
void removeAllOccurrencesOfChar(char input[], char c) {
    // Write your code here
    int j, n = strlen(input); 
    for (int i=j=0; i<n; i++) 
        
       if (input[i] != c) 
          input[j++] = input[i]; 
      
    input[j] = '\0'; 
}

