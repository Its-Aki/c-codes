#include <bits/stdc++.h>
using namespace std;

#define ll long long
string ReverseString(string s){
	if(s.length()==0){
		return "";
	}
	return ReverseString(s.substr(1))+s[0];
	//Note-->s.substr(i) gives the substring from i-th index
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    string reversedstr=ReverseString(s);
    cout<<reversedstr;
    return 0;
}