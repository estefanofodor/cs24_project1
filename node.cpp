//Estefano Fodor, Juan Martinez
// November 11th, 2017
#ifndef NODE_CPP
#define NODE_CPP

#include "node.h"
#include <string>

Node::Node(char var = 'x'){
  node_t.data.var = x;
}
Node::Node(operator_type op = PLUS, Node* operand1 = NULL, Node* operand2 = NULL){
  node_t.data.op = op;
}

Node::Node(int val = 0){
  node_t.data.val = val;
}
~Node(){
  delete node_t;
}

string Node::print_infix() const{
  string infix[9];
  for ( int i = 0; i < 9; i++){
    if(i == 0 ) {
      infix[i] = "(";
    }
    else if (i == 2){
      infix[i] = node_t.data.var;
    }
    else if (i == 4){
      infix[i] = print_operator();
    }
    
    else if (i == 6){
      infix[i] = int_to_string;
    }
    else if (i == 8){
      infix[i] = ")";
    }
    else {
      infix[i] = " ";
    }
  }
  return infix;
}

string Node::print_prefix() const{
  string prefix[5];
  for( int i = 0; i < 5; i++){
    if(i = 0){
      prefix[i] = print_operator();
    }
    else if(i = 2){
      prefix[i] = node_t.data.var;
    }
    else if(i = 4){
      prefix[i] = int_to_string();
    }
    else{
      prefix[i] = " ";
    }
  }
  return prefix;
}

string Node::print_postfix() const{
  string postfix[5];
  for( int i = 0; i < 5; i++){
    if(i = 0){
      postfix[i] = node_t.data.var;
    }
    else if(i = 2){
      postfix[i] = int_to_string();
    }
    else if (i =4){
      postfix[i] = print_operator();
    }
    else {
      postfix[i] = " ";
    }
  }
  return postfix;
}

string NODE::int_to_string() const{
  string s[1] = to_string(node_t.data.val);
  return s;
}

char print_operator() const{
  char c;
  if(node_t.data.op == PLUS){
    c = '+';
  }
  else if(node_t.data.op == MINUS){
    c = '-';
  }
  else if(node_t.data.op == MULT){
    c = '*';
  }
  else if(node_t.data.op == DIVIDE){
    c = '/';
  }
  return c;
}
