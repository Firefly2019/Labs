#include<iostream>
#include<string>
#include<vector>
#include "P1Class.h"

using namespace std;


int main(){

  vector<string> names{"Joe Garcia", "Amelia Perez", "Bob Haynes", "Tim Ducrest", "Kevin Garcia", "Suzy Walter", "Fang Yi", "Robert James", "Mary Andres"};

  P1Class object1;
  "display names\n";
  object1.display(names);
  "selsort function\n";
  object1.selSort(names);
  "display afert sort\n";
  object1.display(names);
  cout<<object1.binSearch(names, "Kevin Garcia")<<endl;
  cout<<object1.binSearch(names, "Joe James")<<endl;



















  return 0;
}
