#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	int t, v, n, x;
	cin >> t;
	while(t--){
	    v = 0;
	    cin >> n;
	    while(n--){
	        cin >> x;
	        v^=x;
	    }
	    cout << v << endl;
	}
	return 0;
}