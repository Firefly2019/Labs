#ifndef LL_H
#define LL_H
#include"Node.h"

class LL


{


 private: 
  Node* head;





 public:
  LL();
  LL(const LL& source);
  ~LL();
  void append(std::string pName, std::string phone);
  void insertAtBegin(std::string pName, std::string phone);
  void print();   
  void searchByName(std::string pName);
  void destroy();
  bool operator==(const LL & L1);












};

#endif
