#include<iostream>
using namespace std;

int is_smallest(int arr[],int  n)
{
    int smallest=arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    return smallest;
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

    int smallest=is_smallest(arr,n);

    cout << "The Smallest Element In The Given Array Is : " << smallest;
    return 0;
}