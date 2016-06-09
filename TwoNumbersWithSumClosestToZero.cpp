#include<bits/stdc++.h>
using namespace std;

bool comp (int i,int j) { return (abs(i)>abs(j)); }

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	int t, n, i, j, si, sj, c;
	cin >> t;
	while(t--){
	    cin >> n;
	    c = INT_MAX;
	    si = sj = 0;
	    int a[n];
	    for(i=0; i<n; i++)
	        cin >> a[i];
	    sort(a, a+n, comp);
	    for(i=0; i<n; i++)
	        for(j=i+1; j<n; j++)
	            if(c>abs(a[i]+a[j])){
	                c = abs(a[i]+a[j]);
	                si = i;
	                sj = j;
	            }
	    cout << min(a[si], a[sj]) << " " << max(a[si], a[sj]) << endl;
	}
	return 0;
}