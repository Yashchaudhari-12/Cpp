#include<iostream>
using namespace std;

bool Is_sorted(int arr[],int n)
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
    int n;
    cout << "Enter Array Size : ";
    cin >> n;
    cout << "Enter Array Elements : ";
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    int is_sorted=Is_sorted(arr,n);

    if(is_sorted==false)
    {
        cout << "The Array Is Not Sorted ";
    }
    else
    {
        cout << "The Array Is Sorted ";
    }
    return 0;
}