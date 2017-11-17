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
  operator_type opr;
  Node* current = root;
  int val = 0;
  int i = 0;
  char c = expr[0];
  while (c != '\0'){
    c = expr[i];
    val = c;
    if ( c == '('){
      Node* n = new Node(PLUS);
      n->setParent(current);
      if(current->get_operand1() == NULL){
	current->change_operand1(n);
      }
      else{
	current->change_operand2(n);
      }
      current = n;
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
      p->setParent(current->get_parent());
      delete current;
      current = p;
    }
    else if(val >= 0 || val <= 9){
      Node* q = new Node(val);
      q->setParent(current->get_parent());
      delete current;
      current = q;
    }
    else if(c == ')'){
      current = current->get_parent();
    }
    i++;
  }
  return this->root;
}

Node* List::get_root() const{
  return this->root;
};

#endif    
