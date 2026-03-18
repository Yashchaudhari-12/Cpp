#include<iostream>
using namespace std;

int No_Subarray(int arr[],int n,int k,int a)
{
    int count=0,sum=0;

    for(int i=0;i<k;i++)
    {
        sum += arr[i];
        if(sum > a)
        count += 1;
    }
    for(int i=k;i<n;i++)
    {
        sum = sum -arr[i-k] + arr[i];

        if(sum >a)
        {
            count += 1;
        }
    }
    return count;
}
int main()
{
    int n,k,a;
    cout << "Enter Array Size : ";
    cin >> n;
    cout << "Enter Array Elements : ";
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter SubArray Size : ";
    cin >> k;
    cout << "Enter Sum You Want To Compare With : ";
    cin >> a;

    int count = No_Subarray(arr,n,k,a);

    cout << "The No Of SubArray Whose Sum Is Greater Than Given Sum IS : " << count;
    return 0;
}