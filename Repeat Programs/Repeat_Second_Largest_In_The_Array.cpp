#include<iostream>
using namespace std;

int second_max(int arr[],int n)
{
    int largest = arr[0];
    int second_Largest=INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            second_Largest=largest;
            largest=arr[i];
        }
        if(arr[i]>second_Largest && arr[i]!=largest)
        {
            second_Largest=arr[i];
        }
    }
    return second_Largest;
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
    int second_largest=second_max(arr,n);

    if(second_largest==INT_MIN)
    {
        cout << "No Second Largest In The Given Array ";
    }
    else
    {
        cout << "The Second Largest Element In The Given Array Is : " << second_largest;
    }
    return 0;
}