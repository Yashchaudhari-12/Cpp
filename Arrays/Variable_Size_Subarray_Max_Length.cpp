#include<iostream>
using namespace std;

int max_len1(int arr[],int n,int k)
{
    int sum = 0;
    int j=0;
    int max_len = 0;
    for(int i=0;i<n;i++)
    {
       sum += arr[i];

       while(sum>k)
       {
        sum -= arr[j];
        j++;
       }
       max_len = max(max_len,i-j+1);
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

    cout << "The Max Length Is : " << max_len;
    return 0;
}