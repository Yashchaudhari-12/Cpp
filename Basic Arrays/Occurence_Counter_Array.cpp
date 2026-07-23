#include<iostream>
using namespace std;

int main()
{
    int arr[10],Count=0,Occurence;

    cout << "Enter Elements Of The Array : ";

    for(int i=0;i<10;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Element To Count Occurence Of : ";
    cin >> Occurence;

    for(int i=0;i<10;i++)
    {
        if(arr[i]==Occurence)
        {
            Count += 1;
        }
    }
    cout << "The Element Occured " << Count << " Times In The Array";
    return 0;
}