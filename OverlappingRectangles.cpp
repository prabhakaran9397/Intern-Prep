#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int t, x1, y1, x2, y2, l1, m1, l2, m2;
	int f, mi_x, ma_x, mi_y, ma_y, mi_l, ma_l, mi_m, ma_m;
	cin >> t;
	while(t--){
	    cin >> x1 >> y1 >> x2 >> y2 >> l1 >> m1 >> l2 >> m2;
	    mi_x = min(x1, x2);
	    ma_x = max(x1, x2);
	    mi_y = min(y1, y2);
	    ma_y = max(y1, y2);
	    mi_l = min(l1, l2);
	    ma_l = max(l1, l2);
	    mi_m = min(m1, m2);
	    ma_m = max(m1, m2);
	    if(mi_x<=l1&&l1<=ma_x&&mi_y<=m2&&m2<=ma_y)
	        f = 1;
	    else if(mi_x<l1&&l1<ma_x&&mi_y<m1&&m1<ma_y)
	        f = 1;
	    else if(mi_x<l2&&l2<ma_x&&mi_y<m2&&m2<ma_y)
	        f = 1;   
	    else
	        f = 0;
	   cout << f << endl;
	}
	return 0;
}