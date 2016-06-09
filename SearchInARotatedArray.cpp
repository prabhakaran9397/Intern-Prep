#include<bits/stdc++.h>
using namespace std;
int arr[100006];
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	int t, n, i, s, e, m, x, f;
	cin >> t;
	while(t--){
	    memset(arr, 0, sizeof(arr));
	    cin >> n;
	    int a[n];
	    for(i=0; i<n; i++){
	        cin >> a[i];
	        arr[a[i]] = i;
	    }
	    cin >> x;
	    if(x==a[0]) cout << 0 << endl;
	    else if(!arr[x]) cout << -1 << endl;
	    else cout << arr[x] << endl;
	}
	return 0;
}