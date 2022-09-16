#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
    stack<int> st;
    for(int i=0;i<5;i++)
    {
        st.push(i);
    }
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
}