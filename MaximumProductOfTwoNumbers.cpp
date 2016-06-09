#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	int t, u, v, i, x, n;
	cin >> t;
	while(t--){
	    cin >> n;
	    int a[n];
	    u = v = -1;
	    for(i=0; i<n; i++){
	        cin>>a[i];
	        if(a[i]>u) u = a[i];
	    }
	    for(i=0; i<n; i++){
	        if(a[i]>v && a[i]<u) v = a[i];
	    }
	    cout << u*v << endl;
	}
	return 0;
}