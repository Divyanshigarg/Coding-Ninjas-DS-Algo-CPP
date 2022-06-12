Sample Input 1 :
abchjsgsuohhdhyrikkknddg
coding
Sample Output 1 :
true
Sample Input 2 :
abcde
aeb
Sample Output 2 :
false

#include<iostream>
using namespace std;
#include "solution.h"

int main()
{
	char large[10000];
	char small[10000];
	cin>>large;
	cin>>small;
	bool x=checksequenece(large , small);

	if(x)
		cout<<"true";
	else
		cout<<"false";

}


#include<bits/stdc++.h>
bool checksequenece(char large[] , char*small) 
{
  //   int count=0;
  //   int j=0;
  //  for(int i=0;s[i]!='\0';i++)
  //  {
  //      if(j>=0)
  //      {
  //      if(s[i]==t[j])
  //      {
  //          count++;
  //          j++;
  //      }
  //      else 
  //          i++;     
  //    }
  // }
  //   if(count==strlen(t))
  //       return true;
  //   else 
  //       return false;
    
    // if(s=='\0')
    //     return false;
    // if(t=='\0')
    //     return true;
    // else
    //   // for(int i=0;s[i]!='\0';i++)
    //   // {
    //       if(s[0]==t[0])
    //           checksequenece(s+1,t+1);
    //       else
    //            checksequenece(s+1,t);
    // //  }
    bool val;
    if (large[1] == '\0' && small[1] != '\0')
        return false;
    if (large[0] == small[0] && small[1] == '\0')
        return true;
    if (large[0] != small[0] && small[1] == '\0' && large[1] == '\0')
        return false;
    if (large[0] == small[0])
        val = checksequenece(large + 1, small + 1);
    else
        val = checksequenece(large + 1, small);
    if (val == true)
        return true;
    else
        return false;
}

