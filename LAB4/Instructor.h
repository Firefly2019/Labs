#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include<string>
#include "Course.h"

class Instructor
{
 private:
  std::string firstName;
  std::string lastName;
  char gender;
  long employeeID;
  std::string officeNum;
  Course courses[3];


  
 public:
  Instructor(); 
  Instructor(const std:: string firstName , const std::string lastName,const char gender,
  const int employeeID , const std::string officeNum,const Course course1,const Course course2,
  const Course  course3 );
  void setInstructorName(const std::string firstName,const std::string lastName);
  void setInstructorGender(const char gender);
  void setEmployeeID(const int employeeID);
  void setOfficeNum(const std::string officeNum);
  void setCourses (const Course course1,const Course course2,const Course course3 );
  void print() const;
 };
#endif
