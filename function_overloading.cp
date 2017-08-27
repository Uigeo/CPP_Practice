#include <iostream>
using namespace std;

char myfunc(unsigned char ch);
char myfunc(char ch);

int main(int argc, char const *argv[]) {
  cout << myfunc('c') << endl ;
  cout << myfunc('88') << endl;

  return 0;
}

char myfunc(unsigned char ch){
  return ch-1;
}
char myfunc(char ch){
  return ch+1;
}
