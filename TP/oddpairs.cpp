#include <iostream>
#include<vector>
using namespace std;

int odd1(int a)
{
    if(a%2==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main() {
	int n;
	cin>>n;
	vector<int> a;
	
	for(int i=0;i<n;i++)
	{
	    int b;
	    cin>>b;
	    a.push_back(b);
	}
	for(int i=0;i<n;i++)
	{
		if(odd1(a[i]))
		{
			
			int b=a[i]/2;
			int x= b*(b+1)*2;
			cout<<x<<endl;
		}
		else
		{
			int b=a[i]/2;
			int x= b*(b)*2;
			cout<<x<<endl;
		}
	}
	
	
	return 0;
}