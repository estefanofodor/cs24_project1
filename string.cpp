// Estefano Fodor, Juan Martinez
// November 16th, 2017
#ifndef STRING_CPP
#define STRING_CPP

#include "string.h"
#include <cstdlib>

using namespace std;

int main(){
  string s1;
  cout << "Enter an expression: " << endl;
  cin >> s1;
  Node* n = new Node;
  n = pars_expr(s1);
  infix(n);
  cout << return_s1() << endl;
  postfix(n);
  cout << return_s1() << endl;
  prefix(n);
  cout << return_s1() << endl;
  return 0;
}
#endif
