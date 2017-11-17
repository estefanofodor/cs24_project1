// Estefano Fodor, Juan Martinez
// November 16th, 2017
#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <string>
#include "list.h"
#include "node.h"
using namespace std;

class Expression{
 public:
  Expression(Node* source = NULL);
  string infix(Node* source);
  string prefix(Node* source);
  string postfix(Node* source);
  
 private: 
  string s1;
  int used;
  Node *n;
};
#endif
