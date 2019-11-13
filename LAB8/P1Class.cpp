#include<iostream>
#include<vector>
#include<string>
#include "P1Class.h"

using namespace std;


P1Class::P1Class()  
{
}


void P1Class::selSort(vector<string>&V){



  for(int i=0; i<V.size(); i++){

    int minimum=i;      
      for(int j= i; j< V.size(); j++){

	  if(V[j] < V[minimum]){
	     minimum =j;
	  }
	    
      }
      if(i !=minimum){
         
        string temp=V[i];
        V[i]=V[minimum];
        V[minimum]=temp;
      }
  }
}


// 9 3 7
// 3 (9 7)

// swap
// type temp=a
// a=b
// b=temp


void P1Class::display(vector<string> &V)const{

  for(int i=0; i<V.size();i++){

    cout<<V[i]<<endl;
  }

}

int P1Class::binSearch( vector<string>& V, string key){

  int left=0;
  int right=V.size()-1;

  //i0 1 2 3 4
  // 1 3 5 8 9
  // x       x
  //     o x x
  //       o X

  while(true){
    int mid=(left+right)/2;
    if(V[mid]== key){
      return mid;
    }
    if(left == right){
      return -1;
    }
    if(key > V[mid]){
      left=mid+1;
    }
    else{
      right=mid-1;
    }
  }
 
}







