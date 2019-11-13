#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include "Package.h"

class OvernightPackage: public Package

{

 protected:
  double overnightFee;




 public:
  OvernightPackage(std::string senderName, std::string senderAddress,
		   std::string senderCity, std::string senderState, long senderZipCode,
		   std::string recipName, std::string recipAddress, std::string recipCity,
		   std::string recipState, long recipZipCode, std::string label,
		   std::string date, std::string insuranceType, double weight,
		   double costPerOunce, double overnightFee);

  double calculateCost();
  bool validateData();
  void printPackageDetails();

};
#endif
