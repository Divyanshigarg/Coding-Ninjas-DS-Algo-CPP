Sample Input:
23
Sample Output:
ad
ae
af
bd
be
bf
cd
ce
cf


#include <iostream>
#include <string>
#include "solution.h"
using namespace std;

int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}



#include <iostream>
#include <string>
using namespace std;
string key[]={" ", " ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void printKeypad(int num,string str=""){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    if(num==0)
    {
        cout<<str<<endl;
        return;
    }
    int x=num%10;
    for(int i=0;i<key[x].size();i++)
    {
        printKeypad(num/10,key[x][i]+str);
    }
    
}
