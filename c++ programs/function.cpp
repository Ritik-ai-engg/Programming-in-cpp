#include<iostream>
using namespace std;
// void printhello(){
//     cout<<"hello\n";
// }
// int main(){
//     printhello();
/// int sum(int a,int b){                                 // sum of two numbers
// int sum=a+b;
// }
// int main(){
// int a,b;
// cout<<"enter a=";
// cin>>a;
// cout<<"enter b=";
// cin>>b;
// cout<<sum(a,b)<<endl;
//// int minoFtwo(int a,int b){                         // find min between two numbers
// if(a<b){//parameter
//     return a;
// }else{
//     return b;
// }
// }
// int main(){
// int a,b;
// cout<<"enter a=";
// cin>>a;
// cout<<"enter b=";
// cin>>b;
// cout<<"min="<<minoFtwo(a,b)<<endl;//argument<literals
///// int sum(int n){                                         ///calculate sum of numbers 1to n
// int sum=0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     return sum;
// }
// int main(){
//     int n;
// cout<<"enter n=";
// cin>>n;
// cout<<"sum="<<sum(n)<<endl;
// int factorial(int n){                                       //calculate factorial
/////// int fact=1;
//  for(int i=1;i<=n;i++){
//        fact*=i;
//  }
//  return fact;
// }
//  int main(){
//     int n;
// cout<<"enter n=";
// cin>>n;
// cout<<"factorial="<<factorial(n)<<endl;
/////// int sumoFdigits(int num){                    ///sum of digits
// int digitsum=0;
// while(num>0){
//     int lastdigit=num%10;
//     num /=10;
//     digitsum +=lastdigit;
// }
// return digitsum;
// }
//   int main(){
//     int num;
// cout<<"enter number=";
// cin>>num;
// cout<<"sum of digits="<<sumoFdigits(num)<<endl;
 int factorial(int n){                                  ///bionomial coefficient for n&r   
 int fact=1;
 for(int i=1;i<=n;i++){
       fact*=i;
 }
 return fact;
}int nCr(int n, int r){
    int fact_n= factorial(n);
    int fact_r=factorial(r);
    int fact_nmr=factorial(n-r);
    return fact_n/(fact_r*fact_nmr);
}int main(){
    int n=8,r=2;
    cout<<nCr(n,r)<<endl;
    return 0;
}
// #include<iostream>
// using namespace std;
// int decTobinary(int decnum){
//     int ans=0,pow=1;
//     while(decnum>0){
//         int rem=decnum % 2;
//          ans +=(rem*pow);
//          pow *= 10;
//     }
//     return ans;
// }int main(){
//     int decnum=50;
//     cout<<decTobinary( decnum)<<endl;
//     return 0;
// }