// Estefano Fodor, Juan Martinez
#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <string>
#include "list.h"
#include "node.h"
using namespace std;

class Expression{
 public:
  Expression(Node *source = NULL);
  string infix();
  string prefix();
  string postfix();
  
 private: 
  string s1;
  int used;
  Node *n;
};
#endif
