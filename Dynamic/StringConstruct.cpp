#include "StringConstruct.h"

map<string,bool> m;

bool canConstruct(string s, string arr[], int n){
  if(s=="") return true;
  if(m.count(s)) return m[s];
  bool ans=false;
  for(int i=0;i<n;i++){
    int length = arr[i].length();
    if(arr[i] == s.substr(0,length)){
      ans = ans || canConstruct(s.substr(length),arr,n);
    }
  }
  return m[s]=ans;
}

