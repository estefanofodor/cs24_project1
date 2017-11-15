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
~Node(Node* source){
  delete source;
}

string Node::print_infix(Node *source) const{
  string s1 = "";
  if(source.val != null){
    s1 = int_to_string(source) + ' )';
  }
  else if(source.var != null){
    s1 = '( '+ source.var + ' ';
  }
  else if(source.op != null){
    s1 = print_operator(source) + ' ';
  }
}

string Node::print_prefix(Node *source) const{
  string s1 = "";
  if(source.val != null){
    s1 = int_to_string(source) + ' ';
  }
  else if(source.var != null){
    s1 = source.var + ' ';
  }
  else if(source.op != null){
    s1 = print_operator(source) + ' ';
  }
}

string Node::print_postfix(Node *source) const{
  if(source.val != null) {
    s1 = int_to_string(source) + ' ';
  }
  else if(source.var != null){
    s1 = source.var + ' ';
  }
  else if(source.op != null){
    s1 = print_operator(source) + ' ';
  }
}

string NODE::int_to_string(Node *source) const{
  string s[1] = to_string(source.data.val);
  return s;
}

char print_operator(Node *source) const{
  char c;
  if(source.data.op == PLUS){
    c = '+';
  }
  else if(source.data.op == MINUS){
    c = '-';
  }
  else if(source.data.op == MULT){
    c = '*';
  }
  else if(source.data.op == DIVIDE){
    c = '/';
  }
  return c;
}

Node Node::get_operand1(Node *a) const{
  return a->operand1;
}

Node Node::get_operand2(Node *a) const{
  return a->operand2;
}

Node Node::get_parent(Node *a) const{
  return parent;
}

void change_operator(Node *source, operator_type op){
  source->data.op = op;
}

void change_operand1(Node *source, Node *a){
  source->operand1 = a;
}

void change_operand2(Node *source, Node *a){
  source->operand2 = a;
}
#endif
