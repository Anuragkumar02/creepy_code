#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

     vector<int> v ;
     int n;
     cin>>n;
     for(int i=0;i<n;i++ )
     {
        int n;
        cin>>n;
         v.push_back(n);
     }
     sort(v.begin(),v.end()) ;
     for(int i=0;i<n;i++ )
     {
        
         cout<<v[i]<<" ";
     }
     
         return 0;
}
