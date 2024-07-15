#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<ctime>
#include<ctype.h>
#include<fstream>

using namespace std;

    // FUNCTION TO lOG USER INTERACTIONS TO A FILE.
void logInteraction(const char *interaction) 
{
    FILE *logFile = fopen("user_log.txt", "a");  // Open file in append mode
    if (logFile != NULL) {
        time_t now = time(0);
        char *dt = ctime(&now);
        fprintf(logFile, "[%s] %s\n", dt, interaction);
        fclose(logFile);
    } else {
        printf("Unable to open the log file.\n");
    }
}

    //FUNCTION TO WISH THE USER ACCORDING TO TIME.
void wishme()
{
	//CURRENT DATE AND TIME BASED ON YOUR SYSTEM TIMEZONE.
	time_t now=time(0);
	tm *time=localtime(&now);            //USES STRUCTURE tm TO GIVE LOCAL TIME TO time VARIABLE.
	if(time-> tm_hour < 12)
	{
		printf("\n\t\t\t\t\tGood Morning.");
		
		//BY THESE LINES WE CAN CONTACT THE ESPEAK SOFTWARE TO CHAT WITH TALKBOT.
		//HERE THE PHRASE IS CONVERTED TO THROUGH ESPEAK.THEN EXECUTED USING THE SYSTEM.

		string phrase = "Good Morning.";                      
		string command = "espeak \"" + phrase + "\"";
		const char *charCommand = command.c_str();
		system(charCommand);
	}
	
	else if(time-> tm_hour >= 12 && time->tm_hour <= 16)
	{
		printf("\n\t\t\t\t\tGood Afternoon.");
		
		string phrase = "Good Afternoon.";
		string command = "espeak \"" + phrase + "\"";
		const char *charCommand = command.c_str();
		system(charCommand);
	}
	
	else if(time-> tm_hour > 16 && time->tm_hour <= 24)
	{
		printf("\n\t\t\t\t\tGood Evening.");
		
		string phrase = "Good Evening.";
		string command = "espeak \"" + phrase + "\"";
		const char *charCommand = command.c_str();
		system(charCommand);
	}
}

void datetime()
{
	time_t now=time(0);
	char *dt= ctime(&now);
	printf("\t\t\t\t\tThe date and time is %s ",dt);
}

int main(void)
{
	system("cls");
	
	printf("\n\t\t\t=============================================WELCOME==============================================\n");
	printf("\t\t\t=============================================I'm Virtual Assistant==================================\n");
	printf("\t\t\t=============================================My Name is TALKBOT=====================================\n");
	printf("\t\t\t=============================================I am here to help you==================================\n");
	printf("\t\t\t====================Please Write Everything In Lower Case.==========================================\n");

	string phrase = "Welcome.  I'm a Virtual Assistant.  My Name is Talkbot.  I am here to help you. Please Write Everything In Lower Case.";
	string command = "espeak \"" + phrase + "\"";
	const char *charCommand = command.c_str();
	system(charCommand);
	
	char password[20]; //TO TAKE PASSWORD FROM THE USER.
	char ch[100]; //TO TAKE COMMAND FROM THE USER.
	float a,b,c;
	int mnum;
	char text[100];
	do
	{
		printf("\n\t\t\t\t\t====================\n");
		printf("\t\t\t\t\tEnter your password\n");
		
		phrase = "Enter your password.";
		command = "espeak \"" + phrase + "\"";
		charCommand = command.c_str();
		system(charCommand);
		
		printf("\t\t\t\t\t====================\n\t\t\t\t\t\t\t\t\t\t");
		
		gets(password);
		
		//BY THE FOLLOWING WE CAN PROCESS AND OPEN THE APPLICATIONS LIKE NOTEPAD, GOOGLE etc.
		STARTUPINFO startinfo={0};
		PROCESS_INFORMATION processinfo={0};
		
		//IF-ELSE STATEMENTS TO CHECK WHEATER THE PASSWORD IS CORRECT OR NOT
		if(strcmp(password, "sadia123")==0)
		{
			printf("\n\t\t=======================================================================================================\n");
			printf("\t\t\t\t\t\t\t\t\t");
			wishme();
			do
			{
				printf("\n\t\t=======================================================================================================\n\n");
				sleep(3);
				printf("\t\t\t\tTASK PERFORMANCE:");
				printf("\n\t\t\t\t\t1.Mathematical Operations.");
				printf("\n\t\t\t\t\t2.Talking with Talkbot.Can Ask Date and Time.");
				printf("\n\t\t\t\t\t3.Open Applications (Notepad,google,youtube,instagram).");
				printf("\n\t\t\t\t\t4.Search something on Google.");
				printf("\n\n\t\t\tWHAT DO YOU WANT TO DO.\n\t\t\tENTER MENU NUMBER: ");
				
				phrase = "WHAT DO YOU WANT TO DO? ENTER MENU NUMBER:";
				command = "espeak \"" + phrase + "\"";
				charCommand = command.c_str();
				system(charCommand);
				
				scanf("%d",&mnum);
				switch(mnum)
				{
					case 1:
						printf("\n\t\t\t\tWHICH OPERATION YOU WANT TO DO.");
						
						phrase = "WHICH OPERATION DO YOU WANT TO DO?";
						command = "espeak \"" + phrase + "\"";
						charCommand = command.c_str();
						system(charCommand);
						
						printf("\n\t\t\t\t\tENTER OPERATION: ");
			   			scanf("%s",&ch);
			   			logInteraction(ch);
			   			
						if(strcmp(ch, "sum")==0|| strcmp(ch, "add two numbers")==0|| strcmp(ch, "add")==0 || strcmp(ch,"addition")==0)
			            {
			   	          printf("\n\t\t\t\t\tEnter First Number: ");
			   	          
						  phrase = "Enter First Number:";
		                  command = "espeak \"" + phrase + "\"";
		                  charCommand = command.c_str();
		                  system(charCommand);
					      scanf("%f",&a);
			   	 
				          printf("\n\t\t\t\t\tEnter Second Number: ");
			   	          
						  phrase = "Enter Second Number";
		                  command = "espeak \"" + phrase + "\"";
		                  charCommand = command.c_str();
		                  system(charCommand);
				
				          scanf("%f",&b);
				          c=a+b;
			   	          printf("\n\t\t\t\t\tSum is %.2f",c);
						  
						  phrase = "The Sum is";
		        		  command = "espeak \"" + phrase + "\"";
		        		  charCommand = command.c_str();
		        	   	  system(charCommand);
			   	 		}
			   
			            else if(strcmp(ch, "product")==0|| strcmp(ch, "multiply")==0|| strcmp(ch, "I want to multiply two numbers")==0 || strcmp(ch,"multiplication")==0)
			            { 
			   	 			printf("\n\t\t\t\t\tEnter First Number: ");
			   	 			
							phrase = "Enter First Number:";
		         			command = "espeak \"" + phrase + "\"";
		         			charCommand = command.c_str();
		         			system(charCommand);
			   	 
				 			scanf("%f",&a);
			   	 
				 			printf("\n\t\t\t\t\tEnter Second Number: ");
				 			
							phrase = "Enter Second Number:";
		         			command = "espeak \"" + phrase + "\"";
		         			charCommand = command.c_str();
		         			system(charCommand);
			   	 			scanf("%f",&b);
			   	
			    			printf("\n\t\t\t\t\tProduct is %f",a*b);
			    			
							phrase = "Product is";
		        			command = "espeak \"" + phrase + "\"";
		        			charCommand = command.c_str();
		        			system(charCommand);
			   			} 
			   
			    		else if(strcmp(ch, "subtract")==0|| strcmp(ch, "minus")==0|| strcmp(ch, "sutract two numbers")==0 ||strcmp(ch,"subtraction")==0)
			   			{
			   	 			printf("\n\t\t\t\t\tEnter First Number: ");
			   	 			
							phrase = "Enter First Number:";
		         			command = "espeak \"" + phrase + "\"";
		         			charCommand = command.c_str();
		         			system(charCommand);
			   	 
							scanf("%f",&a);
			   	
			    			printf("\n\t\t\t\t\tEnter Second Number: ");
			    			
							phrase = "Enter Second Number:";
		        			command = "espeak \"" + phrase + "\"";
		        			charCommand = command.c_str();
		        			system(charCommand);
			   	 
			    			scanf("%f",&b);
			   	
			    			printf("\n\t\t\t\t\tAnswer is %f",a-b);
			    
			   			}
			   
			    		else if(strcmp(ch, "divide")==0|| strcmp(ch, "division")==0|| strcmp(ch, "divide two numbers")==0)
			   			{
			   	 			printf("\n\t\t\t\t\tEnter First Number: ");
			   	 			
							phrase = "Enter First Number:";
		         			command = "espeak \"" + phrase + "\"";
		         			charCommand = command.c_str();
		         			system(charCommand);
			   	 
				 			scanf("%f",&a);
			   	 
				 			printf("\n\t\t\t\t\tEnter Second Number: ");
				 			
							phrase = "Enter Second Number:";
		         			command = "espeak \"" + phrase + "\"";
		         			charCommand = command.c_str();
		         			system(charCommand);
			   	 
				 			scanf("%f",&b);
			   	 			printf("\n\t\t\t\t\tAnswer is %f",a/b);
			   			}
			   			else
			   				printf("\n\t\t\t\t\tINVALID");
						break;
						
						case 2:	
							printf("\n\t\t\t\tYour Question: ");
							
							phrase = "YOUR QUESTION:";
							command = "espeak \"" + phrase + "\"";
							charCommand = command.c_str();
							system(charCommand);
							
							fflush(stdin);
							fgets(ch, sizeof(ch), stdin);
							ch[strcspn(ch, "\n")] = '\0';
							
			   				logInteraction(ch);		
			   				if(strcmp (ch, "hi")==0|| strcmp (ch, "hey")==0|| strcmp (ch, "hello")==0)
				   			{
			   	 				printf("\n\t\t\t\t\tHello. How are you?");
			   	 				
								phrase = "Hello. Hope you are fine.";
		         				command = "espeak \"" + phrase + "\"";
		         				charCommand = command.c_str();
		         				system(charCommand);
		       				}
			   
			   				else if(strcmp(ch, "bye")==0|| strcmp(ch, "stop")==0|| strcmp(ch, "exit")==0)
			   				{
			   	 				printf("\n\t\t\t\t\tHave a nice day. Good Bye.");
			   	  				
								phrase = "Have a nice day. Good Bye";
		          				command = "espeak \"" + phrase + "\"";
		          				charCommand = command.c_str();
		          				system(charCommand);
			   	  				exit(0);
			   				}
			   
			   				else if(strcmp(ch, "who are you")==0|| strcmp(ch, "tell me about yourself")==0|| strcmp(ch, "about you")==0)
			   				{
			   	 				printf("\n\t\t\t\t\tI'm a virtual Assistant name talkot. Made by Sadia Tehreem!!!. I can solve any query of yours.");
			   	  				
								phrase = "I'm a virtual Assistant name talkot made by Sadia Tereem!!!. I can solve any query of yours.";
		          				command = "espeak \"" + phrase + "\"";
		          				charCommand = command.c_str();
		          				system(charCommand);
			   				}
			   
			   				else if(strcmp(ch, "how are you")==0|| strcmp(ch, "how is your day")==0|| strcmp(ch, "whats up")==0 || strcmp(ch,"i am fine how are you.")==0)
			   				{
			   	 				printf("\n\t\t\t\t\tI'm good.");
			   	 				
								phrase = "I'm good.";
		         				command = "espeak \"" + phrase + "\"";
		         				charCommand = command.c_str();
		         				system(charCommand);
			   				}
			   			
			   				else if(strcmp(ch, "date")==0|| strcmp(ch, "time")==0|| strcmp(ch, "date and time")==0)
			   				{
			   	 				datetime();
			   		    	} 
			   		    	else
			   		    	{
			   		    	    printf("\n\t\t\t\t\tINVALID");
			   		        }
			   		    	break;
			   			
			   			case 3:
			   				printf("\n\t\t\t\t\tWHAT DO YOU WANT TO OPEN: ");
			   				
							phrase = "WHAT DO YOU WANT TO OPEN:";
							command = "espeak \"" + phrase + "\"";
							charCommand = command.c_str();
							system(charCommand);
			   				
							scanf("%s",&ch);
			   				logInteraction(ch);
			   				if(strcmp(ch, "Open Notepad")==0|| strcmp(ch, "Notepad")==0|| strcmp(ch, "notepad")==0)
			   				{
			   	 				printf("\t\t\t\t\tOpening notepad..........");
			   	 				
								phrase = "Opening Notepad........";
		         				command = "espeak \"" + phrase + "\"";
		         				charCommand = command.c_str();
		         				system(charCommand);
			   	 
				 				CreateProcess(TEXT("C:\\Windows\\Notepad.exe"),NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startinfo, &processinfo);
			   				}
			   
			    			else if(strcmp(ch, "open google")==0|| strcmp(ch, "Google")==0|| strcmp(ch, "google")==0)
			   				{
			   	 				printf("\t\t\t\t\tOpening Google..........");
			   	 				
								phrase = "Opening Google......";
		         				command = "espeak \"" + phrase + "\"";
		         				charCommand = command.c_str();
		         				system(charCommand);
			   	 
				 				system("start https://www.google.com");
			   				}
			   
			    			else if(strcmp(ch, "youtube")==0|| strcmp(ch, "Youtube")==0|| strcmp(ch, "Open Youtube")==0)
			   				{
			   	 				printf("\t\t\t\t\tOpening Youtube..........");
			   	 				
								phrase = "Opening Youtube";
		         				command = "espeak \"" + phrase + "\"";
		         				charCommand = command.c_str();
		         				system(charCommand);
			   	 
				 				system("start https://www.youtube.com");
			   				}
			   
			    			else if(strcmp(ch, "open Instagram")==0|| strcmp(ch, "Instagram")==0|| strcmp(ch, "instagram")==0)
			   				{
			   	 				printf("\t\t\t\t\tOpening Instagram..........");
			   	 				
								phrase = "Opening Instagram";
		         				command = "espeak \"" + phrase + "\"";
		         				charCommand = command.c_str();
		         				system(charCommand);
			   	 
				 				system("start https://www.instagram.com");
			   				}
			   				else
			   					printf("\n\t\t\t\t\tINVALID");
			   				break;
			   				
			   				case 4:
			   					{
									printf("\n\n\t\t\t\t\tEnter text: ");
               	  				
									phrase = "ENTER TEXT:";
		          					command = "espeak \"" + phrase + "\"";
		          					charCommand = command.c_str();
		          					system(charCommand);
               	  					
               	  					fflush(stdin);    //USING TO CLEAR KEYBOARD BUFFER
									scanf("%[^\n]",text);
               	  					
                	  				string s="https://www.bing.com/search?pglt=41&q=";
               	  					string res;
               	  					res=s+text;
               	  
									ShellExecute(NULL,"open", res.c_str(),NULL,NULL,SW_SHOWNORMAL);
								}		
		   					break;
			   				
			   				default:
			   					{
			   					printf("\t\t\t\t\tSorry! I can't understand you. Please try again.");
			   	 				
								phrase = "Sorry! I can't understand you. Please try again.";
		         				command = "espeak \"" + phrase + "\"";
		         				charCommand = command.c_str();
		         				system(charCommand);
		         				exit(0);
		         			    }
		         			    break;
			   		}
			}
			while(1);
	}
	else
	{
       	printf("\nINCORRECT PASSWORD");
		
		phrase = "Incorrect Password";
		command = "espeak \"" + phrase + "\"";
		charCommand = command.c_str();
		system(charCommand);
    }
    }
    while(1);
}