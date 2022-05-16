Sample Input 1 :
xpix
Sample Output :
x3.14x
Sample Input 2 :
pipi
Sample Output :
3.143.14
Sample Input 3 :
pip
Sample Output :
3.14p


#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}

#include<bits/stdc++.h>
void help(char str[],int begin )
{
    if(str[begin]=='\0' )
        return;
    
    help(str,begin+1);
    
    if(str[begin]=='p' && str[begin+1]=='i')
    {
    for(int i=strlen(str);i>=begin+2;i--)
        str[i+2]=str[i];
    
    str[begin]='3';
    str[begin+1]='.';
    str[begin+2]='1';
    str[begin+3]='4';
    }
}
    
void replacePi(char input[]) 
{
 help(input,0);   
}



