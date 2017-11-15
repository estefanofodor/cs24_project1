// Estefano Fodor, Juan Martinez
// October 29th, 2017
#ifndef NODE_H
#define NODE_H

using namespace std;

enum node_type{EXPRESSION, VARIABLE, INTEGER};
enum operator_type{PLUS, MINUS, MULT, DIVIDE};

union data_type {
  operator_type op;
  char var;
  int val;
};

class NODE {
 public:
    // Constructor
    Node(char var = 'x');
    Node(operator_type op = PLUS, Node* operand1 = NULL, Node* operand2 = NULL);
    Node(int val = 0);
    Node(Node *parent = NULL);
    // Destructor
    ~Node(Node* source);
    // Observers
    string print_infix(Node *source) const;
    string print_prefix(Node *source) const;
    string print_postfix(Node *source) const;
    string int_to_string(Node *source) const;
    char print_operator(Node *source) const;
    Node get_operand1(Node *a) const;
    Node get_operand2(Node *a) const;
    Node get_parent(Node *a) const;
    // Modifiers
    void change_operator(Node *source, operator_type op);
    void change_operand1(Node *source, Node *a);
    void change_operand2(Node *source, Node *a);
 private:
    node_type node_t;
    data_type data;
    Node* operand1;
    Node* operand2;
    Node* parent;
};

#endif
