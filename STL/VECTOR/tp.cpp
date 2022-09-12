#include <iostream>
#include <algorithm>
#include <cstdlib>
#include<vector>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	vector <int> arr;
    for(int i=0;i<num;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);

    }
    int a=0;
    vector <int> v;
    for(int i=0;i<num;i++)
    {
        int t=abs(arr[i]-a);
        v.push_back(t);
    }
    int minElementIndex = std::min_element(v.begin(),v.end()) - v.begin();
    
    cout<<abs(arr[minElementIndex]) << endl;	// Writing output to STDOUT
}