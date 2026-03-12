#include<iostream>
using namespace std;

int main()
{
    int arr[5];

    cout << "Enter Array Elements : ";

    for(int i=0;i<5;i++)
    {
        cin >> arr[i];
    }
    int n= sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            cout << "Array Is Not Sorted";
            return 0;
        }
    }
    cout << "Array Is Sorted";
    return 0;
}