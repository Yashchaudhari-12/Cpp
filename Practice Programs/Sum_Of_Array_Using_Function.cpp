#include<iostream>
using namespace std;

int sum_of_array(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    return sum;
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
    int sum = sum_of_array(arr,n);

    cout << "The Sum Of Given Array Is : " << sum;
    return 0;
}