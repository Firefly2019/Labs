#include<iostream>
#include<string>
#include<fstream>

using namespace std;

string replaceSubString(const string str1, const string str2, const string str3);

int main(){

string  str1 = "the dog jumped over the fence";
string  str2= "the";
string  str3= "that";


 cout<<replaceSubString(str1, str2, str3)<<endl;
 








  return 0;
}

string replaceSubString(const string str1, const string str2, const string str3){
  if(str2==""){
    return str1;
  }
  if(str2==str3){
    return str1;
  }

  string str4 = str1;
  size_t found, nextFound=0;
  //  (string::npos==found)

  do{
    found = str4.find(str2 , nextFound);
    if(found != string::npos){
      str4 =  str4.replace( found, str2.size(), str3);  
      nextFound= found + str3.size();
    }

  }
  while(found!= string::npos);

  return str4;
}
