// Estefano Fodor, Juan Martinez
// November 16th, 2017
#ifndef STRING_CPP
#define STRING_CPP

#include "string.h"

int main(){
  string in = "";
  string post = "";
  string pre = "";
  string s1 = "";
  List list;
  Expression expression;
  cout << "Enter an expression: ";
  cin >> s1;
  cout << list.pars_expr(s1);
  Node* n = list.pars_expr(s1);
  expression.infix(n);
  in = expression.return_s1();
  cout << in;
  expression.postfix(n);
  post = expression.return_s1();
  cout << post << endl;
  expression.prefix(n);
  pre = expression.return_s1();
  cout << pre <<endl;
  return 0;
};

#endif
