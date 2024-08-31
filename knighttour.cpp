#include<bits/stdc++.h>
using namespace std;

bool solve(int i,int j,int cnt,int n,vector<vector<int>> &board){
    if(cnt==n*n){
        return true;
    }
    if(i<0 || i>=n || j<0 || j>=n || board[i][j]!=-1 ){
     return false;   
    }
    board[i][j] = cnt;
    if(solve(i+2,j+1,cnt+1,n,board)) return true;
    if(solve(i+2,j-1,cnt+1,n,board)) return true;
    if(solve(i-2,j+1,cnt+1,n,board)) return true;
    if(solve(i-2,j-1,cnt+1,n,board)) return true;
    if(solve(i+1,j+2,cnt+1,n,board)) return true;
    if(solve(i-1,j+2,cnt+1,n,board)) return true;
    if(solve(i+1,j-2,cnt+1,n,board)) return true;
    if(solve(i-1,j-2,cnt+1,n,board)) return true;
    board[i][j] = -1;

   return false;
}
void print(int n,vector<vector<int>> &board){
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<"  "<<board[i][j]<<" ";
  }
  cout<<endl;
}
}
int main(){
 
 
   int n;
   cin >> n;
   
   vector<vector<int>> board(n,vector<int>(n,-1));
   int cnt = 0;

   if(solve(0,0,cnt,n,board))
    print(n,board);
   else
   cout<<"Not Possible"<<endl;
 
  return 0;
}