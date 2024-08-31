#include<bits/stdc++.h>
using namespace std;
 
bool isSafe(int i,int j,int n,vector<vector<int>> &board){
  if(i<0 || i>=n || j<0 || j>=n || board[i][j]!=-1 ){
     return false;   
    }
    return true;
}
 bool solve(int i,int j,int n,int cnt,vector<vector<int>> &board,int xMove[],int yMove[] ){
 if(cnt == n*n){
    return true;
 }
 for(int k=0;k<8;k++){
    int newX = i + xMove[k];
    int newY = j + yMove[k];
     if(isSafe(newX,newY,n,board)){
        board[newX][newY] = cnt;
        if(solve(newX,newY,n,cnt+1,board,xMove,yMove)) return true;
        board[newX][newY] = -1; 
     }
 }
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
    int xMove[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    int yMove[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

   board[0][0] = 0;
   int cnt = 1;
   if(solve(0,0,n,cnt,board,xMove,yMove))
    print(n,board);
   else
   cout<<"Not Possible"<<endl;
 
  return 0;
}