Sample Input 1:
abdefgbabfba
Sample Output 1:
b


#include <iostream>
#include <cstring>
using namespace std;

#include "solution.h"

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}

char highestOccurringChar(char input[]){
    
    int arr[26]={0};
    int maxFreq=0;
    
    for(int i=0;input[i]!='\0';i++){
        arr[input[i]-'a']+=1;
        maxFreq=max(maxFreq,arr[int(input[i])-'a']);
        
    }
    
    char ans;
    
    for(int i=0;input[i]!='\0';i++){
        if(arr[int(input[i])-'a']==maxFreq)
        {
            ans=input[i];
            break;
        }       
    }
    return ans;
}
