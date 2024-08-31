#include<bits/stdc++.h>
using namespace std;

int ans = 0;
int dx[4] = {1,0};
int dy[4] = {0,1};
 bool isSafe(int n,int m,int row,int col,vector<vector<bool>> &mat){
    if(row >=0 && row < n && col >=0  && col < m && mat[row][col]==1)
       return true;

    return false;
 }
bool countPath(int n,int m,vector<vector<bool>> &mat,int sx,int sy,int ex,int ey){
  if(sx == ex && sy == ey) {
    ans++;
    return true;
  }

  for(int k=0;k<2;k++){
    int x = sx + dx[k];
    int y = sy + dy[k];
    if(isSafe(n,m,x,y,mat)){
        mat[x][y] = 0;
        countPath(n,m,mat, x ,y, ex, ey);
        mat[x][y] = 1;
    }
  }


  return false;
}
int main(){
 
 
   int n,m;
   cin>>n>>m;
   vector<vector<bool>> mat(n,vector<bool>(m,1));
    // find no. of path with source (0, 0) and
    // destination (n, m)
    mat[0][0] = 0;
    countPath(n,m,mat, 0, 0, n-1, m-1);
    cout<<ans<<endl;
 
 
  return 0;
}