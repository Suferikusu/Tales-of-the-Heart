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
   
   public:
	   	 // This variable is to store the chosen girl in the prologue
		string girl;
	    // String None is the variable that holds the players chosen option
		string None;
		// String name of the mc
		string name;
   
      // First Scene in the Prologue
		int scene1()
		{
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
			cout << "*THUMP*" << endl;
			cout << endl;
			Sleep(3000);
			cout << "[Angel]: Hey! Why did you bump into me?" << endl;
			Sleep(3000);
			cout << endl;
			cout << "Responses:\n[1] Sorry *helps her* \n[2] I'm so sorry *helps and escort her*\n[3] … (...)\n[4] *Start Panicking" << endl;
			cout << "Option: ";

			// get line is the same as cin and scanf the difference is that getline reads the whole line
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
					cout << "*While walking her to the classroom*" << endl
						 << endl;
					Sleep(3000);
					cout << "[Angel]: Are you new to this school?" << endl
						 << endl;
					Sleep(3000);
					cout << "[MC]: Yea kind of" << endl;

					cout << endl;
					Sleep(3000);
					cout << "*I Escorted her to her class*" << endl
						 << endl;
					Sleep(3000);
					cout << "[Angel]: Thanks for escorting me\n\n*In class*\n"
						 << endl;
					Sleep(3000);
					cout << "Inner monologue" << endl;
					cout << "[MC]: Damn, that woman I just bumped looked gorgeous.\n"
						 << endl;
					Sleep(3000);
					break;
				}
				else if (None == "3")
				{
					cout << "3";
					break;
				}
				else if (None == "4")
				{
					cout << "4";
					break;
				}
				else
				{
					cout << "Not an Option\nPlease choose a valid option\n\nOption: " << endl;
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
			cout << "\n\n";
			cout << "*Bell rings* -- Lunch Break\n"
				 << endl;
			Sleep(3000);
			cout << "Inner Monologue" << endl;
			cout << "[MC]: *groans* Finally, it's lunch time, time to go to the cafeteria.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: *ugh* Eventually, after a while lining up in this line, I can now order." << endl
				 << endl;
			Sleep(3000);
			cout << "Waitress: What do you want?!" << endl
				 << endl;
			Sleep(3000);
			cout << "Inner Monologue" << endl;
			cout << "[MC]: Suddenly, from my back I felt a sudden force.\n"
				 << endl;
			Sleep(2000);
			cout << "*Thump*" << endl
				 << endl;
			Sleep(3000);
			cout << "[Mc]: Stupid bastard bumped me.\n"
				 << endl;
			Sleep(3000);
			cout << "Responses:\n[1] Be angry ( Temporary)\n[2] Let her be\n"
				 << endl;
			cout << "Option: ";
			getline(cin, None);

			while (true)

			{
				if (None == "1")
				{
					Sleep(3000);
					cout << "[???]: Hey what's with you?!\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: What do you mean? I got here first. There is a line, stupid.\n"
						 << endl;
					Sleep(3000);
					cout << "[???]: So what? I'm hungry, mind your own business.\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: Do you think you're the only one hungry here?\n"
						 << endl;
					break;
				}
				else if (None == "2")
				{
					break;
				}
				else if (None == "3")
				{
					break;
				}
				else if (None == "4")
				{
					break;
				}
				else
				{
					cout << "Not an Option\nPlease choose a valid option\n\nOption: " << endl;
					getline(cin, None);
				}
			}
      }

        // Third Scene End of classes

        void scene3()
        {
            Sleep(3000);
            cout << "\n\n";
            cout << "*Bell rings" << endl;
            cout << "*End of the day\n" << endl;
            Sleep(3000);
            cout << "Inner Monologue" << endl;
            cout << "[MC]: I don't wanna go home; it's not like there's anyone at home anyways.\n" << endl;
            cout << "*after a while I fell asleep*\n" << endl;
            Sleep(3000);
            cout << "[???]: Hey, wake up...\n" << endl;
            Sleep(3000);
            cout << "ugdgjaksdjie, who is that?\n" << endl;
            Sleep(3000);
            cout << "[???]: Hey kōhai wake up, It's getting late.\n" << endl;
            Sleep(3000);
            cout << "[MC]: Ugh, who are you?\n" << endl;
            Sleep(3000);
            cout << "Inner Monologue" << endl;
            cout << "*I can't clearly see her face because I'm still dazed.*\n" << endl;
            Sleep(3000);
            cout << "Hi I'm Pascual Cath, I'm the school president. Why are you still in school?\n" << endl;
            Sleep(3000);
            cout << "I didn't notice the time and fell asleep.\n" << endl;
            Sleep(3000);
            cout << "You need to go home; the school is getting ready to close up. What's you name?\n" << endl;
            cout << "Name: ";
            getline (cin, name);
            cout << "\n";
            cout << "I'm " << name << ".\n";
            Sleep(3000);
            cout << "[Cath]: Ok " << name << " you need to go home now.\n" << endl;
            Sleep(3000);
            cout << "*I noticed that she's carrying something big*\n" << endl;
            Sleep(3000);
            cout << "Responses:\n[1] Go back to sleep.\n[2] Ask her to sleep beside you.\n [3] Go home by yourself and mind your own business.\n [4] Help her carry that something big\n" << endl;
            cout << "Option: ";
            getline(cin, None);

            while (true)
            {
                if (None == "1")
                {
                    break;
                }
                else if (None == "2")
                {
                    break;
                }
                else if (None == "3")
                {
                	break;
                }
                else if (None == "4")
                {
                    Sleep(3000);
                    cout << "[MC]: Hey, do you need help with that thing?\n" << endl;
                    Sleep(3000);
                    cout << "Yeah... *blush*\n" << endl;
                    Sleep(3000);
                    cout << "Inner Monologue" << endl;
                    cout << "I carried the big thing that she was carrying and accompanied her to the bus stop.\n" << endl;
                    Sleep(3000);
                    cout << "Thanks for helping me, will you also take the bus?\n" << endl;
                    Sleep(3000);
                    cout << "[MC]: Yep...\n" << endl;
                    Sleep(3000);
                    cout << "Inner Monologue" << endl;
					cout << "I can't even make eye contact with her, I'm nervous.\n"
						 << endl;
					Sleep(2000);
					cout << "The bus arrives and I sit behind her.\n" << endl;
                    Sleep(2000);
                    cout << "After 5 minutes the bus stopped and she stood up\n" << endl;
                    Sleep(3000);
                    cout << "Thanks again " << name << ".\n" << endl;
                    Sleep(3000);
                    cout << "*hums* uh-.. Y-yeah no problem... *blush*\n" << endl;
                    Sleep(3000);
                    cout << "Inner Monologue" << endl;
					cout << "She went out of the bus stop, but I was too shy to look at ehr.\n"
						 << endl;
					Sleep(3000);
					cout << "End of Prologue\n" << endl;
                    break;
                }
                else
                {

	  			cout << "Not an Option\nPlease choose a valid option\n\nOption: " << endl;
	  			getline(cin, None);
                };
            }

    
        
      };
	  void pick()
	  {
		  cout << "\n\n";
		  Sleep(3000);
		  cout << "I've met 3 girls on my first day of school." << endl
			   << endl;
		  Sleep(3000);
		  cout << "If I would ever choose the right girl for me from those 3 girls who should it be?" << endl
			   << endl;
		  Sleep(3000);
		  cout << "[1] Angel \n[2] Kym \n[3] Liah\n\noption: ";
		  getline(cin, girl);
		  cout << "\n\n";
		  while (true)
		  {
			  if (girl == "1")
			  {
				  Sleep(3000);
				  cout << "I would probably like Angel." << endl;
				  break;
			  }
			  else if (girl == "2")
			  {
				  Sleep(3000);
				  cout << "I would probably like Kym." << endl;
				  break;
			  }
			  else if (girl == "3")
			  {
				  Sleep(3000);
				  cout << "I would probably like Liah." << endl;
				  break;
			  }

			  else
			  {
				  Sleep(3000);
				  cout << "Not an Option\nPlease choose a valid option\n\nOption: " << endl;
				  getline(cin, None);
			  };
		  }
	  };
};

// Cath route
class Cath
{
public:
	string name;
	string None;

	Cath(string name)
	{
		name = name;
	};

	void scene1()
	{
		cout << name;

		Sleep(3000);
		cout << "Day 2\n"
			 << endl;
		cout << "Inner Monologue" << endl;
		Sleep(3000);
		cout << "[MC]: *sigh* I'm late again\n"
			 << endl;
		Sleep(3000);
		cout << "*random background class noise*\n"
			 << endl;
		Sleep(3000);
		cout << "[Teacher]: Mr. " << name << " you're late again. You can't keep getting late. It's literally your 1st week and you're already late twice.\n"
			 << endl;
		cout << "[Teacher]: Please sit down so I can start my class.\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: Sorry for being late. This won't happen again.\n"
			 << endl;
		Sleep(3000);
		cout << "Inner Monologue" << endl;
		Sleep(3000);
		cout << "Someone is sitting on the chair I used yesterday. Where do I sit now...\n"
			 << endl;
		Sleep(3000);
		cout << "[Liah]: What are you lookin' at?\n"
			 << endl;
		Sleep(3000);
		cout << "[Teacher]: Sit down already there is a vacant seat at the back.\n"
			 << endl;
		Sleep(3000);
		cout << "Inner Monologue" << endl;
		Sleep(3000);
		cout << "I sat down and looked on my left and I freakin saw my future through the eyes of the person sitting beside me.\n"
			 << endl;
		Sleep(3000);
		cout << "It's Cath again. I didn't realize yesterday that she's this beautiful since it was dark already.\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: Hello again!\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: Uh-hey! Cath, right?\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: Yes, and you're " << name << " right?\n"
			 << endl;
		Sleep(3000);
		cout << "*Offers to shake hand*\n"
			 << endl;
		Sleep(3000);
		cout << "Responses:\n[1] Shake her hand.\n Inner Monologue: Her hand is so soft, I feel like I don't want to let go.\n[2] Don't shake her hand.\n *Cath felt awkward*\n"
			 << endl;
		cout << "Option: ";
		getline(cin, None);

		while (true)
		{
			// Not final - andrei on docs
			if (None == "1")
			{
				Sleep(3000);
				cout << "[Cath]: Thanks for helping me again.\n"
					 << endl;
				Sleep(3000);
				cout << "[MC]: No problem.\n"
					 << endl;
				break;
			}
			else if (None == "2")
			{
				Sleep(3000);
				cout << "I'm glad you're safe.\n"
					 << endl;
				cout << "You should stop sleeping in school\n"
					 << endl;
				Sleep(3000);
				cout << "Thanks for your concern. Good thing this school has a great president.\n"
					 << endl;
				Sleep(3000);
				cout << "Haha. Thanks.\n"
					 << endl;
			}
			else
			{
				cout << "Not an Option\n Please choose a valid option\n\nOption: " << endl;
				getline(cin, None);
			}
		}
	}
	void scene2()
	{
		Sleep(3000);
		cout << "[MC]: How did you even become a president on the first day of school?\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: It's not like I wanted to be a president.\n"
			 << endl;
		Sleep(3000);
		cout << "Responses:\n[1] Why did you run as school president if you don't want it in the first place?\n[2] Why do you not want to be president?\n"
			 << endl;
		cout << "Option: ";

		getline(cin, None);

		while (true)
		{
			if (None == "1")
			{
				Sleep(3000);
				cout << "[Cath]: I didn't, the school board and the students just elected me because they saw my past school records and they're amazed.\n"
					 << endl;
				Sleep(3000);
				cout << "[Cath]: My sister was the last school president. She graduated so they replaced her with me.\n"
					 << endl;
				Sleep(3000);
				cout << "[Cath]: I don't even want it. Being the school president makes the teachers think that I'm their personal assistant\n"
					 << endl;
			}
			else if (None == "2")
			{
				Sleep(3000);
				cout << "[Cath]: Teachers give me orders left and right. They think that I'm sort of their personal assistant.\n"
					 << endl;
				Sleep(3000);
				cout << "[Cath]: They made me carry their belongings and check the test papers. They put so much pressure on me\n"
					 << endl;
			}
			else
			{
				cout << "Not an Option\n Please choose a valid option\n\nOption: " << endl;
				getline(cin, None);
			}
		}
	}
};

// Angel Route
class Angel
{
public:
	string name;
	string None;
	Angel(string name)
	{
		name = name;
	};

	void scene1()
	{
		cout << name;
		Sleep(3000);
		cout << "*Aurora*" << endl;
		cout << "I was walking up the stairs when I saw this slow girl climbing up the stairs for some reason.\n"
			 << endl;

		Sleep(3000);
		cout << "*Lunch Break*\n"
			 << endl;

		Sleep(3000);
		cout << "I was going to the cafeteria then I saw this sluggish girl drop her books on the way up the stairs.\n"
			 << endl;
		Sleep(3000);
		cout << "Responses:\n[1] Help her *Looks at the girl* Are you okay?\n[2] Ignore her *walks like nothing happened*\n\nOption: " << endl;
		getline(cin, None);

		while (true)
		{
			if (None == "1")
			{
				Sleep(3000);
				cout << "[Angel]: Thank you, uhm *surprised* ..oh it's you kohai! What's your name again?\n"
					 << endl;
				Sleep(3000);
				cout << "[MC]: Oh didn't notice it's you again. I'm " << name << " from 1-A." << endl;
				Sleep(3000);
				cout << "[Angel]: Thank you again for helping me the other day. I forgot to introduce myself.\n"
					 << endl;
				cout << "[Angel]: I'm Angel Walton from 2-A\n"
					 << endl;
				break;
			}
			else if (None == "2")
			{
				break;
			}
			else
			{
				cout << "Not an Option\n Please choose a valid option\n\nOption: " << endl;
				getline(cin, None);
			}
		}
	}
};

class Liah
{
public:
	string name;
	Liah(string name)
	{
		name = name;
	};

	void scene1()
	{
		cout << name;
	}
};

int main()
{
   int None;
   string name = "";
   Intro intro;
   Prologue prologue;
   Angel angel(name);
   Cath cath(name);
   Liah liah(name);
   
   intro.run();
    // Checks if the user wants to play
   if(intro.ask() == 1)
   {
     // prologue.scene1();
     // prologue.scene2();
      prologue.scene3();
      prologue.pick();

      name = prologue.name;
      angel.scene1();





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
 }
