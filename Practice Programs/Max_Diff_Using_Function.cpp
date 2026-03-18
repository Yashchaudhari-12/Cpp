#include<iostream>
using namespace std;

int max_difference(int arr[],int n)
{
    int min=arr[0];
    int max_diff=0;

    for(int i=1;i<n;i++)
    {
        int diff = arr[i]-min;

        if(diff>max_diff)
        {
            max_diff=diff;
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return max_diff;
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
    int max=max_difference(arr,n);

    cout << "The Max Difference Is : " << max;
    return 0;
}