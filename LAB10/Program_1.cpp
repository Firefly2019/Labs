#include<iostream>
#include<string>
#include"Node.h"
#include"LL.h"

using namespace std;

int main(){

  LL List1;
   List1.insertAtBegin("Nancy Garcia", "617-227-5454");
    List1.append("Adam James", "202-872-1010");
   List1.append("Jim Meyer", "337-465-2345");
    List1.insertAtBegin("Joe Didier", "352-654-1983");
    List1.append("Mayssaa Najjar", "878-635-1234");
  List1.print();
  cout<<endl;
  List1.searchByName("Nancy Garcia");
   List1.searchByName("Mayssaa Najjar");
   List1.searchByName("Jamie Garcia");

  LL List2(List1);
  if(List1==List2){
    cout<<"Both Lists are the same\n";
    List2.print();
    cout<<endl;
  }
  else{
    cout<<"Both lists are different\n";
      List1.print();
      List2.print();
      cout<<endl;
     }
  List1.insertAtBegin("Michel Delgado", "327-165-2345");


  if(List1==List2){
    cout<<"Both Lists are the same\n";
  }
  else{
    cout<<"Both lists are different\n";
      List1.print();
      cout<<endl;
      List2.print();
    cout<<endl;
  }


  return 0;
}
