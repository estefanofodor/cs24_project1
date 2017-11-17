// Estefano Fodor, Juan Martinez
// November 11th, 2017
#ifndef LIST_H
#define LIST_H
#include "node.h"
#include <string>

using namespace std;


class List{
 public:
  List();
  Node* pars_expr(string expr);
    
 private:
  Node* root;
  
};
#endif
  
