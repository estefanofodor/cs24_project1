// Estefano Fodor, Juan Martinez
// November 11th, 2017
#ifndef LIST_H
#define LIST_H
#include "node.h"

using namespace std;


class List{
 public:
  Node* pars_expr(string expr);
  

 private:
  Node* head;
  
};
#endif
  
