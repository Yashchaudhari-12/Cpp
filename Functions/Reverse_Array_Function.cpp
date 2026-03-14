#include<iostream>
using namespace std;

void reverse_array(int arr[],int n)
{
    for(int i = n-1;i>=0;i--)
    {
        cout << arr[i] << " ";
    } 
}

int main()
{
    int a;

    cout << "Enter Array Size : ";
    cin >> a;
    cout << "Enter Array Elements : ";

    int arr[a];
    int arr1[a];

    for(int i=0;i<a;i++)
    {
        cin >> arr[i];
    }
    reverse_array(arr,a);
    return 0;
}