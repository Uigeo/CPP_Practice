#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[]) {
  double a, b;

  if(argc!=3){
    cout << "Usage: add num num\n";
    return 1;
  }

  a = atof(argv[1]);
  b = atof(argv[2]);

  cout << a + b << endl;
  cout << argv[0] << endl;

  return 0;
}
