#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int t, i, n, m;
	string s;
	cin >> t;
	while(t--){
	    cin >> s;
	    n = s.size();
	    m = 0;
	    for(i=0; i<n; i++)
	        m = (m*2+(s[i]-'0'))%3;
	    cout << (m==0) << endl; 
	}
	return 0;
}