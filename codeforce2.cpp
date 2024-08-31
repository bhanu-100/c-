#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
 
   int n = 24,ans =24,l=0,r=100;
   while(l<=r){
   int mid = (l+r)/2;
   if(mid * mid <= n){
    ans = mid;
    l = mid+1;
   }
   else{
    r= mid -1;
   }

   }
cout<<ans<<endl;
 
 
  return 0;
}