#include<iostream>
#include<vector>
using namespace std;
int min(int a,int b)
{
    if(a>=b)
    return b;
    else 
    return a;
}
    string longestCommonPrefix(vector<string>& strs) {
        int l=strs.size();
        int i,j;
        int k=0;
        string c,b=strs[0];
        for(i=1;i<l;i++)
        {
          for(j=0;j<min(b.size(),strs[i].size());j++)//    {"flower","flow","flight"}
          {
             if(b[j]==strs[i][j])
             {
                 k=j+1;
             }
             else
             break;
          }
        }
        if(k==0)
        {cout<<"  @@";
            return NULL;
        }
        else
        {
        for(i=0;i<k;i++)
        {
            c[i]=b[i];
            cout<<b[i];
        }
        return c;
        }
        
    }
    int main()
    {
        vector<string> strs={"flower","flow","flight"};
       longestCommonPrefix(strs);
        return 0;
    } 
  
