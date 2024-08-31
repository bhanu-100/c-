#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
 
   long long int t,j=1;
   cin>>t;
   while(t--){

    long long int n,k,b,t;
    cin>>n>>k>>b>>t;

    long long int x[n],v[n],i;
    for(i=0;i<n;i++)
    cin>>x[i];
    for(i=0;i<n;i++)
    cin>>v[i];
    long long int count=0,swap=0,notpossible=0;
    for(i=n-1;i>=0;i--){
        long long int required = b - x[i];
        long long int cover = t*v[i];

        if(cover>=required){
                count++;
            if(notpossible>0){
                swap += notpossible;
            }
        }
        else{
            notpossible++;
        }
        
        if(count>=k) break;
    }

    if(count>=k)
      cout<<"Case #"<<j<<": "<<swap<<endl;
    else
      cout<<"Case #"<<j<<": "<<"IMPOSSIBLE"<<endl;

    j++;


   }
 
 
  return 0;
}