#include<iostream>
#include<vector>
using namespace std;
//referencing the vector reflects the changes in the actual vector as well
void prntVEC(vector <double> &v)
{
    cout<<"the printed elements are2"<<endl;

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    v.push_back(100);
}
int main()
{
    vector<double> v;
    int n;
    
    cin>> n;
    for(int i=0;i<n;i++)
    {
        double x;
        cin>>x;
        v.push_back(x);
    }
    
    prntVEC(v);
    prntVEC(v);
}