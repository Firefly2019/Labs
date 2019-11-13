#include<iostream>
#include<string>
#include "RationalNumber.h"

using namespace std;





RationalNumber::RationalNumber(int numerator, int denominator):
  numerator(numerator),
  denominator(denominator)
{}

// a/b  -  c/d  = ( a*d - c*b) / b*d

RationalNumber RationalNumber::operator-(RationalNumber &n){

  RationalNumber tmp;
  tmp.numerator = numerator * n.denominator - n.numerator * denominator;
  tmp.denominator = denominator * n.denominator;
  return tmp;

}

ostream& operator<<(ostream& out, RationalNumber &rn){
  out<< rn.numerator<< "/"<<rn.denominator;
  return out;
}

RationalNumber operator++(RationalNumber &rn, int){

  
  //  1/2 + 2/2  = 3/2  
  // a/b + 1(b/b) = (a+b)/b
  RationalNumber old = rn;
  rn.numerator+= rn.denominator; 
  return old;


}

istream& operator>>(istream& in, RationalNumber &rn){


 
  cout<<"please enter an integer for the numerator: ";
  cin>>rn.numerator;
  cout<<"please enter an integer for the denominator: ";
  cin>>rn.denominator;
 
  
  
  return in; 


}





