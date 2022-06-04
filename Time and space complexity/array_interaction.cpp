Sample Input 1 :
2
6
2 6 8 5 4 3
4
2 3 4 7 
2
10 10
1
10
Sample Output 1 :
2 3 4
10


#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int size1, size2;

		cin >> size1;
		int *input1 = new int[size1];

		for (int i = 0; i < size1; i++)
		{
			cin >> input1[i];
		}

		cin >> size2;
		int *input2 = new int[size2];

		for (int i = 0; i < size2; i++)
		{
			cin >> input2[i];
		}

		intersection(input1, input2, size1, size2);
		
		delete[] input1;
		delete[] input2;
		
		cout << endl;
	}

	return 0;
}

void intersection(int *arr1, int *arr2, int n, int m) 
{
   
    sort(arr1, arr1+n);
     sort(arr2, arr2+m);
    int i,j,k;
    i=0;
    j=0;
    
    while(i<n&&j<m)
    {
        if(arr1[i]==arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j])
            i++;
        else j++;
    }
    
    //Write your code here
}
