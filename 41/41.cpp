#include<iostream>
using namespace std;

void sort(int &a, int &b, int &c){
  int temp = a;
  if(b < temp){
    a = b;
    b = temp;
  }

  int tem = b;
  if(c < tem){
    b = c;
    c = tem;
  }
}

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  sort(a, b, c);
  cout << a << " " << b << " " << c << endl;
  return 0;
}
  
