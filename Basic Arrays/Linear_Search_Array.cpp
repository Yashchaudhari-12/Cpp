#include<iostream>
using namespace std;

int main()
{
    int arr[5],find;

    cout << "Enter Array Elements : ";
    
    for(int i=0;i<5;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Element To Search In The Array : ";
    cin >> find;
    for(int i=0;i<5;i++)
    {
        if(arr[i]==find)
        {
            cout << "Element Found at index " << i;
            return 0;
        }
    }
    cout << "Element Not Found";
    return 0;
}