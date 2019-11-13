#include<iostream>
#include<vector>
#include<fstream>
#include<iomanip>

using namespace std;

struct Person
{
  string firstName;
  string lastName;
  string phoneNumber;
};

bool readDirectory(vector<Person>& V);
void printDirectory(const vector<Person>& V);


int main(){
  vector<Person> V;

  if(readDirectory(V)){
    printDirectory(V);
  }
  return 0;
}

/////////////////////////////////////////////////////////////////
bool readDirectory(vector<Person>& V){
  ifstream fin("telephoneData.txt");
  if(fin.fail()){
    cerr<<"ERROR reading file\n";  
    return false;
  }
 

  while(!fin.fail()){
    Person person;

    fin>>person.firstName>>person.lastName>>person.phoneNumber; //need to initialize the empty structure
    if(fin.fail()){
      break;   
    }
    
    V.push_back(person);
  }
  return true;
}


/////////////////////////////////////////////////////////////////
void printDirectory(const vector<Person>& V){
  cout<<setw(20)<<left<<"Name"<<setw(9)<<left<<"Telephone"<<endl;
  cout<<setw(0)<<"---------------------------------\n";   
  for(int i =0; i < V.size(); i++){

    cout<<setw(20)<<left<<(V[i].firstName+ " " +V[i].lastName)<<setw(20)<<left<<V[i].phoneNumber<<endl;

  }
}








