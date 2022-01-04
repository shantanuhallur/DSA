#include <iostream>
#include<climits>
#include<vector>
using namespace std;
vector<int> li(vector <int> arr,int idx,int key,int fsf){
   
   if (idx==arr.size())
   {
      vector<int> iarr(fsf);
      return  iarr;
   }
   if (arr[idx]==key)
      {
         vector<int> iarr = li(arr,idx+1,key,fsf+1);
         iarr[fsf]=idx;
         return iarr;
      }
      else{
        vector<int> iarr = li(arr,idx+1,key,fsf);
        return iarr;
      }
      
   
   
  // int[] iarr = new int [fsf]
}

 
int main(){

  vector<int> arr={3,5,9,8,2,2,2,4};
  int idx=0;
  int key=2;
   
 vector<int> ans = li(arr,idx,key,0);
 for (int i = 0; i <ans.size(); i++)
 {
   cout<<ans[i];
 }
 
  
}


