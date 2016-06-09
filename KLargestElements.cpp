#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int t, n, k, i, j;
	cin >> t;
	while(t--){
	    cin >> n >> k;
	    int c[n], d[k], index[k];
	    for(i=0; i<n; i++)
	        cin >> c[i];
	    for(i=0; i<k; i++){
	        index[i]=0;
	        d[i]=c[0];
	        for(j=1; j<n; j++){
	            if(c[j]>d[i]){
	                index[i]=j;
	                d[i]=c[j];
	            }
	        }
	        c[index[i]]=-1000000;
	    }
	    for(i=0; i<k; i++)
	        cout << d[i] << " ";
	    cout<<"\n";
	}
	return 0;
}