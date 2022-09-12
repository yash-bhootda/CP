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
    int n;
    cin>>n;
    vector <int> v[n];
    for (int i=0;i<n;i++)
    {
        cout<<"enter the number of elemets"<<endl;
        int y;
        cin>>y;
        for(int j=0;j<y;j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<n;i++)
    {
        prntVEC(v[i]);
    }
    
}