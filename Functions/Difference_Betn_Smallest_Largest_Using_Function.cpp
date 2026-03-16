#include<iostream>
using namespace std;

int diff_min_max(int arr[],int n)
{
    int smallest=arr[0];
    int largest=arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
        else if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    int difference=largest-smallest;

    return difference;
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
    int difference = diff_min_max(arr,n);

    cout << "The Difference Between Largest And Smallest Element In The Array Is : " << difference;
    return 0;
}