#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool isPrime( int number){
  if(number == 1 || number == 0)
    return false;
  for(int i = 2; i <= sqrt(number); i++){
    if(number % i == 0){
      return false;
    }
  }
  return true;
}

int main(){
  int n;
  cin >> n;
  while(n--){
    int number;
    cin >> number;
    int a = number;
    while(isPrime(a) != true)
      a--;
    int b = number;
    while(isPrime(b) != true)
      ++b;
    if(number - a <= (b - number))
      cout << a << " " << (number - a) << endl;
    else if ((number - a) > (b - number))
      cout << b  << " " << (b - number) << endl;
  }
  return 0;
}
