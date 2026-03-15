#include<iostream>
using namespace std;

int print_second_largest(int arr[],int n)
{
    int largest=INT_MIN;
    int second_largest=INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]>second_largest && arr[i]!=largest)
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
    int second_largest=print_second_largest(arr,n);

    if(second_largest==INT_MIN)
    {
        cout << "No Second Largest Element In The Given Array";
    }
    else
    {
        cout << "The Second Largest Element In The Given Array Is : " << second_largest;
    }
    return 0;
}