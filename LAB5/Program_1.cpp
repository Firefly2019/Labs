#include<iostream>
#include<string>
#include "Student.h"

using namespace std;

int main(){

  Student student1;
  student1.print();

  Student student2("unknown", "PHYS", "graduate",0);
  student2.setData();
  student2.print();











  return 0;
}
