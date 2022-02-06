#include <iostream>
#include <string>
// The <windows.h> header adds the command sleep to delay the time of the game
#include <windows.h>

using namespace std;

// Intro class of the game
class Intro
{
   public:
      void run()
      {
      	// Title of the game
      	 cout << "------------------------------------------------"<< endl;
         cout << " Dating Simulator made by Group 2 in MCS102 BSU" << endl;
         cout << "                (Title)" << endl;
         cout << "       Press any key to continue." << endl;
      	 cout << "------------------------------------------------"<< endl;

      }

      // This method will ask the user to input yes or no if they wanna play 
      // It will return an Integer value of 1 to 0
      // If it did not input the right answer it will ask the user again to input a valid one
      int ask()
      {
        // This string is just to verify if the player want to play
      	string play = "";
      	cout << "Do you wanna play? Y/N: ";
      	getline(cin, play);
      	while (true)
      	{
      		if (play == "Y" || play == "y" || play == "yes" || play == "Yes")
            {

      			return 1;
      			break;
      		}
            else if(play == "N" || play == "n" || play == "No" || play == "no")
            {
      			return 0;
      			break;

      		}
            else
            {
      			cout << "Please choose only Y or N: ";
      			// This getline command is like the cin command or scanf command
      			// But this command read all the strings within the line including spaces
      			getline(cin, play);
      		};
      	};
      }

};

class Prologue{
    // This variable is to store the chosen girl in the prologue
	int girl;
    // String None is the variable that holds the players chosen option
	string None;
   public:
   
      // First Scene in the Prologue
	  int scene1(){
	  	cout << endl;
	  	cout << "It's my first day of school and Im running pretty late. This happened because I pulled an all-nighter playing a game." << endl;
         // The sleep command came from the header <windows.h> it is use to delay the output in the console
	  	Sleep(4000);
	  	cout << endl;
	  	cout << "I was grinding for a Dark Iron Sword for my game." << endl;
	  	cout << endl;
	  	Sleep(3000);
	  	cout << "Hopefully I won't be late on the first day of school." << endl;
	  	Sleep(3000);
	  	cout << endl;
	  	cout << "*THUMP*"<< endl;
	  	cout << endl;
	  	Sleep(3000);
	  	cout << "[Angel]: Hey! Why did you bump into me?" << endl;
	  	Sleep(3000);
	  	cout << endl;
	  	cout << "Responses:\n[1] Sorry *helps her* \n[2] I'm so sorry *helps and escort her*\n[3] … (...)\n[4] *Start Panicking"<<endl;
	  	cout << "Option: ";
          
          //get line is the same as cin and scanf the difference is that getline reads the whole line
	  	getline(cin, None);
	  	cout << endl;

	  	// While statement to keep repeating until the user chooses a valid option
	  	while (true)
	  	{
        // If the users pick the option then this block of code will run
	  	if (None == "1")
	  	{
	  		cout << "1";
	  		break;
	  	}
	  	else if (None == "2") 
	  	{
	  		Sleep(3000);
	  		cout << "*While walking her to the classroom*"<< endl << endl;
	  		Sleep(3000);
	  		cout << "[Angel]: Are you new to this school?" << endl << endl;
	  		Sleep(3000);
	  		cout << "[MC]: Yea kind of" << endl;

	  		cout << endl;
	  		Sleep(3000);
	  		cout << "*I Escorted her to her class*"<< endl << endl;
	  		Sleep(3000);
	  		cout << "[Angel]: Thanks for escorting me\n\n*In class*\n" << endl;
	  		Sleep(3000);
	  		cout << "Inner monologue" << endl;
	  		cout << "[MC]: Damn, that woman I just bumped looked gorgeous.\n" << endl;
	  		Sleep(3000);
	  		break;	
	  	}
	  	else if ( None == "3")
	  	{
	  		cout << "3";
	  		break;
	  	}
	  	else if ( None == "4")
	  	{
	  		cout << "4";
	  		break;
	  	}
	  	else
	  	{
	  		cout << "Not an Option" << endl;
	  		getline(cin, None);
	  	}	


	  	};


	  }
    
      // Second Scene in the Prologue
    // Almost the same as the first scene
    // compose of cout, cin, Sleep, while and if and else statements.
      void scene2()
      {
      	Sleep(3000);
      	cout << "*Bell rings* -- Lunch Break\n"<< endl;
      	Sleep(3000);
      	cout << "Inner Monologue" << endl;
      	cout << "[MC]: *groans* Finally, it's lunch time, time to go to the cafeteria.\n"<< endl;
      	Sleep(3000);
      	cout << "[MC]: *ugh* Eventually, after a while lining up in this line, I can now order."<< endl << endl;
      	Sleep(3000);
      	cout << "Waitress: What do you want?!" << endl << endl;
      	Sleep(3000);
      	cout << "Inner Monologue" << endl;
      	cout << "[MC]: Suddenly, from my back I felt a sudden force.\n" << endl;
      	Sleep(2000);
      	cout <<"*Thump*" <<endl <<endl;
      	Sleep(3000);
      	cout << "[Mc]: Stupid bastard bumped me.\n"<< endl;
      	Sleep(3000);
      	cout << "Responses:\n[1] Be angry ( Temporary)\n[2] Let her be\n" << endl;
      	cout << "Option: ";
      	getline(cin, None);
      	
      	while (true)
      	
      	{
      	if(None == "1")
      	{	
            Sleep(3000);
            cout << "[???]: Hey what's with you?!\n" << endl;
            Sleep(3000);
            cout << "[MC]: What do you mean? I got here first. There is a line, stupid.\n" << endl;
            Sleep(3000);
            cout << "[???]: So what? I'm hungry, mind your own business." << endl;
            Sleep(3000);
            cout << "[MC]: Do you think you're the only one hungry here?" << endl;
      		break;
      	}
      	else if(None == "2")	
      	{
      		break;
      	}
      	else if(None == "3")
      	{
      		break;
      	}
      	else if(None == "4")
      	{
      		break;
      	} 
      	else 
      	{

      	}
      	
      	}

        // Third Scene End of classes

        void scene3()
        {
            Sleep(3000);
            cout << "*Bell rings\n" << endl;
            cout << "*End of the day\n" << endl;
            Sleep(3000);
            cout << "Inner Monologue" << endl;
            cout << "[MC]: I don't wanna go home; it's not like there's anyone at home anyways.\n" << endl;
            cout << "*after a while I fell asleep\n" << endl;
            Sleep(3000);
            cout << "[???]: Hey, wake up...\n" << endl;
            Sleep(3000);
            cout << "ugdgjaksdjie, who is that?\n" << endl;
            Sleep(3000);
            cout << "[???]: Hey kōhai wake up, It's getting late.\n" << endl;
            Sleep(3000);
            cout << "[MC]: Ugh, who are you?\n" << endl;
            Sleep(3000);
            cout << "Inner Monologue\n" << endl;
            cout << "(I can't clearly see her face because I'm still in dazed)\n" << endl;
            Sleep(3000); 

        }
      }


   
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
   int None;
   Intro intro;
   Prologue prologue;
   Angel angel;
   Kim kim;
   Liah liah;
   
   intro.run();
    // Checks if the user wants to play
   if(intro.ask() == 1)
   {
      prologue.scene1();
      prologue.scene2();
   	cin >> None;
   }
    // IF the user doesn't want to play then run this
   else
   {
    cout << "------------------------------------------------" << endl;
   	cout << "      Thanks for playing I guess" << endl << endl;
   	cout << "      Enter anything to continue" << endl;
   	cout << "------------------------------------------------" << endl;
   	cin >> None;
   }
  
  return 0;
};
