// #define pb push_back
// #define vi vector<int>
// #define si stack<int>
// #define vl vector<long long int>
// #define pi pair<int, int>
// #define pl pair<ll, ll>
// #define ll long long int
// #define fo(a, b) for (auto i = a; i < b; ++i)
// #define nfo(a, b) for (auto i = a; i < b; i--)
// #define jfo(a, b) for (auto j = a; i < b; j++)
// #define njfo(a, b) for (auto j = a; j < b; j--)
// #include <iostream>
// #include <bits/stdc++.h>
// #include <vector>
// #include <string>
// #include <algorithm>
// using namespace std;
// string minWindow(string s, string t)
// {
//     unordered_map<char , int> m;
//     fo(0,t.size())
//     {
//         m[t[i]]++;
//     }
//     int start =0 ;
//     int end=0;
//     int intial=0;
//     int counter=t.size();
//     int max1=INT16_MAX;
//     while(start<s.size())
//     {
//         if(m[s[start]]-->0)
//         {
//             counter--;
//         }
//         while(counter==0)
//         {
//             int d = start-end+1;
//             if(d<max1)
//             {
//                 max1=d;
//                 initial=end;

//             }
//             if(m[s[end]]==0)
//             {
//                 counter++;
//             }
//             end++;
//         }
//         start++;


//     }
//     if(max1==INT16_MAX)
//     {
//         return "";
//     }
//     else
//     {
//         return s.substr(initial , max1);
//     }
// }
// int main()
// {

//     return 0;
// }

class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size() < t.size()){
            return "";
        }
        unordered_map<char , int> mp;
        for(int i =0;i<t.size();i++)
        {
            mp[t[i]]++;
        }
        int start=0 , count=0 , min_start=0;
        int minl=INT_MAX;
        for(int end=0;end<s.size();end++)
        {
            if(mp[s[end]]>0)
            {
                count++;
            }
            mp[s[end]]--;
            if(count==t.length())
            {
                while(start < end && mp[s[start]] < 0)
                {
                    mp[s[start]]++;
                    start++;
                }
                if(minl> end-start)
                {
                    minl=end-start+1;
                    min_start=start;
                }
                mp[s[start]]++;
                start++;
                count--;
            }

        }
        if(minl==INT_MAX)
        {
            return "";
        }
        string p = s.substr(min_start , minl);
        return p;
    }
};