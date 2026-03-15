#include<iostream>
using namespace std;

void rev_array(int arr[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        cout << arr[i] << " ";
    }
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
    rev_array(arr,n);
    return 0;

}