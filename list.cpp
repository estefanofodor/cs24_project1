// Estefano Fodor, Juan Martinez
// November 12th, 2017
#ifndef LIST_CPP
#define LIST_CPP

#include "list.h"
#include <cstdlib>

List::List(){
  Node root = new Node(null);
}

Node List::pars_expr(string expr){
  Node *current = root;
  int val = 0;
  while (expr[i] != NULL){
    val = atoi(expr[i]);
    if ( expr[i] == '('){
      Node* n = new Node(current);
      if(get_operand1(current) == NULL){
	set_operand1(current, n);
      }
      else{
	set_operand2(current, n);
      }
      current = n;
    }
    else if(expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/'){
      Node(expr[i]);
    }
    else if(expr[i] == 'x'){
      Node(expr[i]);
    }
    else if(val >= 0 || val <= 9){
      Node(val);
    }
    else if(expr[i] == ')'){
      current = get_parent(current);
    }
    i++;
  }
  return root;
}

Node List::get_root(){
  return root;
}

#endif    
