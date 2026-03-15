#include<iostream>
using namespace std;

int is_largest(int arr[],int n)
{
    int largest=arr[0];
    
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    return largest;


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

    int largest=is_largest(arr,n);

    cout << "The Largest Element In The Given Array Is : " << largest;
    return 0;

}