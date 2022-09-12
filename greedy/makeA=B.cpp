#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> a;
        vector<int> b;

        for (int p = 0; p < n; p++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int q = 0; q < n; q++)
        {
            int y;
            cin >> y;
            b.push_back(y);
        }
        int g = 0;
        int h = 0;
        for (int r = 0; r < n; r++)
        {
            if (a[r] > b[r])
            {
                g= g+ a[r]-b[r];
            }
            if(a[r]<b[r])
            {
                h=h+b[r]-a[r];
            }
        }
        if(g==h)
        {
            cout<<g<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
}