Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
emocleW ot gnidoC sajniN


#include <iostream>
#include <cstring>
using namespace std;

#include "solution.h"

int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}

void reverse(char input[], int start, int end){
    int i = start, j = end;
    while(i < j){
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
}
void reverseEachWord(char input[]){
    int start = 0, end = 0, i;
    for(i = 0; input[i] != '\0'; i++){
        if(input[i] == ' '){
            end = i - 1;
            reverse(input, start, end);
            start = i + 1;
           
        }
    }
    end = i - 1;
    reverse(input, start, end);
}
