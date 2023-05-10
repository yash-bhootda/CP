// bastin once had trouble findin the numbers in a string , the numbers are distributed in a string across various test cases 
// there are various numbers in each testcase , you need to find a number in each testcase.
// each testcase has a various numbers in a sequence , you need to fibd onnly those numbers which do not contiain 9
// example
// if the string contains , hello this is alpha 5051 and 9475. you will extract 5051 and not 9475 , you need only those numbers which are consecutive and you need to help in finding the numbers .
// print the largest numbers .
// note use long to store numbers
// input
// the first line consist contains D test cases 
// and the nest t lines contain test case

// output 
// for each string output the number stored , if there are various numbers , print the largest , if the string has no numbers print -1

#define pb push_back
#define vi vector<int>
#define si stack<int>
#define vl vector<long long int>
#define pi pair<int, int>
#define pl pair<ll, ll>
#define ll long long int
#define fo(a, b) for (auto i = a; i < b; ++i)
#define nfo(a, b) for (auto i = a; i < b; i--)
#define jfo(a, b) for (auto j = a; i < b; j++)
#define njfo(a, b) for (auto j = a; j < b; j--)
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
void simple_tokenizer(string str)
{
    stringstream ss;

    /* Storing the whole string into string stream */
    ss << str;

    /* Running loop till the end of the stream */
    string temp;
    int found;
    vector<string> ans;
    while (!ss.eof())
    {

        /* extracting word by word from stream */
        ss >> temp;

        /* Checking the given word is integer or not */
        if (stringstream(temp) >> found)
        {
            // cout<<typeid(temp).name();
            string a = temp;
            sort(temp.begin(), temp.end());
            if (temp[temp.size() - 1] != '9')
            {
                cout << temp << endl;

                ans.pb(a);
            }
        }
        /* To save from space at the end of string */
        temp = "";
    }
    sort(ans.begin(), ans.end());
    cout << ans[ans.size() - 1];
}

int main()
{
    simple_tokenizer("This is 1458 alpha 890 and 8000");
    return 0;
}