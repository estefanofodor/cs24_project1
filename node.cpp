// Estefano Fodor, Juan Martinez
// November 11th, 2017
#ifndef NODE_CPP
#define NODE_CPP

#include "node.h"
#include <string>

Node::Node(char var){
  data.var = var;
}
Node::Node(operator_type op, Node* operand1, Node* operand2, Node* parent){
  data.op = op;
  this->operand1 = operand1;
  this->operand2 = operand2;
  this->parent = parent;
}

Node::Node(int val){
  data.val = val;
}

Node::Node(Node* parent){
  this->parent = parent;
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
      infix[i] = data.var;
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
      prefix[i] = data.var;
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
      postfix[i] = data.var;
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
  string s[1] = to_string(data.val);
  return s;
}

char print_operator() const{
  char c;
  if(data.op == PLUS){
    c = '+';
  }
  else if(data.op == MINUS){
    c = '-';
  }
  else if(data.op == MULT){
    c = '*';
  }
  else if(data.op == DIVIDE){
    c = '/';
  }
  return c;
}

Node Node::get_operand1(Node *a) const{
  return operand1;
}

Node Node::get_operand2(Node *a) const{
  return operand2;
}

Node Node::get_parent(Node *a) const{
  return parent;
}

void change_operand1(Node *source, Node *a){
  source->operand1 = a;
  return;
}

void change_operand2(Node *source, Node *a){
  source->operand2 = a;
  return;
}

#endif
