#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*

Input Format

The first line of the input contains an integer .The next line contains  space separated integers(1-based index).The third line contains a single integer ,denoting the position of an element that should be removed from the vector.The fourth line contains two integers  and  denoting the range that should be erased from the vector inclusive of a and exclusive of b.


Constraints
 
 

Output Format

Print the size of the vector in the first line and the elements of the vector after the two erase operations in the second line separated by space.



*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  
    int vec_size=0;
    
    cin>>vec_size;
    vector<int> vec;
    int ip=0;
    
    //cout << vec_size;
    for(int i =0;i<vec_size;i++){
        cin>>ip;
        vec.push_back(ip);
        //cout<< "here";
    }
    
    int posnToDelete=0;
    cin>>posnToDelete;
    
    vec.erase(vec.begin()+posnToDelete-1);
    
    int end;
    int start;
    cin>>start;
    cin>>end;
    
    vec.erase(vec.begin()+start-1,vec.begin()+(end-1));
    
    cout<<vec.size()<<"\n";
    
       for(int i =0;i<vec_size;i++){
        cout <<vec.at(i)<< " ";
           

        
    }
    return 0;
    
    
}
