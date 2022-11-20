#include <iostream>
using namespace std;
bool isPrime(int n){
  
  if(n==1||n==0)return false;
    
  for(int i=2; i*i<=n; i++){
    
    if(n%i==0)return false;
  }
 
  return true;
}
 
int main(){
    int n=12,a=0;
    cout<<"using for loop"<<endl;
      for(int i=1; i<=n; i++){
      //check if current number is prime
      if(isPrime(i)) {
        cout << i << " ";
      }
    }
    cout<<"using while loop"<<endl;
    while(a<=n){
        if(isPrime(a)) {
        cout << a << " ";
      }
      a++;
      }

}
