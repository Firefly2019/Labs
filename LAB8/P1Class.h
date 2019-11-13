#ifndef P1CLASS_H
#define P1CLASS_H
#include<string>
#include<vector>

class P1Class

{

 private:
    std::vector<std::string>V;




 public:
  P1Class();

  void selSort(std::vector<std::string> &V);
  void display(std::vector<std::string> &V)const;
  int  binSearch( std::vector<std::string>& V, std::string key);






















};
#endif
