#include<bits/stdc++.h>
using namespace std;
#define r 3
#define c 10

int ans = INT_MIN;
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};
 bool isSafe(int row,int col,int mat[r][c]){
    if(row >=0 && row < r && col >=0  && col < c && mat[row][col]==1)
       return true;

    return false;
 }
bool findLongestPath(int mat[r][c],int sx,int sy,int ex,int ey,int cnt){
  if(sx == ex && sy == ey) {
    ans = max(ans,cnt);
    return true;
  }

  for(int k=0;k<4;k++){
    int x = sx + dx[k];
    int y = sy + dy[k];
    if(isSafe(x,y,mat)){
        mat[x][y] = 0;
        findLongestPath(mat, x ,y, ex, ey, cnt+1);
        mat[x][y] = 1;
    }
  }


  return false;
}
int main(){
 
 
//    int n;
//    cin>>n;
//    bool mat[n][n];
//       for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>mat[i][j];
//         }
//       }

 int mat[r][c] = { { 1, 1, 1, 0, 1, 1, 1, 1, 1, 1 },
                      { 1, 1, 0, 1, 1, 0, 1, 1, 0, 1 },
                      { 1, 1, 1, 1, 1, 0, 1, 1, 1, 1 } };
 
    // find longest path with source (0, 0) and
    // destination (1, 7)
    findLongestPath(mat, 0, 0, 1, 7, 0);
    cout<<ans<<endl;
 
 
  return 0;
}