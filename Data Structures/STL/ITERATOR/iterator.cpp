#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={12,3,2,31};
    vector<int> :: iterator it = v.begin();
    for(it = v.begin() ; it!= v.end() ; ++it)
    {
        cout<< (*it) << endl;
    }
    vector<pair<int , int>> vp;
    vector<pair<int , int>> :: iterator it1;
    vp={{9,2} , {7,8} , {9,0}};
    // for(it1 = vp.begin() ; it1!= vp.end() ; ++it1)
    // {
    //     cout<<(*it1).first<<endl;
    // }
    
    // for(it1 = vp.begin() ; it1!= vp.end() ; ++it1)
    // {
    //     cout<<it1->first<<endl;
    // }
    //(*it1).first=(it1->first)

    for(int value : v)
    {
        cout<<value<<endl;
    }
    for(auto &value : vp)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
}