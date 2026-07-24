#include<iostream>
using namespace std;

void rev_array(int arr[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}
int main()
{
    int n;
    cout << "Enter Array Size : ";
    cin >> n;
    int arr[n];

    cout << "Enter Array Elements : ";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    rev_array(arr,n);

    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}