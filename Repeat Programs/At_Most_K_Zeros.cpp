#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int max_len1(int arr[],int n,int k)
{
    int count=0,max_len=0,i=0;

    for(int j=0;j<n;j++)
    {
        if(arr[j]==0)
        {
            count++;
        }
        while(count>k)
        {
            if(arr[i]==0)
            {
                count--;
            }
            i++;
        }
        max_len=max(max_len,j-i+1);
    }
    return max_len;
}
int main()
{
    int n,k;
    cout << "Enter Array Size : ";
    cin >> n;
    cout << "Enter Array Elements : ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter No Of Zero : ";
    cin >> k;

    int max_len=max_len1(arr,n,k);

    cout << "The Max length Of SubArray With Atmost " << k << " Zero Is " << max_len;
    return 0;
}