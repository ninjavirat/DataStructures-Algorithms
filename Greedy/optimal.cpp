#include<bits/stdc++.h>
using namespace std;


int sol(int arr,int i,int j,int Sum){
    if(j==i+1)
    {
        return max(arr[i],arr[j]);
    }
    

    return max(Sum-sol(arr,i+1,j,Sum-arr[i]),Sum-sol(arr,i,j-1,Sum-arr[j]));
}
int main()
  {
      int arr[]={20,5,4,6};
      int n=sizeof(arr)/sizeof(arr[0]);
      int mainSol(int arr[],int n)
      {
          int sum=0;
          for(int i=0;i<n;i++){
              sum+=arr[i];
          }
          return sol(arr,0,n-1,sum);
      }

      cout<<mainSol(arr,n);
    return 0;
  }