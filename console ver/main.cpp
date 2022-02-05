#include <iostream>

class Prologue{
   public:
      void run(){
         std::cout << "running" << std::endl;
      }
}

int main()
{
   Prologue prologue;
   prologue.run()
   std::cout << "hello" << std::endl;
  
  return 0;
}
