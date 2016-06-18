#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int t, i, j, k, n, cl, ci, l, st;
	string s;
	cin >> t;
	while(t--){
		cin >> s;
		n = s.size();
		ci = 0; cl =  1;
		for(i=0; i<n; ++i){
			l = 1;
			k = min(i, n-i-1);
			st = i;
			for(j=1; j<=k; j++){
				if(s[i-j]==s[i+j]){
					l += 2;
					st = i-j;
				}else break;
			}
			if(cl < l){
				ci = st;
				cl = l;
			}
		}
		for(i=0; i<n; ++i){
			if(i+1<n && s[i]==s[i+1]) {
				l = 2;
				k = min(i, n-i-2);
				st = i;
				for(j=1; j<=k; j++){
					if(s[i-j]==s[i+1+j]){
						l += 2;
						st = i-j;
					}else break;
				}
			}
			if(cl < l){
				ci = st;
				cl = l;
			}
		}
		for(i=ci; i<ci+cl; i++)
			cout << s[i];
		cout << '\n';
	}
	return 0;
}
