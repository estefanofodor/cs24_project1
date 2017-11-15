// Estefano Fodor, Juan Martinez
// November 11th, 2017
#ifndef LIST_H
#define LIST_H
#include "node.h"

using namespace std;


class List{
 public:
  List();
  Node pars_expr(string expr);
  Node get_root();

 private:
  Node* root;
  
};
#endif
  
