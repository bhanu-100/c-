#include<bits/stdc++.h>
using namespace std;
int solve(int h,int a,int f,vector<vector<vector<int>>> &dp){
   if(h<=0 || a<=0) return -1;

if(dp[h][a][f]!=-1) return dp[h][a][f];
   if(f==0){
      return dp[h][a][f] = 1+solve(h+3,a+2,1,dp);
   }
   else{
      int x = 1+solve(h-5,a-10,0,dp);
      int y = 1+solve(h-20,a+5,0,dp);
      return dp[h][a][f] = max(x,y);
   }

}
 
int main(){
 
 
   int t;
   cin>>t;
   while(t--){

    int h,a;
    cin>>h>>a;
     vector<vector<vector<int>>> dp(1001,vector<vector<int>>(1001,vector<int>(2,-1)));
     int ans = solve(h,a,0,dp);

     cout<<ans<<endl;
   }
 
 
  return 0;
}