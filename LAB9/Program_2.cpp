#include<iostream>
#include<string>
#include<vector>
#include"Course.h"

using namespace std;


int main(){

 Course c;
 const int size=3;

 Course* ptr[size];
 

 

  for(int i=0; i<size; i++){
     ptr[i] = new Course;    
    
    
  }

  ptr[0]->setCourseNumber(70503);
  ptr[0]->setCourseName("CS211");
  ptr[0]->setNumberOfCredits(4);

 ptr[1]->setCourseNumber(70507);
 ptr[1]->setCourseName("CS231");
 ptr[1]->setNumberOfCredits(4);

 ptr[2]->setCourseNumber(70509);
 ptr[2]->setCourseName("CS331");
 ptr[2]->setNumberOfCredits(3);



c.print();

 for(int i=0; i<size; i++){ 
ptr[i]->printCompact();
 }

 





 for(int i=0; i<size; i++){

delete ptr[i];
 }
  return 0;

}
