// Estefano Fodor, Juan Martinez
// November 12th, 2017
#ifndef LIST_CPP
#define LIST_CPP

#include "list.h"
#include <cstdlib>

List::List(){
  this->root = new Node(PLUS);
}

Node* List::pars_expr(string expr){
  if(expr.length() == 0){
    return this->root;
  }
  List();
  operator_type opr;
  Node* current = this->root;
  int val;
  int i = 0;
  int length = expr.length();
  char c = expr[0];
  while (i < length){
    c = expr[i];
    val = c - '0';
    if ( c == '('){
      if(current != this->root){
	Node* n = new Node(PLUS);
	n->setParent(current);
	if(current->get_operand1() == NULL){
	  current->change_operand1(n);
	}
	else if(current->get_operand2() == NULL){
	  current->change_operand2(n);
	}
	current = n;
      }
    }
    else if(c == '+' || c == '-' || c == '*' || c == '/'){
      if(c == '+'){
    	opr = PLUS;
      }
      else if(c = '-'){
    	opr = MINUS;
      }
      else if(c = '*'){
    	opr = MULT;
      }
      else if(c = '/'){
    	opr = DIVIDE;
      }
      current->change_operator(opr);
    }
    else if(c == 'x'){
      Node* p = new Node(c);
      current->change_operand1(p);
    }
    else if(val >= 0 || val <= 9){
      Node* q = new Node(val);
      current->change_operand2(q);
      current = current->get_parent();
    }
    else if(c == ')'){
      current = current->get_parent();
    }
    i++;
  }
  return this->root;
};

#endif    
