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

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}



#include <string.h>
using namespace std;

int helper(int num, string s[], string m[])
{
    //base case
    if(num==0 || num==1)
    {
        s[0]="";
        return 1;
    }

    int lastnum = num%10;
    string tempOutput[500];
    int size  = helper(num/10, tempOutput, m); // this is going to bring the code for the remaining part
        // of num which is num/10 and stre them in tempoutput

        // now we have to link the tempoutput with the characters corresponding to num%10
	string a = m[lastnum];
    int k=0;
    for (int i=0; i<a.length();i++)
    {
        for(int j= 0;j<size;j++)// to size obtained on line 12
        {
            //int k;
            s[k++] = tempOutput[j] + a[i];
        }
    }
    return k;

    }

int keypad(int num, string output[])
{
    string m[10];
    m[0]="";
    m[1]="";
    m[2]="abc";
    m[3]="def";
    m[4]="ghi";
    m[5]="jkl";
    m[6]="mno";
    m[7]="pqrs";
    m[8]="tuv";
    m[9]="wxyz";
    return helper(num,output,m);
}

