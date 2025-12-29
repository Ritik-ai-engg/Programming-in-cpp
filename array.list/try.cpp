#include<iostream>
using namespace std;
 int main(){
    int marks[5]={99,100,51,36,88};
    int size;
    cout<<sizeof(marks)/sizeof(int)<<endl;
    cin>>size;
    for(int i=0;i< size;i++){
        cout<<marks[i]<<endl;
    }
    return 0;
 }