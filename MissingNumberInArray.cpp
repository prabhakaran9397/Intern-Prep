#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, n, x, i;
	long long s, m;
	cin >> t;
	while(t--){
	    cin >> n;
	    s = (n*(n+1))/2;
	    m = 0;
	    for(i=0; i<n-1; i++){
	        cin >> x;
	        m+=x;
	    }
	    cout << s-m << endl;
	}
	return 0;
}