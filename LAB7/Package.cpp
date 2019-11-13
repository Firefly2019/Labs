#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include "Package.h"


using namespace std;
Package::Package(){}

Package::Package(string senderName, string senderAddress,
		 string senderCity, string senderState, long senderZipCode, 
		 string recipName, string recipAddress, string recipCity,
		 string recipState, long recipZipCode, string label, string date, 
		 double weight, double costPerOunce, string insuranceType):
  senderName(senderName),
  senderAddress(senderAddress),
  senderCity(senderCity),
  senderState(senderState),
  senderZipCode(senderZipCode),
  recipName(recipName),
  recipAddress(recipAddress),
  recipCity(recipCity),
  recipState(recipState),
  recipZipCode(recipZipCode),
  label(label),
  date(date),
  insuranceType(insuranceType),
  weight(weight),
  costPerOunce(costPerOunce)
 
{



  validateData();


}

bool Package::validateData(){
  
  bool dataOK= true;
  int stateLength=2;
  if((weight <= 0)){
    cout<<"Error: weight must be greater than zero\n";
    dataOK=false;
  }
  if((costPerOunce <=  0)){
    cout<<"Error: cost must be greater than zero\n";
    dataOK=false;
  }
 
  if((senderState.length() != stateLength)){
        cout<<"Error: state must be only two letter\n";
        dataOK=false;
  }
  if((recipState.length() != stateLength)){
    cout<<"Error: state must be only two letter\n";
    dataOK=false;
  }
  if(!(senderName.length()&& senderAddress.length() && senderCity.length())){
    cout<<"Error: invaild data\n";
    dataOK=false;
  }
  if(!(recipName.length()&& recipAddress.length() && recipCity.length())){
    cout<<"Error: invaild data\n";
    dataOK=false;
  }
  return dataOK;
  //add other edge cases to check in adress and such is valid

}


double Package::calculateCost(){
  double cost;

  

  cost=( weight * costPerOunce) + insuranceFee();

  return cost;
}


double Package::insuranceFee(){


 double fee; 

  if(insuranceType=="upto1000"){
    fee= 5.25;
  }
  else if(insuranceType == "upto5000"){
    fee= 5.50;
  }
  return fee;

}

void Package::printPackageDetails(){

  validateData();  
 

  cout<<"Sender name is: "<<senderName<<endl;
  cout<<"Sender address is: "<<senderAddress<<endl;
  cout<<"Sender city is: "<<senderCity<<endl;
  cout<<"Sender state is: "<<senderState<<endl;
  cout<<"Sender zip code is: "<<senderZipCode<<endl;
  cout<<"Recipient name is: "<<recipName<<endl;
  cout<<"Recipient address is: "<<recipAddress<<endl;
  cout<<"Recipient city is: "<<recipCity<<endl;
  cout<<"Recipient state is: "<<recipState<<endl;
  cout<<"Recipient zip code is: "<<recipZipCode<<endl;
  cout<<"Label: "<<label<<endl;
  cout<<"Date: "<<date<<endl;
  cout<<"Weight: "<<weight<<endl;
  cout<<"Cost per ounce: "<<costPerOunce<<endl;
  cout<<"Insurance Type: "<<insuranceType<<endl;
   

}





