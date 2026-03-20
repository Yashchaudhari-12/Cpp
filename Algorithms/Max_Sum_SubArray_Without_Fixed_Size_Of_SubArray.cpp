#include<iostream>
using namespace std;

int max_sum1(int arr[],int n)
{
    int current_sum=arr[0];
    int max_sum=arr[0];

    for(int i=1;i<n;i++)
    {
        if(current_sum + arr[i]>arr[i])
        {
            current_sum = current_sum + arr[i];
        }
        else
        {
            current_sum = arr[i];
        }
        if(current_sum > max_sum)
        {
            max_sum=current_sum;
        }
    }
    return max_sum;
}
int main()
{
    int n;
    cout << "Enter Array Size : ";
    cin >> n;
    cout << "Enter Array Elements : ";
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    int max_sum=max_sum1(arr,n);

    cout << "The Max Sum Of SubArray Is : " << max_sum;
    return 0;
}