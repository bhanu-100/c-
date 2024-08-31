#include<bits/stdc++.h>
using namespace std;

int minimumCostOfBreaking(std::vector<int>& X, std::vector<int>& Y, int M, int N) {
    // Sort the cut costs in descending order
    std::sort(X.rbegin(), X.rend());
    std::sort(Y.rbegin(), Y.rend());
    
    int horizontalCuts = 1;
    int verticalCuts = 1;
    int cost = 0;
    
    int i = 0, j = 0;
    
    // Process both X and Y arrays to choose the maximum cost cut at each step
    while (i < X.size() && j < Y.size()) {
        if (X[i] > Y[j]) {
            cost += X[i] * verticalCuts;
            horizontalCuts++;
            i++;
        } else {
            cost += Y[j] * horizontalCuts;
            verticalCuts++;
            j++;
        }
    }
    
    // If any cuts remain in X or Y, add their cost
    while (i < X.size()) {
        cost += X[i] * verticalCuts;
        i++;
    }
    
    while (j < Y.size()) {
        cost += Y[j] * horizontalCuts;
        j++;
    }
    
    return cost;
}

int main(){
 
 
   int t;
   cin>>t;
   while(t--){

    int m,n;
    cin>>m>>n;
   vector< int> x(m-1,0);
   vector< int> y(n-1,0);
    for(int i=0;i<m-1;i++) {
        int a;
        cin>>a;
        x[i] = a;
    }
    for(int i=0;i<n-1;i++) {
        int a;
        cin>>a;
        y[i]=a;
   }
   cout<< minimumCostOfBreaking(x,y,m,n)<<endl;
}
  return 0;
}