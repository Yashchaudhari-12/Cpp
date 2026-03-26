#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool is_palindrome(string s)
{
    string n;
    int b=s.length();
    for(int i=b-1;i>=0;i--)
    { 
        n += s[i];
    }
    for(int j=0;j<s.length();j++)
    {
        if(n[j]!=s[j])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s;
    cout << "Enter A String : ";
    getline(cin ,s);

    bool a = is_palindrome(s);
    
    if(a==true)
    {
        cout << "Given String Is Palindrome ";
    }
    else
    {
        cout << "Given String Is Not Palindrome";
    }
    return 0;
}