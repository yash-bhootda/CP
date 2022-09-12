#include<iostream>
#include<utility>
#include <tuple>
using namespace std;
int main()
{
    pair<int , int> p1;
    //declaring a pair mehtod 1
    p1=make_pair(12,21);
    pair<int , int> p2;
    //declaring a pair method 2
    p2={24 , 54};
    cout<<"Contents of pair 1 before swapping"<<endl;
    cout<<p1.first<<" "<<p1.second<<endl;
    //swap function
    p1.swap(p2);
    cout<<endl;
    cout<<"Contents of pair 1 after swapping"<<endl;
    cout<<p1.first<<" "<<p1.second<<endl;
    //referencing
    pair<int , int> &p3=p2;
    p3.first=90;
    cout<<p2.first<<" "<<p2.second;
    //tie function
    int a , b; 
    tie(a, b)=p1;
    cout<<endl;
    cout<<a;
    cout<<endl;

    //concatenate
    cout<<p1.first+p2.first+p3.first;

    //array
    pair<int , int> p_array[3];
    for(int i=0;i<3;i++)
    {
        cin>>p_array[i].first;
        cin>>p_array[i].second;
    }
    swap(p_array[0],p_array[2]);
    cout<<p_array[0].first;



    
}