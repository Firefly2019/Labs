#include "Instructor.h"
#include<iostream>
#include<string>

using namespace std;


Instructor::Instructor(){
    setInstructorName("", "" );
    setInstructorGender(' ');
    setEmployeeID(0);
    setOfficeNum("");

}

Instructor::Instructor(string firstName, string lastName, char gender, int employeeID, string officeNum, Course course1, Course course2, Course course3){
  setInstructorName(firstName, lastName);
  setInstructorGender(gender);
  setEmployeeID(employeeID);
  setOfficeNum(officeNum);
  setCourses(course1, course2, course3);
}

void Instructor::setInstructorName(string firstName, string lastName){
  
  this->firstName= firstName;
  this->lastName= lastName;


}

void Instructor::setInstructorGender(char gender){
  this->gender= gender;


}

void Instructor::setEmployeeID(int employeeID){
  this->employeeID=employeeID;
}

void Instructor::setOfficeNum(string officeNum){
  this->officeNum = officeNum;

}
 
void Instructor::setCourses( Course course1, Course course2, Course course3){
  courses[0]= course1;
  courses[1]= course2;
  courses[2]= course3;

}

void Instructor::print()const{
  cout<<firstName<<" "<<lastName<<" "<<gender<<" "<<employeeID<<" "<<officeNum<<" ";
  courses[0].printCompact();
  cout<<" ";
  courses[1].printCompact();
  cout<<" ";
  courses[2].printCompact();
  cout<<endl;
}




