#include<iostream>
using namespace std;

int main()
{
    int arr[5],Even_count=0,Odd_count=0;

    cout << "Enter Array Elements : ";

    for(int i=0;i<5;i++)
    {
        cin >> arr[i];        
    }
    for(int i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            Even_count += 1;
        }
        else
        {
            Odd_count +=1;
        }
    }
    cout << "The No of Even Numbers In the Array is : " << Even_count << endl;
    cout << "The No of 0dd Numbers In the Array is : " << Odd_count;
    return 0;
    
}