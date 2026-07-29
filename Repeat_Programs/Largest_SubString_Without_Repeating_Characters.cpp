#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int max_len1(string s)
{
    int i=0,max_len=0;
    unordered_set<char>st;

    for(int j=0;j<s.length();j++)
    {
        while(st.find(s[j])!=st.end())
        {
            st.erase(s[i]);
            i++;
        }
        st.insert(s[j]);

        max_len=max(max_len,j-i+1);
    }
    return max_len;
}
int main()
{
    string s;

    cout << "Enter A String : ";
    getline(cin ,s);

    cout << "Max Length Is : " << max_len1(s);
    return 0;
}