#include<iostream>
using namespace std;

int main()
{
    int arr[5];

    cout << "Enter Array Elements : ";

    for(int i=0;i<5;i++)
    {
        cin >> arr[i];
    }

    int largest=arr[0];
    int smallest=arr[0];

    for(int i=1;i<5;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }

    }
    cout << "The Largest Element In The Array is : "<< largest << endl;
    cout << "The Smallest Element In The Array is : "<< smallest << endl;
    return 0;
}