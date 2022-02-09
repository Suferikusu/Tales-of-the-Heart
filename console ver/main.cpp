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
				break;
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
				break;
			}
			else if (None == "2")
			{
				Sleep(3000);
				cout << "[Cath]: Teachers give me orders left and right. They think that I'm sort of their personal assistant.\n"
					 << endl;
				Sleep(3000);
				cout << "[Cath]: They made me carry their belongings and check the test papers. They put so much pressure on me\n"
					 << endl;
				break;
			}
			else
			{
				cout << "Not an Option\n Please choose a valid option\n\nOption: " << endl;
				getline(cin, None);
			}
		}
		Sleep(3000);
		cout << "Responses\n[1] *Offer your help again*\n [2] Tell her to shut up and just do her job without complaining\n"
			 << endl;
		cout << "Option: ";
		getline(cin, None);

		while (true)
		{
			if (None == "1")
			{
				Sleep(3000);
				cout << "Inner Monologue" << endl;
				cout << "[MC]: Our conversation lasted for the whole class. I didn't understand anything in class.\n"
					 << endl;
				break;
			}
			else if (None == "2")
			{
				Sleep(3000);
				cout << "Inner Monologue" << endl;
				cout << "There was a long awkward silence after that. The silence was louder than whatever our teacher was saying.\n"
					 << endl;
				cout << "I didn't understand anything in class.\n"
					 << endl;
				break;
			}
			else
			{
				cout << "Nont an Option\n Please choose a valid option\n\nOption: " << endl;
				getline(cin, None);
			}
		}
		Sleep(3000);
		cout << "Later that day\n"
			 << endl;
		Sleep(3000);
		cout << "Inner Monologue" << endl;
		cout << "[MC]: Today was exhausting. I should probably get home by now.\n"
			 << endl;

		Sleep(3000);
		cout << "[???]: Ugh, Why do I have to clean? They should've appointed cleaners by now already.\n"
			 << endl;

		Sleep(3000);
		cout << "Inner Monologue" << endl;
		cout << "[MC]: It's Cath. I should take a look\n"
			 << endl;

		Sleep(3000);
		cout << "[MC]: Hey!\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: Hi.\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: Why are you cleaning by yourself?\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: Our Great Adviser hasn't appointed the daily cleaners yet, so I'm the maid for a while.\n"
			 << endl;

		Sleep(3000);
		cout << "Responses\n[1] Offer Help\n[2] Go home\n[3] ..." << endl;
		cout << "Option: ";
		getline(cin, None);

		while (true)
		{
			if (None == "1")
			{
				Sleep(3000);
				cout << "[Cath]: No thanks, I can handle this, it's just a small room.\n"
					 << endl;
				Sleep(3000);
				cout << "[MC]: I insist, we could finish faster if you let me help.\n"
					 << endl;
				Sleep(3000);
				cout << "[Cath]: Fine, Thank you. I appreciate it... really.\n"
					 << endl;

				Sleep(3000);
				cout << "Inner Monologue" << endl;
				cout << "After a while\n"
					 << endl;

				Sleep(3000);
				cout << "[MC]: That was exhausting. We finally cleaned the whole room.\n"
					 << endl;
				Sleep(3000);
				cout << "[Cath]: Yeah, Thank you again.\n"
					 << endl;

				Sleep(3000);
				cout << "Inner Monologue" << endl;
				cout << "We walked home together.\n"
					 << endl;
				break;
			}
			else if (None == "2")
			{
				Sleep(3000);
				cout << "Inner Monologue" << endl;
				cout << "I can't wait to get home\n"
					 << endl;
				break;
			}
			else if (None == "3")
			{
				Sleep(3000);
				cout << "[MC]: .... *continues to clean as I watch her*\n"
					 << endl;
				break;
			}
			else
			{
				cout << "Not an option\nPlease choose a valid option\n\nOption: " << endl;
				getline(cin, None);
			}
		}
	}
	void scene3()
	{
		Sleep(3000);
		cout << "Inner Monologue" << endl;
		cout << "[MC]: Damn, I'm so early today. No one is in the class yet.\n"
			 << endl;
		Sleep(3000);
		cout << "*Door Noises\n"
			 << endl;

		Sleep(3000);
		cout << "[Cath]: Good morning!\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: Oh hi, good morning.\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: You're early today.\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: Yeah. I don't want Mr. Sammy to get angry at me again.\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: Haha yeah. I hate that guy.\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: Why?\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: He looks at other studnets weirdly. I always noticed him looking at me at the faculty.\n"
			 << endl;

		Sleep(3000);
		cout << "Responses\n[1] That Blockhead.\n[2] He's probably a desperate lonely man." << endl;
		cout << "Option: ";
		getline(cin, None);

		while (true)
		{
			if (None == "1")
			{
				Sleep(3000);
				cout << "[Cath]: I know right? You know what's worse?\n"
					 << endl;
				cout << "[Cath]: He's married!\n"
					 << endl;
				Sleep(3000);
				cout << "[MC]: Why would he do that then? You should report him or something.\n"
					 << endl;
				break;
			}
			else if (None == "2")
			{
				Sleep(3000);
				cout << "[Cath]: No, he's married. I saw a wedding picture in his office.\n"
					 << endl;
				Sleep(3000);
				cout << "[MC]: Why would he do that then? You should report him or something\n"
					 << endl;
				break;
			}
			else
			{
				cout << "Not an option\nPlease choose a valid option\n\nOption: " << endl;
				getline(cin, None);
			}
		}
		Sleep(3000);
		cout << "Inner Monologue" << endl;
		cout << "We talked for a while. I listened to her all the time. She just keeps ranting about how she despises Sir Sammy.\n"
			 << endl;
		Sleep(3000);
		cout << "*bell rings*" << endl;
		cout << "I didn't realize that the room was already full.\n"
			 << endl;
		Sleep(3000);
		cout << "[Mr.Sammy]: Good morning class.\n"
			 << endl;
		Sleep(3000);
		cout << "[Class]: Goodmorning.\n"
			 << endl;
		Sleep(3000);
		cout << "...\n..." << endl;

		Sleep(3000);
		cout << "[???]: Wake up " << name << " .\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: Huh? Ugh...\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: Hey " << name << ". Wake up, the clss is over. You slept the whole time.\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: Oh, my bad. Did he notice?\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: He didn't, you should stop staying up all night, it's not health.\n"
			 << endl;
		Sleep(3000);
		cout << "Responses\n[1] But when am I gonna play Magic Legends?\n[2] Yeah, I'll try.\n[3] No way." << endl;
		cout << "Option: ";
		getline(cin, None);

		while (true)
		{
			if (None == "1")
			{
				Sleep(3000);
				cout << "[Cath]: You still play that game? are you a child or something?\n"
					 << endl;
				Sleep(3000);
				cout << "[MC]: You can't tell me what to do, you're not my mom. That game is awesome.\n"
					 << endl;
				Sleep(3000);
				cout << "[Cath]: Fine. Go die then.\n"
					 << endl;
				Sleep(3000);
				cout << "[MC]: That's a bit harsh.\n"
					 << endl;
				Sleep(3000);
				cout << "[Cath]: Well, I don't want you dying. I'll have no one to talk to.\n"
					 << endl;
				break;
			}
			else if (None == "2")
			{
				Sleep(3000);
				cout << "[Cath]: Yes. You should really start caring for yourself.\n"
					 << endl;
				Sleep(3000);
				cout << "[MC]: Why?\n"
					 << endl;
				Sleep(3000);
				cout << "[Cath]: Well, I don't want you dying. I'll have no one to talk to.\n"
					 << endl;
				break;
			}
			else if (None == "3")
			{
				Sleep(3000);
				cout << "[Cath]: Fine. Go die then.\n"
					 << endl;
				Sleep(3000);
				cout << "[MC]: That's a bit harsh.\n"
					 << endl;
				Sleep(3000);
				cout << "[Cath]: Well, I don't want you dying. I'll have no one to talk to.\n"
					 << endl;
				break;
			}
			else
			{
				cout << "Not a response\nPlease choose a valid option\n\nOption: " << endl;
				getline(cin, None);
			}
		}
		Sleep(3000);
		cout << "[MC]: Why don't you have befriend our other classmates?\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: Ehhh. I don't really want to.\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: Are you some sort of Introbear?\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: It's called Introvert. How stupid are you really?\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: Hahahaha. How could you call me stupid. I'm probably smarter than you.\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: No way you are.\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: Let's see. My GPA in highschool is 89.\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: Pfft. Is that supposed to scare me? Mine's 98.\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: What? How can you get it that high? That's impossible. I call cap.\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: No, it's real. I'll show you my card next time.\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: Until then I qwon't believe that you're smarter than me.\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: You literally slept in class. How could you learn something?\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: Shut up.\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: Haha stupid.\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: Lunch Break is almost over, we should eat.\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: I already ate when you were sleeping.\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: What? You didn't even wake me up earlier.\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: I tried to, you're so deep in sleep I can't wake you up.\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: Ugh.\n"
			 << endl;

		Sleep(3000);
		cout << "Later that day\n"
			 << endl;
		Sleep(3000);
		cout << "Inner Monologue" << endl;
		cout << "Finally school is almost over. I should probably invite Cath to walk home together.\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: Hey!\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: Hey.\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: Wanna go home together after this class?\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: I can't Ms. Joan asked me to help her at the school clinic. Apparently the new first aid kit packs arrived and asked me for help.\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: Want me to help?\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: No thanks, Ms. Joan specifically told me to come alone. She doesnt't want many people to be at her clinic.\n"
			 << endl;
		Sleep(3000);
		cout << "Responses\n[1] Go home\n[2] Wait for her" << endl;
		cout << "Option: ";
		getline(cin, None);

		while (true)
		{
			if (None == "1")
			{
				Sleep(3000);
				cout << "[MC]: Fine.\n"
					 << endl;
				Sleep(3000);
				cout << "*Bell Rung*\n"
					 << endl;
				Sleep(3000);
				cout << "Inner Monologue" << endl;
				cout << "I head home for the day\n"
					 << endl;
				Sleep(3000);
				cout << "*Day End*\n"
					 << endl;
				break;
			}
			else if (None == "2")
			{
				Sleep(3000);
				cout << "[MC]: Fine, but I'll wait for you.\n"
					 << endl;
				Sleep(3000);
				cout << "[Cath]: Are you sure? it's probably gonna take hours.\n"
					 << endl;
				Sleep(3000);
				cout << "[MC]: Yeah.\n"
					 << endl;
				Sleep(3000);
				cout << "[Cath]: Okay, if you insist.\n"
					 << endl;

				Sleep(3000);
				cout << "Inner Monologue." << endl;
				cout << "I waited so long I fell asleep.\n"
					 << endl;
				Sleep(3000);
				cout << "[???]: Hey.\n"
					 << endl;
				Sleep(3000);
				cout << "[MC]: Ugh. Cath? is that you?\n"
					 << endl;
				Sleep(3000);
				cout << "[???]: Wake up.\n"
					 << endl;
				Sleep(3000);
				cout << "[Ms.Joan]: I'm Ms. Joan, are you waiting for Cath?\n"
					 << endl;
				Sleep(3000);
				cout << "[MC]: Yeah, where is she?\n"
					 << endl;
				Sleep(3000);
				cout << "[Ms.Joan]: In the clinic we are almost finished.\n"
					 << endl;
				cout << "[Ms.Joan]: You should come with me.\n"
					 << endl;
				Sleep(3000);
				cout << "Inner Monologue" << endl;
				cout << "I followed her.\n"
					 << endl;
				cout << "We talked a bit while we were walking.\n"
					 << endl;
				Sleep(3000);
				cout << "[Ms.Joan]: Why are you waiting for her so late? Are you her boyfriend?\n"
					 << endl;
				Sleep(3000);
				cout << "[MC]: HEH? NO MA'AM, I'M JUST HER FRIEND. WE LIVE CLOSE TO EACH OTHER SO WE ALWAYS GO HOME TOGETHER.\n"
					 << endl;
				Sleep(3000);
				cout << "[Ms.Joan]: *Laughs* Do you like her?\n"
					 << endl;
				Sleep(3000);
				cout << "[MC]: Ehhhh? I don't know? Maybe?... Stop asking me questions ma'am. Are we there yet?\n"
					 << endl;
				Sleep(3000);
				cout << "[Ms.Joan]: Yeah it's this room.\n"
					 << endl;

				Sleep(3000);
				cout << "*Door SFX*\n"
					 << endl;

				Sleep(3000);
				cout << "[Ms.Joan]: Cath? We're back, I brought your bo-... your friend.\n"
					 << endl;
				Sleep(3000);
				cout << "[MC]: Hey.\n"
					 << endl;
				Sleep(3000);
				cout << "[Cath]: Hi!\n"
					 << endl;
				Sleep(3000);
				cout << "[Ms.Joan]: So.. " << name << " when are you gonna answer my question?\n"
					 << endl;
				Sleep(3000);
				cout << "[Cath]: What question?\n"
					 << endl;
				Sleep(3000);
				cout << "[Ms.Joan]: I'm asking " << name << " if he likes-\n"
					 << endl;
				Sleep(3000);
				cout << "[MC]: HEY! look at the time, it's already late. I'll help you so we can all go home early\n"
					 << endl;
				Sleep(3000);
				cout << "[Ms.Joan]: *laughs softly\n"
					 << endl;
				Sleep(3000);
				cout << "[Cath]: What was the question?\n"
					 << endl;
				Sleep(3000);
				cout << "[MC]: It doesn't matter.\n"
					 << endl;

				Sleep(3000);
				cout << "Inner Monologue" << endl;
				cout << "We finished sorting and arranging the first aid kits. Ms.Joan will distribute them tomorrow.\n"
					 << endl;
				cout << "Cath and I head home safely.\n"
					 << endl;
				Sleep(3000);
				cout << "*Day End*\n"
					 << endl;
				break;
			}
			else
			{
				cout << "Not a response\nPlease choose a valid option\n\nOption: " << endl;
				getline(cin, None);
			}
		}
	}
	void scene3()
	{
		Sleep(3000);
		cout << "Many days later\n"
			 << endl;
		Sleep(3000);
		cout << "Day 22\n"
			 << endl;
		Sleep(3000);
		cout << "Inner Monologue" << endl;
		cout << "Two weeks have passed, Cath and I became close friends.\n"
			 << endl;
		// here's the part idk

		Sleep(3000);
		cout << "*THUMP*\n"
			 << endl;
		Sleep(3000);
		cout << "Inner Monologue" << endl;
		cout << "A chalk suddenly hit me.\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: Youch!\n"
			 << endl;
		Sleep(3000);
		cout << "[Mr.Sammy]: Hey! stop day dreaming in my class. Now listen, I'll repeat it once.\n"
			 << endl;
		cout << "[Mr.Sammy]: For this week I want you to do research about any of the famous painters and their art.\n"
			 << endl;
		cout << "[Mr.Sammy]: Then you'll present it in front of the class, you can partner amongst yourselves.\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: Hey " << name << "! wanna be my partner?\n"
			 << endl;
		Sleep(3000);
		cout << "Responses\n[1] I can't\n[2] Of course!\n"
			 << endl;
		cout << "Option: ";
		getline(cin, None);

		while (true)
		{
			if (None == "1")
			{
				Sleep(3000);
				cout << "[MC]: Sorry, I can't.\n"
					 << endl;
				Sleep(3000);
				cout << "[Cath]: Oh. That's ok.\n"
					 << endl;
				Sleep(3000);
				cout << "Inner Monologue" << endl;
				cout << "Cath got another partner, they became close friends. A week has passed and I heard they have become lovers.\n"
					 << endl;
				cout << "I should've partnered with her\n"
					 << endl;
				break;
				// not yet done; you have to prompt the user to game over or play again or quit
			}
			else if (None == "2")
			{
				Sleep(3000);
				cout << "[MC]: Yeah. Of course!\n"
					 << endl;
				Sleep(3000);
				cout << "[Cath]: Really?? Thank you!\n"
					 << endl;
				cout << "[Cath]: I don't know what I'll do if you did not agree. I really don't know anyone in our class.\n"
					 << endl;
				Sleep(3000);
				cout << "[MC]: So.. what's the plan?\n"
					 << endl;
				Sleep(3000);
				cout << "[Cath]: We need to choose an artist and their art first. Who do you want?\n"
					 << endl;
				Sleep(3000);
				cout << "[MC]: What about the Great Wave of Kanagawa?\n"
					 << endl;
				Sleep(3000);
				cout << "[Cath]: That's a good one! where do we do this?\n"
					 << endl;
				Sleep(3000);
				cout << "[MC]: In the library?\n"
					 << endl;
				Sleep(3000);
				cout << "[Cath]: We can't, we need to be somewhere private so we can focus.\n"
					 << endl;
				Sleep(3000);
				cout << "[MC]: At your house?\n"
					 << endl;
				Sleep(3000);
				cout << "[Cath]: We can't either, my Dad doesn't like visitors.\n"
					 << endl;
				Sleep(3000);
				cout << "Inner Monologue" << endl;
				cout << "Her Dad is probably strict.\n"
					 << endl;
				Sleep(3000);
				cout << "[MC]: Yeah, I think my house is ok. I'll ask my mom.\n"
					 << endl;
				Sleep(3000);
				cout << "[Cath]: Great, we only have a week. How about tomorrow?\n"
					 << endl;
				Sleep(3000);
				cout << "[MC]: Okay.\n"
					 << endl;
				break;
			}
			else
			{
				cout << "Not a response\nPlease choose a valid option\n\nOption: " << endl;
				getline(cin, None);
			}
		}

		Sleep(3000);
		cout << "*Later at Home*\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: Mom *calls mom*\n"
			 << endl;
		Sleep(3000);
		cout << "[Abbygail]:  Mom's at work.\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: Ok sis.\n"
			 << endl;
		Sleep(3000);
		cout << "[Abby]: Why do you need mom anyways?\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: My friend is coming tomorrow, we'll do some projects. I'm asking if its's okay.\n"
			 << endl;
		Sleep(3000);
		cout << "[Abby]: Is it a girl?\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: Does it matter?\n"
			 << endl;
		Sleep(3000);
		cout << "[Abby]: Yes.\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: No, it doesn't.\n"
			 << endl;
		Sleep(3000);
		cout << "[Abby]:  Yeah it does.\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: Ugh shut up dork.\n"
			 << endl;
		Sleep(3000);
		cout << "[Abby]: Hey you can't say that to your beautiful sister.\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: I don't care.\n"
			 << endl;
		Sleep(3000);
		cout << "*gasp in shock*\n"
			 << endl;

		Sleep(3000);
		cout << "Inner Monologue" << endl;
		cout << "I waited for my mom to come home.\n"
			 << endl;
		Sleep(3000);
		cout << "She said it's okay.\n"
			 << endl;
		Sleep(3000);
		cout << "Day End.\n"
			 << endl;
	}
	void scene4()
	{
		Sleep(3000);
		cout << "Day 23 Part 1\n"
			 << endl;
		cout << "*At class*\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: Hey! Are we allowed to do it later?\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: Yeah.\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: Great! I can't wait.\n"
			 << endl;
		Sleep(3000);
		cout << "[???]: Hey Ms. President.\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: Hey?\n"
			 << endl;
		Sleep(3000);
		cout << "[???]: Hi. I'm Von Fischer. Nice to meet you. I've seen you from where I sit these past few weeks and I should tell you that you are awesome.\n"
			 << endl;
		cout << "[Von Fischer]: Can we be friends?\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: Mhm.\n"
			 << endl;
		Sleep(3000);
		cout << "[Von Fischer]: Great, Oh btw I'm here to pass these papers. Mr.Sammy told us to give you the papers.\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: Okay.\n"
			 << endl;
		Sleep(3000);
		cout << "[Von Fischer]: Aight! See you later alligator. Haha.\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: Yeah.\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: Well would you look at that? Someone is wanting to be friends with you.\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: Yeah, I guess.\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: What? You don't like friends now?\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: I do, I just don't know how to interact with people.\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: How do you interact with me? Am I not people?\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: Hahaha. You're different, I guess.\n"
			 << endl;
		Sleep(3000);
		cout << "[MC]: What do you mean by different?\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]:  It's like you'r-...\n"
			 << endl;
		Sleep(3000);
		cout << "[Ms.Joan]: Hey Cath. May I ask you something?\n"
			 << endl;
		Sleep(3000);
		cout << "[Ms.Joan]: I kinda need help. I'm so sorry if I'm interrupting something.\n"
			 << endl;
		Sleep(3000);
		cout << "[Cath]: Don't worry ma'am. I'll help you.\n"
			 << endl;
		Sleep(3000);
		cout << "[Ms.Joan]: Good. I'm sorry " << name << ", I just need to borrow your friend for a while.\n"
			 << endl;
		Sleep(3000);
		cout << "Responses\n[1] Offer your help\n[2] No worries ma'am\n[3] Get angry" << endl;
		cout << "Option: ";
		getline(cin, None);

		while (true)
		{
			if (None == "1")
			{
				Sleep(3000);
				cout << "[Ms.Joan]: Oh you don't need to " << name << ". Cath and I can handdle this. Just finish whatever it is you're currently doing.\n"
					 << endl;
				Sleep(3000);
				cout << "[MC]: Ok ma'am. Bye Cath.\n"
					 << endl;
				Sleep(3000);
				cout << "Inner Monologue" << endl;
				cout << "They left.\n"
					 << endl;
				break;
			}
			else if (None == "2")
			{
				Sleep(3000);
				cout << "[MC]: No worries ma'am. We were just talking.\n"
					 << endl;
				Sleep(3000);
				cout << "[Ms.Joan]: What are you two lovebirds talking about?\n"
					 << endl;
				Sleep(3000);
				cout << "[MC and Cath]: Ehhhh?\n"
					 << endl;
				Sleep(3000);
				cout << "[Ms.Joan]: *chuckles*\n"
					 << endl;
				Sleep(3000);
				cout << "[Inner Monologue]" << endl;
				cout << "They left.\n"
					 << endl;
				break;
			}
			else if (None == "3")
			{
				Sleep(3000);
				cout << "[MC]: Why can't you ask other students instead?!?\n"
					 << endl;
				Sleep(3000);
				cout << "[Ms.Joan]: What?\n"
					 << endl;
				Sleep(3000);
				cout << "[MC]: I said why can't you ask other students. Why do you always use Cath for these tasks? Cant you see we were busy?\n"
					 << endl;
				Sleep(3000);
				cout << "[Cath]: No " << name << " it's okay. She asked me properly and I accepte it.\n"
					 << endl;
				break;
				Sleep(3000);
				cout << "Responses\n[1] Continue to get angry\n[2] Calm down" << endl;
				cout << "Option: ";
				getline(cin, None);

				while (true)
				{
					if (None == "1")
					{
						Sleep(3000);
						cout << "[MC]: They can't continue mistreating you! This is wrong.\n"
							 << endl;
						Sleep(3000);
						cout << "[Ms.Joan]: *Cries*\n"
							 << endl;
						Sleep(3000);
						cout << "[Cath]: Would you please just stop.\n"
							 << endl;
						Sleep(3000);
						cout << "[Von Fischer]: Hey what's happening?\n"
							 << endl;
						cout << "[Von Fischer]:  Who made Miss Joan cry?\n"
							 << endl;
						cout << "[Von Fischer]: I can't accept this.\n"
							 << endl;
						Sleep(3000);
						cout << "Inner Monologue" << endl;
						cout << "This got escalated quickly. I shouldn't have done that.\n"
							 << endl;
						cout << "Days later Cath still won't talk to me, and my classmates keep giving me those weird looks. I decided to drop out.\n"
							 << endl;
						break; // still don't know how to prompt user to quit, restart etc.
					}
					else if (None == "2")
					{
						Sleep(3000);
						cout << "[MC]: I'm so sorry Miss Joan if I got angry.\n"
							 << endl;
						Sleep(3000);
						cout << "[Ms.Joan]: *smiles* No, it's okay. I totally understand where you're coming from. You're just protecting your friend here.\n"
							 << endl;
						Sleep(3000);
						cout << "[Cath]: Thanks " << name << ".\n"
							 << endl;
						Sleep(3000);
						cout << "[Ms.Joan]: Don't worry, I won't let anything bad happen to your friend.\n"
							 << endl;
						Sleep(3000);
						cout << "Inner Monologue" << endl;
						cout << "They left. I'm glad Ms.Joan treats her students right.\n"
							 << endl;
						break;
					}
				}
			}
			else
			{
				cout << "Not a response\nPlease choose a valid option\n\nOption: " << endl;
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
