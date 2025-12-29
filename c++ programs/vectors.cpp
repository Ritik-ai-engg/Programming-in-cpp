#include<iostream>
#include<vector>
#include<climits>
using namespace std;
// int findMajorityElement(vector<int>&nums){
// int n=nums.size();
// for(int val:nums){
//   int freq=0;
//   for(int el:nums){
//     if(el==val){
//       freq++;
//     }
//   }
//   if(freq>n/2){
//     return val;
//   }
// }
// return -1;
// }
//  int main(){
//   vector<int> nums = {1,2,2,1,1}; // Example vector
//     int majorityElement = findMajorityElement(nums);
//     cout<<majorityElement<<endl;
//     return 0;
// }
// int main(){
//     int n=5;
//     int arr[]={3,-4,5,4,-1,7};
//     int maxSum=INT_MIN;
//     for(int st=0;st<n;st++){
//       int CurrSum=0;
//       for(int end=st;end<n;end++){
//         CurrSum+=arr[end];
//         maxSum=max(CurrSum,maxSum);
//       }
//     }
//     cout<<"max subarray sum="<<maxSum<<endl;
//   return 0;
// }