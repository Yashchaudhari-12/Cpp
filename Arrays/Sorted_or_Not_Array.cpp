#include<iostream>
using namespace std;

int main()
{
    int arr[5],count=0;

    cout << "Enter Elements of Array : ";

    for(int i=0;i<5;i++)
    {
        cin >> arr[i];
    }
    int temp=arr[0];
    int n=5;

    for(int i=1;i<5;i++)
    {
        if(arr[i]>=temp)
        {
            temp=arr[i];
            count +=1;
        }
    }
    if(count==n-1)
    {
        cout << "Array Is Sorted";
    }
    else
    {
        cout << "Array Is Not Sorted";
    }
    return 0;

}