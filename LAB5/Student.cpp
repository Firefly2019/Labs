#include<iostream>
#include<string>
#include "Student.h"

using namespace std;


int Student::totalNumofStudents=0;
int Student::nextStudentID=10000;

Student::Student(): studentID(nextStudentID){

  name="unknown";
  major="CS";
  classification= "undergraduate";
  units=12;
  tuition=0;
  totalNumofStudents++;
  nextStudentID++;
 
}

Student::Student(string name, string major, string classification, int units):
  name(name), 
  classification(classification), 
  units(units),
  studentID(nextStudentID),
  tuition(0)     {
 
  this->major=major;
  nextStudentID++;
  totalNumofStudents++;
}

Student::~Student(){
  totalNumofStudents--;
}



void Student::print() const{


  cout<<name<<" "<<studentID<<" "<<major<<" "<< classification<< " "<<units<<
    " "<<tuition<<" "<<totalNumofStudents<<" "<<nextStudentID<<endl;

}


void Student::setData()
{
  cout<<"Enter name: ";
  getline(cin, name);
  cout<<"Enter Major: ";
  cin>>major;
  cout<<"Enter classification: ";
  cin>>classification;
  cout<<"Enter number of units: ";
  cin>>units;

}
