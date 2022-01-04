#include<bits/stdc++.h>
using namespace std;


int s(vector<int> arr){
    cout<<arr[0];
    int n=arr.size()-1;
    cout<<arr[n];
    return arr.size();
}


int main(){
vector<int> arr = {3,4,2,1,4,3,4,5};
cout<<s(arr);
return 0;

}