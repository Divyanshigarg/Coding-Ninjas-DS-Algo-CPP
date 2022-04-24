#include<bits/stdc++.h>

int findSecondLargest(int *arr, int n)
{
    int max=INT_MIN;
     for(int i=0;i<n;i++)
     {
         if(max<arr[i])
             max=arr[i];
     }
    int second_max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>second_max && arr[i]!=max)
            second_max=arr[i];
    }
    return second_max;
}
