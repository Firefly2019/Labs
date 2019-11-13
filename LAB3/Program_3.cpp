#include<iostream>
#include<string>
#include<fstream>
#include<sstream>

using namespace std;
string removeSpace(string str);

int main(){

  string str;
  cout<<"Please enter a string\n";
  getline(cin, str);
  cout<<removeSpace(str)<<endl;










  return 0;
}

string removeSpace(const string str){

  istringstream iss(str);
  string result;
  string temp;

  while(iss>>temp){
    result+= temp;  
  }

 
  return result;
 
}
