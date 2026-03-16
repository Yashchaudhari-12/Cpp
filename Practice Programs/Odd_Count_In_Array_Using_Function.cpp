#include<iostream>
using namespace std;

int odd_count(int arr[],int n)
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            count +=1;
        }
    }
    return count;
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

    int count = odd_count(arr,n);

    cout << "The No of Odd No Present In The Give Array Are : " << count;
    return 0;
}