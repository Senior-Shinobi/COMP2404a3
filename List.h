#ifndef LIST_H
#define LIST_H

#include "Product.h"

class List
{
  class Node
  {
    public:
      Product* data;
      Node*    next;
  };

  public:
    List();
    ~List();
    bool isEmpty();
    void findProduct(const string& name,Product**prod);
    void add(Product*);
    void del(const string&, Product**);
    void print() const;

  private:
    Node* head;

};

#endif
