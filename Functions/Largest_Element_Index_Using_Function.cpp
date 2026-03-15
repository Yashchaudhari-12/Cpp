#include<iostream>
using namespace std;

int Index_largest(int arr[],int n)
{
    int largest=arr[0];
    int largest_index=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
            largest_index=i;
        }
    }
    return largest_index;
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
    int largest_index=Index_largest(arr,n);

    cout << "The Largest Element Is Present At Index No : " << largest_index;
    return 0;
}