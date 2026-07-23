#include<iostream>
using namespace std;

int main()
{
    int arr[5],temp=0;
    
    cout << "Enter Array Elements : ";

    for(int i=0;i<5;i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<5;i++)
    {
        temp = temp+arr[i];
    }
    cout << temp;
    return 0;
}