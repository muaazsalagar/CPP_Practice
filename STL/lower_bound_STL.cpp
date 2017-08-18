#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int len;
    int newnum;
    cin>> len;
    vector <int> vec;
    for(int i=0;i<len;i++){
        cin>> newnum;
        vec.push_back(newnum);
        
    }
    
    //sorting
    sort(vec.begin(),vec.end());
    
    int num_checks;
    cin>>num_checks;
    
    vector <int> checks;
    
    int newCheck;
    for (int i=0;i<num_checks;i++){
        cin>>newCheck;
        checks.push_back(newCheck);    
        
    }
     
    
    for (int i=0;i<num_checks;i++){
        int ele=checks[i]; 
        vector<int>::iterator lower_boundFound;
        lower_boundFound=lower_bound(vec.begin(),vec.end(),ele);
        if(vec[lower_boundFound-vec.begin()]==ele ) {
            cout<< "Yes ";
            
        } else{
           cout<<"No ";
            
        }
        cout<<lower_boundFound-vec.begin()+1 << "\n";
        
    }
    
    
    return 0;
}
