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
   int n=5;
   for(int i=n-1;i>=0;i--)
   {
    cout << arr[i] << " ";
   }
   return 0;

}