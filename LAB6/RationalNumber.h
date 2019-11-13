#ifndef RATIONALNUMBER_H
#define RATIONALNUMBER_H
#include<iostream>

class RationalNumber

{ 

 private:
  int numerator;
  int denominator; 




 public:
  

  RationalNumber(int numerator =0, int denominator=1);
  RationalNumber operator-(RationalNumber &n);




  friend std::ostream& operator<<(std::ostream& out, RationalNumber &rn);
  friend RationalNumber operator++(RationalNumber &rn, int);
  friend std::istream& operator>>(std::istream& in, RationalNumber& rn );








};


#endif
