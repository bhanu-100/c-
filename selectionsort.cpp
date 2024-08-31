#include<iostream>
using namespace std;
void selectionsort(int A[],int n)
{
for(int i=0;i<n-1;i++)
{
     for(int j=i+1;j<n;j++)  
{
      if(A[j]<A[i])
      {
        int temp=A[j];
        A[j]=A[i];
        A[i]=temp;
      }
}
}
for(int x=0;x<n;x++)
    {
        cout<<A[x]<<"  ";
    }
    cout<<endl;
}
void bubblesort(int A[],int n)
{
   int counter=1;
    while(counter<n-1)
    {
        for(int i=0;i<n-counter;i++)
        {
            if(A[i]>A[i+1])
            {
                int temp=A[i+1];
                A[i+1]=A[i];
                A[i]=temp;
            }
        }
      counter++;
    }
      for(int x=0;x<n;x++)
    {
        cout<<A[x]<<"  ";
    }
    cout<<endl;
}
void insertionsort(int A[],int n)
{
    for(int i=1;i<n;i++)
    {
        int current = A[i];
        int j=i-1;
        while(A[j]>current&&j>=0)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=current;
    }
 for(int x=0;x<n;x++)
    {
        cout<<A[x]<<"  ";
    }
    cout<<endl;
}
int main()
{
  int A[]={99,55,88,44,77,35,90,46};
  selectionsort(A,8);
  int C[]={99,55,88,44,77,35,90,46};
  insertionsort(C,8);
  int B[]={99,55,88,44,77,35,90,46};
  bubblesort(B,8);
    return 0;
}