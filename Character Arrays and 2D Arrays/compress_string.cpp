Sample Input 1:
aaabbccdsa
Sample Output 1:
a3b2c2dsa


#include <iostream>
#include <cstring>
#include<string>
using namespace std;

#include "solution.h"

int main() {
    int size = 1e6;
    string str;
    getline(cin, str);
    str = getCompressedString(str);
    cout << str << endl;
}

string getCompressedString(string &input)
{
    char current =input[0];
    int count = 1;
    string output;
    for(int i = 1; i<input.length(); i++){
        if(input[i]==current){
            count++;
        }else{
            if(count>1){
                output += current;
                output += count + '0';
                // cout<<current<<count;
            }
            else
            {
                output += current;
                // cout<<current;
            }
           // cout<<current<<count;
            current = input[i];
            count = 1;
        }
    }
      //cout<<current<<count;
         if(count>1)
         {
             output += current;
             output += count + '0';
                // cout<<current<<count;
            }else{
             output += current;
                // cout<<current;
         }
    return output;
}
