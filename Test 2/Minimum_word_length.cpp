Sample Input 1 :
this is test string
Sample Output 1 :
is
Sample Input 2 :
abc de ghihjk a uvw h j
Sample Output 2 :
a


#include<iostream>
#include "solution.h"
using namespace std;


int main(){
  char ch[10000], output[10000];
  cin.getline(ch, 10000);
  minLengthWord(ch, output);
  cout << output << endl;
}

#include <climits>
#include <cstring>
void minLengthWord(char input[], char output[])
{
    
    int minStart = -1;
    int minLength = INT_MAX;
    int currentStart = 0;
    int i = 0;
    int len = strlen(input);
    for(; i < len; i++){ 
        if(input[i] == ' '){
            int currentWordLength = i - currentStart;
            if(currentWordLength < minLength){
                minStart = currentStart; 
                minLength = currentWordLength;
            }
            currentStart = i + 1;
        }
    }
    if(minStart == -1){
        for(int i = 0; i <= len; i++) { 
            output[i] = input[i];
        }
    }
    else{
        int currentWordLength = i - currentStart;
        if(currentWordLength < minLength){
            minStart = currentStart;
            minLength = currentWordLength;
        } 
        int j = 0;
        for(int i = minStart; i < minStart + minLength; i++) {
            output[j++] = input[i];
        }
        output[j] = '\0';
    }
}


