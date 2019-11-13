#include<iostream>
#include<string>
#include<vector>
#include "OvernightPackage.h"


using namespace std;


OvernightPackage::OvernightPackage(string senderName, string senderAddress,
					  string senderCity, string senderState, 
					  long senderZipCode,string recipName, 
					  string recipAddress, string recipCity,
					  string recipState, long recipZipCode, 
					  string label, string date,
					  string insuranceType, double weight, 
				   double costPerOunce, double overnightFee): Package( senderName, senderAddress,
										       senderCity,  senderState,  
										       senderZipCode, recipName, 
										       recipAddress, recipCity,
										       recipState,  recipZipCode, 
										       label,  date,
										       weight, costPerOunce, insuranceType)  
										       


 {
   this->overnightFee=overnightFee; 
}





bool OvernightPackage::validateData(){

  bool dataOK= Package::validateData();

  if(overnightFee <= 0){
    cout<<"Error: data not vaild\n";
    dataOK=false;
  }
  return dataOK;

}


double OvernightPackage::calculateCost(){

  double cost;

  cost = (overnightFee + costPerOunce) * weight;
  cost += insuranceFee();
  return cost;
}

void OvernightPackage::printPackageDetails(){

  Package::printPackageDetails();
  cout<<"Overnight Fee is: "<<overnightFee<<endl;



}

