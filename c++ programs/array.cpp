#include<iostream>
#include<climits>
using namespace std;
int main(){
  int n=5;
  int arr[5]={1,2,3,4,5};
  int maxSum=INT_MIN;
  for(int st=0;st<n;st++){
    int CurrSum=0;
    for(int end=st;end<n;end++){
     CurrSum +=arr[end];
      maxSum=max(CurrSum,maxSum);
      }
    }
    cout<<"max subarray sum="<<maxSum<<endl;
    return 0;
}