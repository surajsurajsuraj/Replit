#include <bits/stdc++.h>
#include "Dynamic/StringConstruct.h"
using namespace std;

int main() {
    string arr[] = {"ab","abc","cd","def","abcd"};
    cout<<canConstruct("abcdef", arr, 5);
    // for(auto& k:m){
    //   cout<<k.first<<" "<<k.second<<endl;
    // }
    return 0;
}