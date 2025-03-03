#include<bits/stdc++.h>
using namespace std;
 void swap(int i,int j,vector<int>&arr){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int main(){

 
 vector<int>arr={23,1,10,5,2};

 for(int i=arr.size()-1;i>0;i--){
    int j=0;
    while(j<i){
        if( arr[j]>arr[j+1])
        swap(j,j+1,arr); 
        j++;   }
 }
  for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";
 return 0;
}