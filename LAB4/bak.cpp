#include "Instructor.h"
#include<iostream>
#include<string>

using namespace std;


Instructor::Instructor(){
  setInstructorName("" );
  setInstructorGender('');
  setEmployeeNum(0);
  setOfficeNum(0);

}

Instructor::Instructor(string name, char gender, int employeeNum, string officeNum){
  setInstructorName(name);
  setInstructorGender(gender);
  setEmployeeNum(employeeNum);
  setOfficeNum(officeNum);
}

void Instructor::setInstructorName(string firstName, string lastName){
  
  instructorName= firstName+ " "+lastName;


}

void Instructor::setInstructorGender(char gender){
  this.gender= gender;


}
