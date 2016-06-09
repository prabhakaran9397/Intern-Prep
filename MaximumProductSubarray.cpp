#include <bits/stdc++.h>
using namespace std;

long long pro(int a[], int n, int s, int e)
{
    long long p=1, r=1, l=1; int i;
    for(i=s; i<=e; i++)
        p *= a[i];
    for(i=s; i<=e; i++){
        l *= a[i];
        if(a[i]<0){
            break;
        }
    }
    for(i=e; i>=s; i--){
        r *= a[i];
        if(a[i]<0){
            break;
        }
    }
    p /= max(r, l);
    return p;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	int t, n, i, s;
	long long cur, tot;
	cin >> t;
	while(t--){
	    cin >> n;
	    int a[n];
	    for(i=0; i<n; i++)
	        cin >> a[i];
	    cur = 1; tot = -11; s = 0;
	    for(i=0; i<n+1; i++){
	        if(a[i]==0 || i==n){
	            if(cur<0){
	                if(a[s]<0 && a[i-1]<0)
	                    cur /= max(a[s], a[i-1]);
	                else if(a[s]<0 || a[i-1]<0)
	                    cur /= min(a[s], a[i-1]);
	                else
	                    cur = pro(a, n, s, i-1);
	            }
	            tot = max(tot, cur);
	            s = -1; 
	        }
	        cur *= a[i];
	        if(s==-1){
	            cur = 1;
	            s = i+1;
	        }
	    }
	    cout << tot << endl;
	}
	return 0;
}