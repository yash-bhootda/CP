#include <iostream>
#include <vector>
#include <utility>
using namespace std;
void prntVEC(vector <int> &v)
{
    cout<<"the size is"<<v.size()<<endl;

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    v.push_back(100);
}
int main()
{
    vector<vector<int>> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        vector<int> p;
        for(int j=0;j<k;j++)
        {
            int x;
            cin>>x;
            p.push_back(x);
        }
        v.push_back(p);

    }
    prntVEC(v[0]);
    cout<<"the first term is "<<endl;
}