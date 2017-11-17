// Estefano Fodor, Juan Martinez
// November 16th, 2017
#ifndef STRING_CPP
#define STRING_CPP

#include "string.h"

int main(){
  string in = "";
  string post = "";
  string pre = "";
  List list;
  Expression expression;
  string s1 = "";
  cout << "Enter an expression: " << endl;
  cin >> s1;
  Node* n = list.pars_expr(s1);
  expression.infix(n);
  in = expression.return_s1();
  expression.postfix(n);
  post = expression.return_s1();
  expression.prefix(n);
  pre = expression.return_s1();
  cout << in << endl;
  cout << post << endl;
  cout << pre << endl;
  return 0;
};

#endif
