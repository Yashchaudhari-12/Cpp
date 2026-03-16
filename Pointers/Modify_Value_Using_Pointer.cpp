#include<iostream>
using namespace std;

int main()
{
    int a = 20;
    int *p = &a;

    *p=50;

    cout << a << endl ;
    cout << *p << endl;
    cout << &a << endl;
    cout << p << endl;


}


/*Output:-[*p changes a value because both of them point at the same memory address]
50
50
0x5ffe84
0x5ffe84*/