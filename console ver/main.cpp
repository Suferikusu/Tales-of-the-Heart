#include <iostream>

class Prologue{
   public:
      void run(){
         std::cout << "running" << std::endl;
      }
}

class Kim{
   public:
      void run(){
         std::cout << "running" << std::endl;
      }
}

class Angel{
   public:
      void run(){
         std::cout << "running" << std::endl;
      }
}

class Liah{
   public:
      void run(){
         std::cout << "running" << std::endl;
      }
}

int main()
{
   Prologue prologue;
   Angel angel;
   Kim kim;
   Liah liah;
   
   prologue.run()
  
  return 0;
}
