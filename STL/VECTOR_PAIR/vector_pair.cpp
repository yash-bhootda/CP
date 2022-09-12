#include <iostream>
#include <vector>
#include <utility>
using namespace std;

void prntVEC(vector<pair<int , int>> &v)
{
    cout << "the printed elements are" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first <<" "<< v[i].second <<endl;
    }
    v.push_back(make_pair(12,34));
    v.push_back({1,3});
}
int main()
{
    vector<pair<int , int>> v;
    for(int i=0;i<3;i++)
    {
        int x ,y;
        cin>>x;
        cin>>y;
        v.push_back({x,y});
    }
    prntVEC(v);
    prntVEC(v);

}