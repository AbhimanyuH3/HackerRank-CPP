#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size,element,position,range1,range2;
    vector<int>v;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>element;
        v.push_back(element);
    }
    cin>>position;
    v.erase(v.begin()+(position-1));
    cin>>range1>>range2;
    v.erase(v.begin()+(range1-1),v.begin()+(range2-1));
    cout<<v.size();
    cout<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
