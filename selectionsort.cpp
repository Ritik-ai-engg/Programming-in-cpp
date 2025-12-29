#include<iostream>
using namespace std;
void selectioSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int smallestidx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestidx]){
                smallestidx=j;
            }
        }
        swap(arr[i],arr[smallestidx]);
    }
 }
 void display(int arr[],int n){
        for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
        }
        cout<<endl;
   }
 int main(){
    int arr[]={4,3,5,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout << "Original array: ";
    display(arr, n);
    selectioSort(arr,n);
    cout << "Sorted array: ";
    display(arr,n);
    return 0;

 }