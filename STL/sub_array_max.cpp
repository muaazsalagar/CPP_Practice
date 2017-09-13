#include <iostream>
#include <deque> 
#include<vector>
#include <algorithm>
using namespace std;

void printKMax(int arr[], int n, int k){
   
    //Write your code here.
    
    int size =n-k+1; 
    vector<int> maxes;
    
    int i=0;    
    while(i<n-k+1){
        
        vector<int> tempMaxes;
        for(int j=0;j<k;j++){       
            
            tempMaxes.push_back(arr[i+j]);     
            
        }
        sort(tempMaxes.begin(),tempMaxes.end());
        //maxes.push_back(tempMaxes[k-1]);
        cout<<tempMaxes[k-1] <<" ";
        
        i++;
        
        
    }
    cout<<"\n";
    
    
    
    
    
    
}
int main(){
  
   int t;
   cin >> t;
   while(t>0) {
      int n,k;
       cin >> n >> k;
       int i;
       int arr[n];
       for(i=0;i<n;i++)
            cin >> arr[i];
       printKMax(arr, n, k);
       t--;
     }
     return 0;
}
