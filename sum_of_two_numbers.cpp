#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    vector<int>sumOfTwoNumbers(vector<int>&a,int target){
      unordered_map<int,int>un;
      for(int i=0;i<a.size();i++)
      {
          int c=target-a[i];
          if(un.find(c)!=un.end())
          {
             return {un[c],i};
          }
          un[a[i]]=i;

      }
      return {};
    }
}