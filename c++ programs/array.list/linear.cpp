#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int binarySearch(int arr[],int n,int key){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;;
    if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[]={11,100,5,24,36,45,25};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"enter the element search:";
    cin>>key;
    int result1=linearSearch(arr,n,key);
    if(result1 != -1){
        cout<<"linear Search:Element found at index="<<result1<<endl;
    }else{
        cout<<"linear search:Element not found"<<endl;
    }
    int result2=binarySearch(arr,n,key);
    if(result2 != -1){
        cout<<"binary search:Element found at index="<<result2<<endl;
    }else{
        cout<<"binary search:Elememt not found"<<endl;
        return 0;
    }
}