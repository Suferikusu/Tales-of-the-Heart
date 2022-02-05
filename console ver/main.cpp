#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class Intro{
   public: 
      void run(){
      };
};

class Prologue{
   public:
      void run(){
         cout << "running" << endl;
      };
};

class Kim{
   public:
      void run(){
         cout << "running" << endl;
      };
};

class Angel{
   public:
      void run(){
         cout << "running" << endl;
      };
};

class Liah{
   public:
      void run(){
         cout << "running" << endl;
      };
};

int main()
{
   Prologue prologue;
   Angel angel;
   Kim kim;
   Liah liah;
   
   prologue.run()
  
  return 0;
};
