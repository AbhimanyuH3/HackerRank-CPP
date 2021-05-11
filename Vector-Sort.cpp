#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
     int size , element;
     vector<int>v;
     cin>>size;
     for(int i=0;i<size;i++)
     {  cin>>element;
        v.push_back(element); 
     }
     sort(v.begin(),v.end());
     for(int i=0;i<v.size();i++)
     {
        cout<< v[i]<<" ";
     }
    return 0;
}
 
