#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int nums;
    cin>>nums;
    int operation;
    int marks;
    string name;
    map <string,int> map;
    map<string,int> ::iter;
    for (int i=0;i<nums;i++){
        
        cin >>operation;
        
        if(operation==1){
            
            cin>> name;
            cin>> marks;
            
            if(map.find(name)==map.end()){
                
                int curr_marks=map[name];
                marks+=curr_marks;
                
            }
            map.insert(make_pair(name,marks));
            
            
            
            
        }
        if(operation==2){
            cin>> name;
            map.erase(name);
            
        }
        if(operation==3){
            cin>>name;
            cout<<map[name];
        }
        
        
    }
       
    
    
    
    
    return 0;
}
