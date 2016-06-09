#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	int t, n, i, x;
	int c[3];
	cin >> t;
	while(t--){
	    cin >> n;
	    memset(c, 0, sizeof(c));
	    for(i=0; i<n; i++){
	        cin >> x;
	        c[x]++;
	    }
	    for(i=0; i<c[0]; i++)
	        cout << 0 << " ";
	    for(i=0; i<c[1]; i++)
	        cout << 1 << " ";
	    for(i=0; i<c[2]; i++)
	        cout << 2 << " ";
	    cout << endl;
	}
	return 0;
}