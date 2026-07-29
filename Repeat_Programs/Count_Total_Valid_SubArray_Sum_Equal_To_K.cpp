#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int count1(int arr[],int n,int k)
{
    unordered_map<int,int>mp;
    mp[0]=1;

    int sum=0,count=0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];

        if(mp.find(sum-k)!=mp.end())
        {
            count += mp[sum-k];
        }
        mp[sum]++;
    }
    return count;
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
    cout << "Enter Sum : ";
    cin >> k;

    int count = count1(arr,n,k);

    cout << "No Of SubArrays Whose Sum Is Equal To " << k << " Is " << count;
    return 0;

}