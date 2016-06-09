void merge(int arr[], int l, int m, int r)
{
     int c[1000000], i=l, j=m+1, k=l;
     while(i<=m && j<=r){
         if(arr[i]<arr[j]) c[k++]=arr[i++];
         else c[k++]=arr[j++];
     }
     while(i<=m) c[k++]=arr[i++];
     while(j<=r) c[k++]=arr[j++];
     for(i=l; i<k; i++)
        arr[i] = c[i];
}