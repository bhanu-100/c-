#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
 
   int t;
   cin>>t;
   while(t--){
    int w,h,n;
    cin>>w>>h>>n;
    if (n == 0) {
            cout << (long long) w * h << endl;
            continue;
        }
    int width[n];
    int height[n];
    for(int i=0;i<n;i++){
        cin>>width[i]>>height[i];
   }
   sort(width,width+n);
   sort(height,height+n);
   int wid = max(width[0]-1,w-width[n-1]);
   int hei = max(height[0]-1,h-height[n-1]);
   for(int i=1;i<n;i++){
        wid = max(wid,width[i]-width[i-1]-1);
        hei = max(hei,height[i]-height[i-1]-1);
   }
    cout<<(long long)(wid*hei)<<endl;
   }
  return 0;
}