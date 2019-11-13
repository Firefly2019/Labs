#include<iostream>
#include<string>
#include<vector>
#include "Course.h"

using namespace std;

int main(){
  long courseNumber;
  string courseName;
  int numberOfCredits;
 
  cout<<"Please enter course number, course name, and number of credits, all on one line, separated by spaces:\n";
  cin>>courseNumber>>courseName>>numberOfCredits;

  Course c1( courseNumber, courseName, numberOfCredits);
  c1.print();

  Course c2;
  c2.print();
  cout<<"Please enter course number, course name, and number of credits, all on one line, separated by spaces:\n"; 
  cin>>courseNumber>>courseName>>numberOfCredits;

  c2.setCourseNumber(courseNumber);
  c2.setCourseName(courseName);
  c2.setNumberOfCredits(numberOfCredits);
  c2.print();






  return 0;
}
