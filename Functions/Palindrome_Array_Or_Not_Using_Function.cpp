#include<iostream>
using namespace std;

bool is_palindrome(int arr[],int n)
{
    for(int i=0,j=n-1;i<j;i++,j--)
    {
       if(arr[j]!=arr[i])
       {
           return false;
       }
    }
    return true;
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
    if(is_palindrome(arr,n))
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not A Palindrome";
    }
    return 0;
}