#include<iostream>


using namespace std;

int multiply(int x, int y);


int main(){


  cout<<multiply(4,7)<<endl;
  cout<<multiply(1,5)<<endl;
  cout<<multiply(0,2)<<endl;
  cout<<multiply(8,0)<<endl;

















  return 0;

}

int multiply(int x, int y){

  if(x<y){
    return multiply(y,x);
  }

  else if(y != 0){
    return (x + multiply(x, y-1));
  }
  else{
    return 0;
  }
}









