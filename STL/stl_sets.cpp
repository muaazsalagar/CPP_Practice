#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int times;
    cin>> times;
    
    
    set <int> myset;
    int operation, input;
  
    for (int i=0;i<times;i++){
       
       
            cin>>operation;
            cin>> input;
       
         
            if(operation==1){
               
                myset.insert(input);
              
                
            }
            else if (operation==2)
            {
              
                myset.erase(input); 
              
            }
            else{
               
                
                  set<int>::iterator myiterator=myset.find(input);
                
                if(myiterator!=myset.end()){
                    cout <<"Yes\n";
                    
                }
                else{
                    cout<<"No\n";
                }
                
            }
        
    
       
    }
    
    return 0;
}
