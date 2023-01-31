#define pb push_back
#define vi vector<int>
#define si stack<int>
#define vl vector<long long int>
#define pi pair<int, int>
#define pl pair<ll, ll>
#define ll long long int
#define fo(a, b) for (auto i = a; i < b; ++i)
#define nfo(a, b) for (auto i = a; i < b; i--)
#define jfo(a, b) for (auto j = a; j < b; j++)
#define njfo(a, b) for (auto j = a; j < b; j--)
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
bool palindromecheck(string s)
{
    int n = s.length();
    // cout << s << endl;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            return false;
        }
    }
    return true;
}
string longestPalindrome(string s)
{
    string ans;
    int n = s.length();

    fo(0, n)
    {
        jfo(i, n)
        {
            if (s[i] == s[j])
            {
                string a;
                // cout<<i<<endl;
                // cout<<j<<endl;
                a = s.substr(i, j - i + 1);
                // cout<<a<<endl;
                if (a.size() > ans.size())
                {
                    string str1 = a;
                    string str2 = ans;
                    // cout<<str1<<endl;
                    if (strstr(str1.c_str(), str2.c_str()))
                    {
                        // cout<<ans<<endl;
                        ans = a;
                    }
                    else
                    {
                        // cout<<ans<<endl;
                        if (palindromecheck(a))
                        {
                            ans = a;
                        }
                    }
                }
            }
        }
    }
    return ans;
}
int main()
{
    string s, a;
    cin >> s;
    a = longestPalindrome(s);
    cout<<a;
    return 0;
}