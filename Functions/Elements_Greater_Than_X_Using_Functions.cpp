#include<iostream>
using namespace std;

int Greater(int arr[],int n,int elem)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>elem)
        {
            count += 1;
        }
    }
    return count;
}
int main()
{
    int n,a;
    cout << "Enter Array Size : ";
    cin >> n;
    cout << "Enter Array Elements : ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Element : ";
    cin >> a;
    int count = Greater(arr,n,a);

    cout << "The No Of Elements Greater Then Given Element Are : " << count;
    return 0;
}