#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	int t, n, p, u;
	cin >> t;
	while(t--){
	    p = u = 0;
	    cin >> n;
	    for(int i=4; i<8; i++)
	        u += ((n>>i)&1)<<p++;
	    for(int i=0; i<4; i++)
	        u += ((n>>i)&1)<<p++;
	    cout << u << endl;
	}
	return 0;
}