#include<iostream>
using namespace std;

bool is_prime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
    int main()
    {
       int n;
       cout << "Enter No To Check If It Is Prime Or Not : ";
       cin >> n;
       
       if(is_prime(n))
       {
          cout << "Prime";
       }
       else
       {
          cout << "Not Prime";
       }
       return 0;
    }
