// Estefano Fodor, Juan Martinez
// November 14th, 2017
#ifndef EXPRESSION_CPP
#define EXPRESSION_CPP

#include "expression.h"
#include <cstdlib>

Expression::Expression(Node* source){
  s1 = "";
  n = source;
}

void Expression::infix(Node* source){
  if(n == NULL){
    return s1;
  }
  if(get_operand1(n) != NULL){
    infix(get_operand1(n));
  }
  s1 += print_infix(n);
  else if(get_operand2(n) != NULL){
    infix(get_operand2(n));
  }
  return;
}

void Expression::prefix(){
  if(n == NULL){
    return;
  }
  s1 += print_prefix(n);
  if(get_operand1(n) != NULL){
    prefix(get_operand1(n));
  }
  else if(get_operand2(n) != NULL){
    prefix(get_operand2(n));
  }
  return;
}

void Expression::postfix(){
  if( n == NULL){
    return;
  }
  if(get_operand1(n) != NULL){
    postfix(get_operand1(n));
  }
  else if(get_operand2(n) != NULL){
    postfix(get_operand2(n));
  }
  s1 += print_postfix(n);
  return;
}

string Expression::return_s1(){
  return s1;
}
#endif
