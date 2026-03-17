#include<iostream>
using namespace std;

int sum_max_difference(int arr[],int n)
{
    int temp=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            temp += arr[i]-arr[i-1];
        }
    }
    return temp;
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
    int max_diff=sum_max_difference(arr,n);

    cout << "The Max Difference Is : " << max_diff;
    return 0;

}