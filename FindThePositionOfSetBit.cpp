#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int v, i, t, n, p;
	cin >> t;
	while(t--){
	    cin >> n;
	    v = 0;
    	for(i=31; i>=0; i--)
    	    if((n>>i)&1){
    	        p=i+1;
    	        v++;
    	    }
    	if(v==1)
    	    cout << p << endl;
    	else
    	    cout << -1 << endl;
	}
	return 0;
}