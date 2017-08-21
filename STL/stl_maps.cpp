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
    map <string, int> m;
    map<string,int> ::iterator iter;
    
    for (int i=0;i<nums;i++){
        
        cin >>operation;
        
        if(operation==1){
            
            cin>> name;
            cin>> marks;
            iter=m.find(name);
            if(iter==m.end()){
                m.insert(make_pair(name,marks));
                //cout<<"Not Found " <<name << "\n ";
               
            }
            else{
                 
                 int curr_marks=m[name];
                 marks+=curr_marks;
                 //cout<<"Found " <<name << "old marks: " << curr_marks <<"new marks: "<< marks<< "\n ";
                 m.erase(name);
                 m.insert(make_pair(name,marks));
                
            }
           
            
            
            
            
        }
        else if(operation==2){
            cin>> name;
            m.erase(name);
            
        }
        else if(operation==3){
            //cout<< "operation 3 ";
            cin>>name;
            cout<<m[name]<<"\n";
        }
        
        
    }
       
    
    
    
    
    return 0;
}
