#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

int main(){
  vector<string> V;

  ifstream fin("vectorData.txt");
  if(fin.fail()){
    cerr<<"ERROR Opening File\n";
    return 1;
  }

  while(!(fin.eof() || fin.fail())){

    string command, word;
    int pos;

    fin>>command;
    if(fin.fail()){
      break;
    }  

    if(command == "Insert"){
      fin>>word>>pos;
      if((pos>=0) && (pos<=V.size())    ) 
	V.insert(V.begin()+pos, word);
    }
    else if (command == "Delete"){
      fin>>pos;   //    2  <= x  <= 7   ;;  (x>=2)&&(x>=7)
      if((pos >=0)&&(pos<V.size()))
        V.erase(V.begin()+pos);    
    }
    else if (command == "Print"){
      for(int i = 0; i<V.size();i++){
	cout<<V[i]<<" "; 
      }
      cout<<endl;

    
    } else {
      break;    
    }

  }

 return 0;
}
