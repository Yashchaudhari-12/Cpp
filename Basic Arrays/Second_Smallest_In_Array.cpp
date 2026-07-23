#include<iostream>
using namespace std;

int main()
{
    int arr[5],smallest,second_smallest;

    cout << "Enter Array Elements : ";

    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
      cin >> arr[i];
    } 
    smallest=INT_MAX;
    second_smallest=INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            second_smallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]<second_smallest && arr[i]!=smallest)
        {
            second_smallest=arr[i];
        }
    }
    if(second_smallest==INT_MAX)
    {
        cout << "No Second Smallest In The Array ";
    }
    else
    {
       cout << "The Second Smallest Element In The Array Is : " << second_smallest;
    }
    return 0;
}