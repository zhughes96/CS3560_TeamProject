#include <iostream>               //BATTLESHIP copyright 2003 Nick (Silver Ghost)  All rights reserved. 

using namespace std; 	
int main( void )
{
	string b [17]; // This is the array that keeps track of human moves
	string c [17]; // This is the array that keeps track of computer moves
	string d [17]; // This is the array that shows the human where he put his ship
	string placeship;
	string humanguess;
	string playagain;
	int placeshiplast;
	int computerplace;
	int humanguesslast;
	int computerguess;
	bool win;
	srand (time(0)); // Seeds random number generator for the computer's moves

do
{
	bool n1 =false;
	bool n2 =false;
	bool n3 =false;
	bool n4 =false;
	bool n5 =false;
	bool n6 =false;
	bool n7 =false;
	bool n8 =false; 
	bool n9 =false;
	bool n10 =false;
	bool n11 =false;
	bool n12 =false;
	bool n13 =false;
	bool n14 =false;
	bool n15 =false;
	bool n16 =false;
	bool wrong1 =true;
	bool wrong2 =true;
	win =false;
	placeship =0;
	cout<<" ----     -  ------- ------- -      -----    ------  -   -  -----  ------ "<<endl;
	cout<<"|    |   | |    |       |    |     |        |        |   |    |   |      |"<<endl;
	cout<<"|    |  |   |   |       |    |     |        |        |   |    |   |------ "<<endl;
	cout<<"|----   |   |   |       |    |     |-----    -----   |---|    |   |       "<<endl;
	cout<<"|    | |-----|  |       |    |     |              |  |   |    |   |       "<<endl;
	cout<<"|    | |     |  |       |    |     |              |  |   |    |   |       "<<endl;
	cout<<" ----  -     -  -       -    -----  -----   ------   -  --  -----         "<<endl;
	cout<<endl<<"Welcome to Nick's Battleship game!"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl<<"These are the rules of the game: First you place your ship, and then the"<<endl;
	cout<<"computer places his ship. Then the computer and yourself keep on guessing to"<<endl;
	cout<<"find the others ship. The player to find the others ship wins"<<endl;
	cout<<endl;
	for (int i=0; i<1000000000; i++){}
	for (int i=0; i<1000000000; i++){}
	cout<<endl;
	cout<<endl;
	cout<<endl<<"This is what the board looks like:"<<endl;
	for (int z =0; z<17; z++) // Fills up the human array
	b[z] ="....";
	for (int z =0; z<17; z++) // Fills up the computer array
	c[z] ="....";
	for (int z =0; z<17; z++) // Fills up the ship placement array
	d[z] ="....";
	
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"         A          B          C          D"<<endl;
	cout<<"    -------------------------------------------"<<endl;
	cout<<"   |          |          |          |          | "<<endl;
	cout<<" 1 |  "<<b[1]<<"    |  "<<b[2]<<"    |    "<<b[3]<<"  |  "<<b[4]<<"    |"<<endl;              
	cout<<"   |          |          |          |          |"<<endl;
	cout<<"   |-------------------------------------------|"<<endl;
	cout<<"   |          |          |          |          |"<<endl;
	cout<<" 2 |  "<<b[5]<<"    |  "<<b[6]<<"    |    "<<b[7]<<"  |  "<<b[8]<<"    |"<<endl; 
	cout<<"   |          |          |          |          |"<<endl;
	cout<<"   |-------------------------------------------|"<<endl;
	cout<<"   |          |          |          |          |"<<endl;
	cout<<" 3 |  "<<b[9]<<"    |  "<<b[10]<<"    |    "<<b[11]<<"  |  "<<b[12]<<"    |"<<endl;
	cout<<"   |          |          |          |          |"<<endl;
	cout<<"   |-------------------------------------------|"<<endl;
	cout<<"   |          |          |          |          |"<<endl;
	cout<<" 4 |  "<<b[13]<<"    |  "<<b[14]<<"    |    "<<b[15]<<"  |  "<<b[16]<<"    |"<<endl;
	cout<<"   |          |          |          |          |"<<endl;
	cout<<"    ------------------------------------------- "<<endl;
	for (int i=0; i<1000000000; i++){}
	cout<<endl;
	cout<<endl;
	cout<<endl<<"'....' means that you havn't guessed that square yet"<<endl;
	cout<<endl;
	cout<<endl;
	
	do
	{
	cout<<endl<<"Ok. Now you have to place your ship on a coordinate. Choose a coorinate a-d,1-4"<<endl;
	cin>>placeship; // Human inputs what section he wants his ship
	
		if (placeship =="a1") // This section here converts a user's string input into a number that is recognized by the array
		{
		wrong1 =false;
		placeshiplast =1;
		}
		
		else if (placeship =="a2")
		{
		wrong1 =false;
		placeshiplast =5;
		}
		
		else if (placeship =="a3")
		{
		wrong1 =false;
		placeshiplast =9;
		}
		
		else if (placeship =="a4")
		{
		wrong1 =false;
		placeshiplast =13;
		}
		
		else if (placeship =="b1")
		{
		wrong1 =false;
		placeshiplast =2;
		}
		
		else if (placeship =="b2")
		{
		wrong1 =false;
		placeshiplast =6;
		}
		
		else if (placeship =="b3")
		{
		wrong1 =false;
		placeshiplast =10;
		}
		
		else if (placeship =="b4")
		{
		wrong1 =false;
		placeshiplast =14;
		}
		
		else if (placeship =="c1")
		{
		wrong1 =false;
		placeshiplast =3;
		}
		
		else if (placeship =="c2")
		{
		wrong1 =false;
		placeshiplast =7;
		}
		
		else if (placeship =="c3")
		{
		wrong1 =false;
		placeshiplast =11;
		}
		
		else if (placeship =="c4")
		{
		wrong1 =false;
		placeshiplast =15;
		}
		
		else if (placeship =="d1")
		{
		wrong1 =false;
		placeshiplast =4;
		}
		
		else if (placeship =="d2")
		{
		wrong1 =false;
		placeshiplast =8;
		}
		
		else if (placeship =="d3")
		{
		wrong1 =false;
		placeshiplast =12;
		}
		
		else if (placeship =="d4")
		{
		wrong1 =false;
		placeshiplast =16;
		}
		
		else if (wrong1 ==true)
		{
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl<<"You have entered an invalid coordinate"<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		for (int i=0; i<1000000000; i++){}
		}
	}
	while (wrong1 ==true);
		
		d[placeshiplast] ="YOU ";
		
	cout<<"         A          B          C          D"<<endl;
	cout<<"    -------------------------------------------"<<endl;
	cout<<"   |          |          |          |          | "<<endl;
	cout<<" 1 |  "<<d[1]<<"    |  "<<d[2]<<"    |    "<<d[3]<<"  |  "<<d[4]<<"    |"<<endl;              
	cout<<"   |          |          |          |          |"<<endl;
	cout<<"   |-------------------------------------------|"<<endl;
	cout<<"   |          |          |          |          |"<<endl;
	cout<<" 2 |  "<<d[5]<<"    |  "<<d[6]<<"    |    "<<d[7]<<"  |  "<<d[8]<<"    |"<<endl; 
	cout<<"   |          |          |          |          |"<<endl;
	cout<<"   |-------------------------------------------|"<<endl;
	cout<<"   |          |          |          |          |"<<endl;
	cout<<" 3 |  "<<d[9]<<"    |  "<<d[10]<<"    |    "<<d[11]<<"  |  "<<d[12]<<"    |"<<endl;
	cout<<"   |          |          |          |          |"<<endl;
	cout<<"   |-------------------------------------------|"<<endl;
	cout<<"   |          |          |          |          |"<<endl;
	cout<<" 4 |  "<<d[13]<<"    |  "<<d[14]<<"    |    "<<d[15]<<"  |  "<<d[16]<<"    |"<<endl;
	cout<<"   |          |          |          |          |"<<endl;
	cout<<"    ------------------------------------------- "<<endl;
	
	cout<<endl;
	cout<<endl;
	cout<<endl<<"Ok. Now the computer will place its ship....."<<endl;
	for (int i=0; i<1000000000; i++){}
	
	computerplace =rand()%16 +1; // Random number that becomes the computer's ship placement point

do
{	
	wrong2 =true;
	computerguess =0;
	cout<<endl;
	cout<<endl;
	
	do
	{
	cout<<endl<<"Ok. Now guess the coordinate"<<endl;
	cin>>humanguess; // Human guesses where computer has ship
	
		if (humanguess =="a1")
		{
		wrong2 =false;
		humanguesslast =1;
		}
		
		else if (humanguess =="a2") // This section converts a user input of letter and number to a number recognized by the array
		{
		wrong2 =false;
		humanguesslast =5;
		}
		
		else if (humanguess =="a3")
		{
		wrong2 =false;
		humanguesslast =9;
		}
		
		else if (humanguess =="a4")
		{
		wrong2 =false;
		humanguesslast =13;
		}
		
		else if (humanguess =="b1")
		{
		wrong2 =false;
		humanguesslast =2;
		}
		
		else if (humanguess =="b2")
		{
		wrong2 =false;
		humanguesslast =6;
		}
		
		else if (humanguess =="b3")
		{
		wrong2 =false;
		humanguesslast =10;
		}
		
		else if (humanguess =="b4")
		{
		wrong2 =false;
		humanguesslast =14;
		}
		
		else if (humanguess =="c1")
		{
		wrong2 =false;
		humanguesslast =3;
		}
		
		else if (humanguess =="c2")
		{
		wrong2 =false;
		humanguesslast =7;
		}
		
		else if (humanguess =="c3")
		{
		wrong2 =false;
		humanguesslast =11;
		}
		
		else if (humanguess =="c4")
		{
		wrong2 =false;
		humanguesslast =15;
		}
		
		else if (humanguess =="d1")
		{
		wrong2 =false;
		humanguesslast =4;
		}
		
		else if (humanguess =="d2")
		{
		wrong2 =false;
		humanguesslast =8;
		}
		
		else if (humanguess =="d3")
		{
		wrong2 =false;
		humanguesslast =12;
		}
		
		else if (humanguess =="d4")
		{
		wrong2 =false;
		humanguesslast =16;	
		}
		
		else if (wrong2 ==true)
		{
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl<<"You have guessed an invalid coordinate"<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		for (int i=0; i<1000000000; i++){}
		}
	}
	while (wrong2 ==true);
	
	if (humanguesslast ==computerplace)	// If human's guess is equal to computer's placement
	{
	win =true;
	b[humanguesslast] ="BOOM\a\a\a";
	cout<<"                     YOUR BOARD"<<endl;
	
	cout<<"         A          B          C          D"<<endl;
	cout<<"    -------------------------------------------"<<endl;
	cout<<"   |          |          |          |          | "<<endl;
	cout<<" 1 |  "<<b[1]<<"    |  "<<b[2]<<"    |    "<<b[3]<<"  |  "<<b[4]<<"    |"<<endl;              
	cout<<"   |          |          |          |          |"<<endl;
	cout<<"   |-------------------------------------------|"<<endl;
	cout<<"   |          |          |          |          |"<<endl;
	cout<<" 2 |  "<<b[5]<<"    |  "<<b[6]<<"    |    "<<b[7]<<"  |  "<<b[8]<<"    |"<<endl; 
	cout<<"   |          |          |          |          |"<<endl;
	cout<<"   |-------------------------------------------|"<<endl;
	cout<<"   |          |          |          |          |"<<endl;
	cout<<" 3 |  "<<b[9]<<"    |  "<<b[10]<<"    |    "<<b[11]<<"  |  "<<b[12]<<"    |"<<endl;
	cout<<"   |          |          |          |          |"<<endl;
	cout<<"   |-------------------------------------------|"<<endl;
	cout<<"   |          |          |          |          |"<<endl;
	cout<<" 4 |  "<<b[13]<<"    |  "<<b[14]<<"    |    "<<b[15]<<"  |  "<<b[16]<<"    |"<<endl;
	cout<<"   |          |          |          |          |"<<endl;
	cout<<"    ------------------------------------------- "<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	for (int i=0; i<1000000000; i++){}
	cout<<endl;
	cout<<endl;
	cout<<endl<<"You win!"<<endl;
	cout<<endl;
	cout<<endl<<"Would you like to play again? Yes or no"<<endl;
	cin>>playagain;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	break;
	}
	
	else // If human's guess is not what the comuter placed
	{
	b[humanguesslast] ="MISS";
	cout<<endl<<"                YOUR BOARD"<<endl;
	
	cout<<"         A          B          C          D"<<endl;
	cout<<"    -------------------------------------------"<<endl;
	cout<<"   |          |          |          |          | "<<endl;
	cout<<" 1 |  "<<b[1]<<"    |  "<<b[2]<<"    |    "<<b[3]<<"  |  "<<b[4]<<"    |"<<endl;              
	cout<<"   |          |          |          |          |"<<endl;
	cout<<"   |-------------------------------------------|"<<endl;
	cout<<"   |          |          |          |          |"<<endl;
	cout<<" 2 |  "<<b[5]<<"    |  "<<b[6]<<"    |    "<<b[7]<<"  |  "<<b[8]<<"    |"<<endl; 
	cout<<"   |          |          |          |          |"<<endl;
	cout<<"   |-------------------------------------------|"<<endl;
	cout<<"   |          |          |          |          |"<<endl;
	cout<<" 3 |  "<<b[9]<<"    |  "<<b[10]<<"    |    "<<b[11]<<"  |  "<<b[12]<<"    |"<<endl;
	cout<<"   |          |          |          |          |"<<endl;
	cout<<"   |-------------------------------------------|"<<endl;
	cout<<"   |          |          |          |          |"<<endl;
	cout<<" 4 |  "<<b[13]<<"    |  "<<b[14]<<"    |    "<<b[15]<<"  |  "<<b[16]<<"    |"<<endl;
	cout<<"   |          |          |          |          |"<<endl;
	cout<<"    ------------------------------------------- "<<endl;
	}
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	
	for (int i=0; i<1000000000; i++){}
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl<<"Ok. Now it is the Computers turn to guess.."<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	
	computerguess =rand ()%16 +1; // Computer makes a guess based on random number
		
		if (computerguess ==1 and n1 ==true)
		computerguess +1;
		
		else if (computerguess ==2 and n2 ==true)
		computerguess +1;
		
		else if (computerguess ==3 and n3 ==true)
		computerguess +1;
		
		else if (computerguess ==4 and n4 ==true)
		computerguess +1;
		
		else if (computerguess ==5 and n5 ==true)
		computerguess +1;
		
		else if (computerguess ==6 and n6 ==true) // This section helps narrow down the possibility of the computer repeating the same guess
		computerguess +1;
		
		else if (computerguess ==7 and n7 ==true)
		computerguess +1;
		
		else if (computerguess ==8 and n8 ==true)
		computerguess +1;
		
		else if (computerguess ==9 and n9 ==true)
		computerguess +1;
		
		else if (computerguess ==10 and n10 ==true)
		computerguess +1;
		
		else if (computerguess ==11 and n11 ==true)
		computerguess +1;
		
		else if (computerguess ==12 and n12 ==true)
		computerguess +1;
		
		else if (computerguess ==13 and n13 ==true)
		computerguess +1;
		
		else if (computerguess ==14 and n14 ==true)
		computerguess +1;
		
		else if (computerguess ==15 and n15 ==true)
		computerguess +1;
		
		else if (computerguess ==16 and n16 ==true)
		computerguess +1;
		
		if (computerguess ==17)
		computerguess =rand ()%16 +1; // If the computerguess happens to equal 17 (because of narrowing down), then this will have it generate a random number
	
		if (computerguess ==placeshiplast) // If the computer's guess is the same as human's placement
		{
		win =true;
		c[computerguess] ="BOOM\a\a\a";
		cout<<endl<<"             COMPUTER BOARD"<<endl;
		
		cout<<"         A          B          C          D"<<endl;
		cout<<"    -------------------------------------------"<<endl;
		cout<<"   |          |          |          |          | "<<endl;
		cout<<" 1 |  "<<c[1]<<"    |  "<<c[2]<<"    |    "<<c[3]<<"  |  "<<c[4]<<"    |"<<endl;              
		cout<<"   |          |          |          |          |"<<endl;
		cout<<"   |-------------------------------------------|"<<endl;
		cout<<"   |          |          |          |          |"<<endl;
		cout<<" 2 |  "<<c[5]<<"    |  "<<c[6]<<"    |    "<<c[7]<<"  |  "<<c[8]<<"    |"<<endl; 
		cout<<"   |          |          |          |          |"<<endl;
		cout<<"   |-------------------------------------------|"<<endl;
		cout<<"   |          |          |          |          |"<<endl;
		cout<<" 3 |  "<<c[9]<<"    |  "<<c[10]<<"    |    "<<c[11]<<"  |  "<<c[12]<<"    |"<<endl;
		cout<<"   |          |          |          |          |"<<endl;
		cout<<"   |-------------------------------------------|"<<endl;
		cout<<"   |          |          |          |          |"<<endl;
		cout<<" 4 |  "<<c[13]<<"    |  "<<c[14]<<"    |    "<<c[15]<<"  |  "<<c[16]<<"    |"<<endl;
		cout<<"   |          |          |          |          |"<<endl;
		cout<<"    ------------------------------------------- "<<endl;
		for (int i=0; i<1000000000; i++){}
		cout<<endl;
		cout<<endl;
		cout<<endl<<"You lose! Computer wins!"<<endl;
		cout<<endl;
		cout<<endl<<"Would you like to play again? Yes or no"<<endl; // Asks user if he wants to play again
		cin>>playagain;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		break; // Leaves the loop that controls the guessing, and gets back into the loop that controls the whole game
		}
		
		else
		{
		c[computerguess] ="MISS"; // If computer's guess is not the same as what you placed your ship
		cout<<endl<<"               COMPUTER BOARD"<<endl;
		
		cout<<"         A          B          C          D"<<endl;
		cout<<"    -------------------------------------------"<<endl;
		cout<<"   |          |          |          |          | "<<endl;
		cout<<" 1 |  "<<c[1]<<"    |  "<<c[2]<<"    |    "<<c[3]<<"  |  "<<c[4]<<"    |"<<endl;              
		cout<<"   |          |          |          |          |"<<endl;
		cout<<"   |-------------------------------------------|"<<endl;
		cout<<"   |          |          |          |          |"<<endl;
		cout<<" 2 |  "<<c[5]<<"    |  "<<c[6]<<"    |    "<<c[7]<<"  |  "<<c[8]<<"    |"<<endl; 
		cout<<"   |          |          |          |          |"<<endl;
		cout<<"   |-------------------------------------------|"<<endl;
		cout<<"   |          |          |          |          |"<<endl;
		cout<<" 3 |  "<<c[9]<<"    |  "<<c[10]<<"    |    "<<c[11]<<"  |  "<<c[12]<<"    |"<<endl;
		cout<<"   |          |          |          |          |"<<endl;
		cout<<"   |-------------------------------------------|"<<endl;
		cout<<"   |          |          |          |          |"<<endl;
		cout<<" 4 |  "<<c[13]<<"    |  "<<c[14]<<"    |    "<<c[15]<<"  |  "<<c[16]<<"    |"<<endl;
		cout<<"   |          |          |          |          |"<<endl;
		cout<<"    ------------------------------------------- "<<endl;
		for (int i=0; i<1000000000; i++){}
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		
			if (computerguess ==1)
			n1 =true;
			
			else if (computerguess ==2)
			n2 =true;
			
			else if (computerguess ==3)
			n3 =true;
			
			else if (computerguess ==4)
			n4 =true;
			
			else if (computerguess ==5)
			n5 =true;
			
			else if (computerguess ==6)
			n6 =true;
			
			else if (computerguess ==7)
			n7 =true;
			
			else if (computerguess ==8) // Works with the section above to narrow down the possibility of the computer guessing the same number over and over
			n8 =true;
			
			else if (computerguess ==9)
			n9 =true;
			
			else if (computerguess ==10)
			n10 =true;
			
			else if (computerguess ==11)
			n11 =true;
			
			else if (computerguess ==12)
			n12 =true;
			
			else if (computerguess ==13)
			n13 =true;
			
			else if (computerguess ==14)
			n14 =true;
			
			else if (computerguess ==15)
			n15 =true;
			
			else if (computerguess ==16)
			n16 =true;
		cout<<endl;
		cout<<endl;
		cout<<endl<<"Ok Now it's your turn"<<endl;
		}
}
while (win ==false); // Only loops when the user hasn't won yet

}
while (playagain =="Yes" or playagain =="yes" or playagain =="y" or playagain =="Y"); // Enables user to have a choice on either to play again or to stop playing

cout<<endl<<"Well ok. Bye then!"<<endl; // If user decides not to play again, he gets this message
return 0; // Stops program
	
	
}                          