#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int main()
{
    queue<int> q;
    for(int i=0;i<5;i++)
    {
        q.push(i);
    }
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    cout<<"heelo"<<endl;
    q.emplace(5);
    q.emplace(6);
    q.emplace(7);
    q.emplace(8);
    cout<<q.back()<<endl;
}