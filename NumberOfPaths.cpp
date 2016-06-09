#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	int t, m, n, i, j, c, size;
	string s, r;
	cin >> t;
	while(t--){
	    cin >> m >> n;
	        s.clear();
	        m--; n--;
	        for(i=0; i<m; i++)
	            s.push_back('0');
	        for(i=0; i<n; i++)
	            s.push_back('1');
	        size = s.size();
	        r = s;
	        reverse(r.begin(), r.end());
	        for(c=1; r!=s; c++){
    	        for(i=size-1; i>-1; i--){
    	            if(i-1>-1 && s[i-1]<s[i]){
    	                for(j=size-1; j>i && s[i-1]>=s[j]; j--);
    	                swap(s[i-1], s[j]);
    	                sort(s.begin()+i, s.end());
    	                break;
    	            }
    	        }
	        }
	        cout << c << endl;
	}
	return 0;
}