#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int t, n, m, i;
	int s, e, cur;
	cin >> t;
	while(t--){
	    cin >> n >> m;
	    int a[n];
	    for(i=0; i<n; i++)
	        cin >> a[i];
	    for(i=0, s=1, cur=0, e=-1; i<n; i++){
	        cur += a[i];
	        if(cur == m){
	            e = i+1;
	            break;
	        } else if (cur > m){
	            i=s-1;
	            s++;
	            cur = 0;
	        }
	    }
	    if(e==-1)
	        cout << "-1" << endl;
	    else
	        cout << s << " " << e << endl;
	}
	return 0;
}