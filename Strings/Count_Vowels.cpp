#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int count = 0;

    cout << "Enter A String : ";
    getline(cin,s);

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        {
            count++;
        }
    }
    cout << "The No Of Vowels In The Given String Are : " << count;
    return 0;
}