#include<bits/stdc++.h>
using namespace std;

class Heap{
   private:
   int size;
   int arr[100];
   
   public:
   Heap(){
     size = 0;
     arr[0] = -1;
   }

   void insert(int x){
      size++;
      int index = size;
      arr[index] = x;
      while(index > 1){
        int parent = index/2;
        if(arr[parent] < arr[index]){
            swap(arr[index],arr[parent]);
            index = parent;
        }
        else{
            return;
        }
      }
   }
   void deleteFromHeap(){
    if(size==0){
        return;
    }
    arr[1] = arr[size];
    size--;
    int i = 1; 
    while(i < size){
      int left = 2*i;
      int right = 2*i+1;
      if(left<size && arr[i] < arr[left]){
        swap(arr[i],arr[left]);
        i=left;
      }
      else if(right<size && arr[i] < arr[right]){
        swap(arr[i],arr[right]);
        i=right;
      }
      else{
        return ;
      }
    }
   }
   void print(){
    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   }
};
void heapify(int i,int n,int arr[]){
   int largest = i;
   int left = 2*i;
   int right = 2*i+1;

   if(left <= n && arr[largest] < arr[left])
   largest = left;

   if(right <= n && arr[largest] < arr[right])
   largest = right;
   
   if(largest!=i){
   swap(arr[largest],arr[i]);
   heapify(largest,n,arr);
  }

}

void heap_sort(int arr[],int n){
    int size = n;

   while(size>1){
    swap(arr[size],arr[1]);
    size--;
    
    heapify(1,size,arr);
   }
  
}
int main(){
 
//  Heap h;
//  h.insert(50);
//  h.insert(55);
//  h.insert(53);
//  h.insert(52);
//  h.insert(54);
//  h.print(); 

//  h.deleteFromHeap(); 
//  h.print();  
 int arr[6] = {-1,54,53,55,52,50};
 int n = 5;
 for(int i=n/2;i>0;i--){
    heapify(i,n,arr);
 }

 for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

 heap_sort(arr,n);
  for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

  return 0;
}