#include<iostream>
using namespace std;

int max_len1(int arr[],int n,int k)
{
    int sum = 0;
    int i=0;
    int max_len=0;

    for(int j=0;j<n;j++)
    {
        sum += arr[j];

        while(sum>k)
        {
           sum -= arr[i];
           i++;
        }
        if(sum==k)
        {
            max_len=max(max_len,j-i+1);
        }
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
    cout << "Enter Sum : ";
    cin >> k;
    int max_len=max_len1(arr,n,k);

    cout << "The Max length Is : " << max_len;

    return 0;
}