#include <iostream>
using namespace std;

int main() {
  int num1;
  cout <<"Enter the first number:";
  cin >> num1;

  int num2;
  cout <<"Enter the second number:";
  cin >> num2;

  if(num2 == 0){
      throw 99;
  }

  cout <<"Result:"<<num1 / num2;

  return 0;
}
