#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	int t, n, i, j, s, e;
	cin >> t;
	while(t--){
	    cin >> n;
	    for(i=0; i<n; i++){
	        if(i<n/2){
    	        for(s=i, e=n-i, j=0; j<n+1; j++){
    	            if(j==s || j==e) cout << "*";
    	            else cout <<" ";
    	        }
	        } else {
	            for(j=0; j<n+1; j++){
	                if(j==n/2) cout << "*";
	                else cout << " ";
	            }
	        }
	    }
	    cout << endl;
	}
	return 0;
}