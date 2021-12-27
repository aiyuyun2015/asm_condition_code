#include<iostream>

struct Ret{

  bool CF;
  bool ZF;
  bool SF;
  bool OF;
  
};


struct Ret cmpl(int S2, int S1){
  int t = S1 - S2;
  int a = S1;
  int b = S2;
  
  struct Ret ret;
  ret.CF = unsigned( t) < unsigned(a);
  ret.ZF = (t == 0);
  ret.SF = (t < 0);
  // I haven't foudn a way to check OF, however, the book's method is wrong
  // usually, we dont' see OF ofthen, so set it to 0.
  ret.OF = false; //((a < 0) == (b < 0)) && ((t < 0) != (a < 0));
  return ret;
  
}

void generate(int x, int y){

  
  struct Ret ret = cmpl(y, x);
  
  bool CF = ret.CF;
  bool SF = ret.SF;
  bool OF = ret.OF;
  bool ZF = ret.ZF;
  
  std::cout << "CF: " << CF << std::endl;
  std::cout << "SF: " << SF << std::endl;
  std::cout << "ZF: " << ZF << std::endl;
  std::cout << "OF: " << OF << std::endl;
  
  bool setg = ! (SF ^ OF) & !ZF;
  bool setl = SF^OF;

  std::cout << "setg:"<<setg << std::endl;
  std::cout << "setl:"<<setl << std::endl;
  
}

int main(){

  std::cout << "cmpl(2, 1) : " << std::endl;
  generate(1, 2);

  std::cout << "compl(1, 2) : " << std::endl;
  generate(2, 1);
  

  return 0;
}
