#include <iostream>
using namespace std;

bool canConstruct(string s, string arr[], int n){
  if(s=="") return true;
  bool ans=false;
  for(int i=0;i<n;i++){
    int length = arr[i].length();
    if(arr[i] == s.substr(0,length)){
      ans = ans || canConstruct(s.substr(length),arr,n);
    }
  }
  return ans;
}

int main() {
    string arr[] = {"ab","abc","cd","def","abcd"};
    cout<<canConstruct("abcdef", arr, 5);
    return 0;
}