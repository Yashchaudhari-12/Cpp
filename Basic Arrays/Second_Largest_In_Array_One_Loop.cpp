#include<iostream>
using namespace std;

int main()
{
    int arr[5],largest,second_largest;

    cout << "Enter Array Elements : ";

    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    largest=INT_MIN;
    second_largest=INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]>second_largest && arr[i]!=largest)
        {
            second_largest=arr[i];
        }
    }
    if(second_largest==INT_MIN)
    {
        cout << "No Second Largest Element ";
    }
    else
    {
        cout << "The Second Largest Element Is : " << second_largest;
    }
    return 0;
}