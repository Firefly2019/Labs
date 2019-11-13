#include<iostream>
#include<string>

using namespace std;

int numChars(const string s, const char ch);
int numCharsInner(string s, char ch, size_t positionLast);

int main(){

  string s;
  char ch;
 

  cout<<"enter a string\n";
  getline(cin, s);
  cout<<"now enter a character\n";
  cin>>ch;
  cout<<"searching "<<s<< " for: "<< ch<<endl;
  cout<<numChars(s,ch)<<endl;
 
 









  return 0;
}

int numChars(const string s,const char ch){

  string sUpper=s;

  for(int i=0; i< sUpper.length();i++){
    sUpper[i]= toupper(sUpper[i]); 
  }
  return numCharsInner(sUpper, toupper(ch), 0);


}

int numCharsInner(string s, char ch, size_t positionLast){
 

  auto positionFound= s.find((ch ), positionLast);
 



  // string:::npos == positionFound
  if(positionFound == string::npos){
      return 0;

  }
  else{
       return 1 + numCharsInner(s,ch,positionFound +1); 
  }
 
}


// Base case: 1 1
//  Recurse : add the last two
//  Term    : make it stop
