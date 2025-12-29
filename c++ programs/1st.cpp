#include<iostream>
#include<string>
using namespace std;



   main()
{
  int target=5;
 int num[]={1,2,3};
 int  sum=0;
int i;

for(i=0;i<=3;i++)
{

sum+=num[i];
cout<<"\n"<<sum;
if(sum==target)
cout<<"yes";
}



}