#include <iostream>
using namespace std ;
int binTodec(int n){
    int rem , ans =0, pow=1;
    while(n>0){
    rem = n%10;
    n=n/10;
    ans+=rem*pow;
    pow*=2;}
    return ans ;
    
}
int main(){
    int n ;
    cout<<"Enter the binary number "<<endl;
    cin>>n;
    cout<<"decimal no. for given binary is "<<binTodec(n)<<endl;
    return 0;
}