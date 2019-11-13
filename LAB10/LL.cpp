#include<iostream>
#include<string>
#include<iomanip>
#include"LL.h"

using namespace std;

LL::LL(){

   head=nullptr;

}

void LL::append( string pName, string phone){


  Node* newNode = new Node;
  newNode->name=pName;
  newNode->phoneNumber=phone;
 

  if(!head){// if i don't have a head
    // new list 
    head=newNode;
  }
  else{
    // add to end
    // while llop to walk the list
    Node* node=head;// 1) start at head
    //    (!temp->next) ->   temp->next=newNode
    while(node){//2) while I still have a node
      // are we at the tail?
      if(node->next == nullptr){// 3) Probably do something
	node->next=newNode;
	break;
      }
      node=node->next;  /// node's next  node->next  4) step forward
    }

  }

  // n1->n2->n3->....->nt->newNode->nullptr
  //  ^                ^
  // head            node
}


void LL::print(){
  Node* node=head;
  cout<<left<<setw(15)<<"Name"<<setw(12)<<"Phone Number\n";
    cout<<"---------------------------\n";

  while(node){
  

    cout<<left<<setw(15)<<node->name<<
      setw(12)<<node->phoneNumber<<endl;
    node=node->next;
  }


  //auto n=head;
  //while(n) {n=n->next;}

}

// insert at begin.
// Make new node  (newHead)
// newNode->head->n2->n3->nt->  // change newNode's next
// head=newNode  // change the head variable


void LL::insertAtBegin(string pName, string phone){
  Node* newNode = new Node;
  newNode->name=pName;
  newNode->phoneNumber=phone;

  if(!head){
    head=newNode;
  }
  else if(head){
         
     newNode->next=head;
      head=newNode;
    }//add a tmp var to store firstnode then copy

  

}


void LL::searchByName(string pName){

 

  if(!head){
    return;
  }
 Node* node=head;

 while(node){

   if(node->name==pName){
     cout<<node->phoneNumber<<endl;
     return;
   }
 

   node=node->next;


 }
 cout<<"Error: Name does not exist\n";

}

void LL::destroy(){
  if(!head){
    return;
  }
  Node* node=head;

  while(node){
    Node* copy=node->next;
    delete node;
    node=copy;
  }

}

LL::~LL(){
  destroy();
}

LL::LL(const LL& source){
  // head is you, source.head is thing to copy
  Node* dest=nullptr;
  Node* src=source.head;
  head=nullptr;
  
  if(!src){
    return;
  }

  while(src){
    Node* newNode= new Node;
    newNode->name=src->name;
    newNode->phoneNumber=src->phoneNumber;

    if(!dest){
      head=newNode;
    }else{
      dest->next=newNode;
    }
    dest=newNode;
    src=src->next;
  }

}


bool LL::operator ==(const LL & L1){
  Node* left=head;
  Node*right=L1.head;

  while(right && left){

    if((left->name == right->name)&&(left->phoneNumber == right->phoneNumber)){
     
	left=left->next;
	right=right->next;
     
    }
    else{
      return false;
    }
  
    if((!left)&&(right)){
      return false;
    }
    else if((!right)&&(left)){
      return false;

     }
  }
  return true; 
}
  





// main:

/*LL  l1, l2;
l1.append(...), multiple times
  l2.append(same thing)
  assert(l1==l2);
LL l3;
assert(!l1==l2)
*/
