#include<iostream>
using namespace std;

int is_largest(int arr[],int n)
{
    int largest=0;
    largest=arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    return largest;
}

int main()
{
    int a;

    cout << "Enter Array Size : ";
    cin >> a;
    cout << "Enter Array Elements : ";
    int arr[a];
    for(int i=0;i<a;i++)
    {
        cin >> arr[i];
    }
    int largest=is_largest(arr,a);
    cout << "The Largest Element In The Array Is : " << largest;
    return 0;
}