#include<iostream>
using namespace std;

int max_len1(int arr[],int n,int k)
{
    int i=0;
    int count_zero=0;
    int max_len=0;

    for(int j=0;j<n;j++)
    {
         if(arr[j]==0)
         {
            count_zero++;
         }
         while(count_zero>k)
         {
            if(arr[i]==0)
            {
                count_zero--;
            }
            i++;
         }
         max_len=max(max_len,j-i+1);
    }
    return max_len;
}
int main()
{
    int n,k;
    cout << "Enter Array Size : ";
    cin >> n;
    cout << "Enter Array Elements : ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter No Of Zeros : ";
    cin >> k;

    int max_len=max_len1(arr,n,k);

    cout << "The Max Length Is : " << max_len;
    return 0;
}