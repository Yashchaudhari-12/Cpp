#include<iostream>
using namespace std;

int second_largest1(int arr[],int n)
{
    int second_largest=INT_MIN;
    int largest = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            second_largest=largest;
            largest=arr[i];
        }
        if(arr[i]>second_largest && arr[i]!=largest)
        {
            second_largest=arr[i];
        }
    }
    return second_largest;
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

    int second_largest = second_largest1(arr,n);

    if(second_largest==INT_MIN)
    {
        cout << "No Second Largest Element In The Array ";
    }
    else
    {
        cout << "Second Largest Element In The Given Array Is : " << second_largest;
    }
    return 0;
}