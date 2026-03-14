#include<iostream>
using namespace std;

bool is_sorted(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a;

    cout << "Enter Array Size : ";
    cin >> a;

    int arr[a];

    cout << "Enter Array Elements : ";

    for(int i=0;i<a;i++)
    {
        cin >> arr[i];
    }

    if(is_sorted(arr,a))
    {
        cout << "The Given Array Is Sorted";
    }
    else
    {
        cout << "The Given Array Is Not Sorted";
    }
    return 0;
}