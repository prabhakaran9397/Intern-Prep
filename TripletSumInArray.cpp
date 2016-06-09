#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int t, n, k, i, j, u;
	bool numbers[100000], f;
	cin >> t;
	while(t--){
	    cin >> n >> k;
	    int a[n];
	    for(i=0; i<n; i++)
	        cin >> a[i];
	    f=0;
	    for(i=0; i<n && !f; i++){
	        u = k-a[i];
	        if(u>-1){
    	        memset(numbers, 0, sizeof(numbers));
    	        for(j=0; j<n && !f; j++){
    	            if(i!=j){
    	                if(u-a[j]>-1&&numbers[u-a[j]]) f=1;
    	                numbers[a[j]]=1;
    	            }
    	        }
	        }
	    }
	    cout << f << endl;
	}
	return 0;
}