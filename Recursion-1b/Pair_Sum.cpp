
Sample Input 1 :
hello
Sample Output 1:
hel*lo
Sample Input 2 :
aaaa
Sample Output 2 :
a*a*a*a


#include "solution.h"
using namespace std;

int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}


#include<bits/stdc++.h>
void help(char str[],int size)
{
    if(size==0)
        return ;
    
    help(str+1,size-1);
    if(str[0]==str[1])
    {
        for(int i=strlen(str);i>0;i--)
        {
            str[i+1]=str[i];
            
        }
        str[1]='*';
        size=size+1;
    }    
    
}

void pairStar(char input[]) {
    int size=strlen(input);
      help(input,size);
}



