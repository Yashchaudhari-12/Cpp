#include<iostream>
using namespace std;

int max_sum_subarray(int arr[],int n,int k)
{
    int sum=0;
    int max_sum=INT_MIN;

    for(int i=0;i<k;i++)
    {
        sum += arr[i];
    }
    max_sum=sum;
    for(int i=k;i<n;i++)
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
    cout << "Enter Size Of SubArray : ";
    cin >> k;

    int max_sum=max_sum_subarray(arr,n,k);

    cout << "The Max Sum Is : " << max_sum;
    return 0;
}