#include<iostream>
#include<string>
#include "RationalNumber.h"

using namespace std;

int main(){

  RationalNumber r1(7, 3), r2(3,9), r3, r4;

  r3= r1 - r2;

  cout<<r3<<endl;

  // or r1++
  // r3 = r1
  r3=r1++;

   cout<<r3<<endl;

  cin>>r4;
  cout<<r4<<endl;


  return 0;
}
