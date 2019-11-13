#include<iostream>
#include<string>

using namespace std;



double yearlySum(double* monthlySales, int size);


int main(){

  int size;
 

  cout<<"Enter the number of monthly sales to be input: ";
  cin>>size;

  if(size<0){
    return 1;
  }

  double* monthlySales= new double [size];


  for(int i = 0; i < size; i++){
    cout<<"Enter the monthly sales for month "<<i<<": "<<endl;
   
    cin>>monthlySales[i];
   
  }
  cout<<"The total sales for the year is: "<<yearlySum(monthlySales, size)<<endl;
 

  delete monthlySales;

  return 0;
}








double yearlySum(double* monthlySales,int size){

  double sum=0;

  for(int i=0; i < size; i++){
    sum += monthlySales[i];
  }
  return sum;
}
