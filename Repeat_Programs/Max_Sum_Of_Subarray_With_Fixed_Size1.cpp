#include<iostream>
using namespace std;

int max_sum1(int arr[],int n,int k)
{
    int sum = 0;
    for(int i=0;i<k;i++)
    {
        sum += arr[i];
    }
    int max_sum=sum;
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
    cout << "Enter Subarray Size : ";
    cin >> k;

    int max_sum = max_sum1(arr,n,k);

    cout << "The Max Sum Is : " << max_sum;
    return 0;
}