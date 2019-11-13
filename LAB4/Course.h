#ifndef COURSE_H
#define COURSE_H
#include<string>

 class Course
 {
  private:
 
      long courseNumber;
      std::string courseName;
      int numberOfCredits;
 
  public:
     Course(); 
     Course(const long courseNumber,const std:: string courseName,const int numberOfCredits);
     void setCourseNumber(const long courseNumber);
     void setCourseName(const std::string courseName);
     void setNumberOfCredits(const int numberOfCredits);
     void print()const;
     void printCompact() const;
 }; 
 #endif
