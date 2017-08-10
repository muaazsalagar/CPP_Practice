#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n=0;
    cin>> n;
    vector<int >vec;
    int newnum=0;
    for (int i=0;i<n;i++){
        
        cin>>newnum;
        
        vec.push_back(newnum);
    }
    
    sort(vec.begin(),vec.end());
    
    for (int i=0;i<n;i++){
        
        cout<<vec.at(i)<<" ";
        
    }
    
    return 0;
    
}
