#include<iostream>
using namespace std;

int max_sum(int arr[],int n,int k)
{
    int a=0,sum=0;
    int max_sum=INT_MIN;
    for(int i=0;i<k+1;i++)
    {
        sum = sum - arr[i-k] + arr[i];
        if(sum>max_sum)
        {
          max_sum=sum;
        }
        }
    return max_sum;
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
    cout << "Enter Size Of Subarray : ";
    cin >> k;

    int max=max_sum(arr,n,k);

    cout << "The Max Sum Is : " << max;
    return 0;
}