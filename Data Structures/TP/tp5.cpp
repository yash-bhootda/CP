#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    int t;
    int k = n;
    while (n > 0)
    {
        cin >> t;
        a.push_back(t);
        n--;
    }
    vector<int> even;
    vector<int> odd;
    for (int i = k / 2; i < a.size(); i = i + 2)
    {

        even.push_back(a[i]);
    }
    for (int i = k / 2 + 1; i < a.size(); i = i + 2)
    {

        odd.push_back(a[i]);
    }
    

    for (int i = 0; i < odd.size(); i++)
    {
        cout << odd[i] << endl;
    }
    for (int i = 0; i < even.size(); i++)
    {
        cout << even[i] << endl;
    }
    return 0;
}