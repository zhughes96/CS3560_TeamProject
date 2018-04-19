// Current Problems: Doesn't track to see if player or computer made a move previously.

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>
#include "battleship.h"

using namespace std;

bool battleship::is_legal(string s)
{
	if(s == "A1")
	{
		return true;
	}
	else if(s == "A2")
	{
		return true;
	}
	else if(s == "A3")
	{
		return true;
	}
	else if(s == "A4")
	{
		return true;
	}
	else if(s == "A5")
	{
		return true;
	}
	else if(s == "B1")
	{
		return true;
	}
	else if(s == "B2")
	{
		return true;
	}
	else if(s == "B3")
	{
		return true;
	}
	else if(s == "B4")
	{
		return true;
	}
	else if(s == "B5")
	{
		return true;
	}
	else if(s == "C1")
	{
		return true;
	}
	else if(s == "C2")
	{
		return true;
	}
	else if(s == "C3")
	{
		return true;
	}
	else if(s == "C4")
	{
		return true;
	}
	else if(s == "C5")
	{
		return true;
	}
	else if(s == "D1")
	{
		return true;
	}
	else if(s == "D2")
	{
		return true;
	}
	else if(s == "D3")
	{
		return true;
	}
	else if(s == "D4")
	{
		return true;
	}
	else if(s == "D5")
	{
		return true;
	}
	else if(s == "E1")
	{
		return true;
	}
	else if(s == "E2")
	{
		return true;
	}
	else if(s == "E3")
	{
		return true;
	}
	else if(s == "E4")
	{
		return true;
	}
	else if(s == "E5")
	{
		return true;
	}
	else
	{
		return false;
	}

}

void battleship::create_player_board()
{
	stringstream ss;

	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			if(i == 0)
			{
				ss << "A" << j+1;
				board1[i][j] = ss.str();
				ss.str("");
				
			}
			if(i == 1)
			{
				ss << "B" << j+1;
				board1[i][j] = ss.str();
				ss.str("");
				
			}
			if(i == 2)
			{
				ss << "C" << j+1;
				board1[i][j] = ss.str();
				ss.str("");
				
			}
			if(i == 3)
			{
				ss << "D" << j+1;
				board1[i][j] = ss.str();
				ss.str("");
				
			}
			if(i == 4)
			{
				ss << "E" << j+1;
				board1[i][j] = ss.str();
				ss.str("");
				
			}
		}
	}
	display_player_board();
	cout << "Enter the coordinate of your ships." << endl;
	cin >> ship1;
	cin >> ship2;
	while(!is_legal(ship1) || !is_legal(ship2))
	{
		cout << "Invalid coordinates, please enter new ship coordinates." << endl;
		cin >> ship1;
		cin >> ship2;
	}
	while(ship1 == ship2)
	{
		cout << "Your first ship cannot be in the same position as your second, please enter the coordinates for your second ship again." << endl;
		cin >> ship2;
	}
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			if(board1[i][j] == ship1)
			{
				board1[i][j] = "S1";
			}
			if(board1[i][j] == ship2)
			{
				board1[i][j] = "S2";
			}
		}
	}
}

void battleship::create_computer_board()
{
	char letters[] = {'A', 'B', 'C', 'D', 'E'};

	stringstream ss;
	stringstream ss1;
	stringstream ss2;
	srand(time(NULL));
	int temp1 = rand()%5 +1;
	int temp2 = rand()%5 +1;
	int temp3 = rand()%5;
	int temp4 = rand()%5;
	char temp5 = letters[temp3];
	char temp6 = letters[temp4];
	ss1 << temp5 << temp1;
	comp_ship1 = ss1.str();
	ss2 << temp6 << temp2;
	comp_ship2 = ss2.str();

	while(comp_ship1 == comp_ship2)
	{
		stringstream ss1;
		stringstream ss2;
		srand(time(NULL));
		int temp1 = rand()%5 +1;
		int temp2 = rand()%5 +1;
		int temp3 = rand()%5;
		int temp4 = rand()%5;
		char temp5 = letters[temp3];
		char temp6 = letters[temp4];
		ss1 << temp5 << temp1;
		comp_ship1 = ss1.str();
		ss2 << temp6 << temp2;
		comp_ship2 = ss2.str();
	}

	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			if(i == 0)
			{
				ss << "A" << j+1;
				board2[i][j] = ss.str();
				ss.str("");
				
			}
			if(i == 1)
			{
				ss << "B" << j+1;
				board2[i][j] = ss.str();
				ss.str("");
				
			}
			if(i == 2)
			{
				ss << "C" << j+1;
				board2[i][j] = ss.str();
				ss.str("");
				
			}
			if(i == 3)
			{
				ss << "D" << j+1;
				board2[i][j] = ss.str();
				ss.str("");
				
			}
			if(i == 4)
			{
				ss << "E" << j+1;
				board2[i][j] = ss.str();
				ss.str("");
				
			}
		}
	}
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			if(board2[i][j] == comp_ship1)
			{
				board2[i][j] = "S1";
			}
			if(board2[i][j] == comp_ship2)
			{
				board2[i][j] = "S2";
			}
		}
	}
}

void battleship::display_player_board()
{
	cout << endl;
	cout << "Your Board: " << endl;
	for(int i = 0; i < 5; i++)
	{
		cout << "|------------------------------------------------------|" <<  endl;
		cout << "|          |          |          |          |          |" << endl;
		for(int j=0; j < 5; j++)
		{
			cout << "|    " << board1[i][j] << "    ";
		}
		cout << "|" <<endl;
		cout << "|          |          |          |          |          |" << endl;
	}
	cout << "|------------------------------------------------------|" <<  endl;
	cout << endl;
}

void battleship::display_computer_board()
{
	for(int i = 0; i < 5; i++)
	{
		cout << "|------------------------------------------------------|" <<  endl;
		cout << "|          |          |          |          |          |" << endl;
		for(int j=0; j < 5; j++)
		{
			cout << "|    " << board2[i][j] << "    ";
		}
		cout << "|" <<endl;
		cout << "|          |          |          |          |          |" << endl;
	}
	cout << "|------------------------------------------------------|" <<  endl;
	cout << endl;
}

void battleship::shoot_player_torpedo(string s)
{
	int t1 = 0;
	int t2 = 0;
	int t3 = 0;
	int t4 = 0;
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			if(s == board2[i][j])
			{
				board2[i][j] = "O ";
				cout << "You have missed. Try again." << endl;
				cout << endl;
			}
		}
	}
	if(s == comp_ship1)
	{
		t1 = comp_ship1[0]-65;
		t2 = comp_ship1[1]-49;
		board2[t1][t2] = "X ";
		cout << "Direct Hit!" << endl;
		cout << endl;
	}
	if(s == comp_ship2)
	{
		t3 = comp_ship2[0]-65;
		t4 = comp_ship2[1]-49;
		board2[t3][t4] = "X ";
		cout << "Direct Hit!" << endl;
		cout << endl;
	}

}

void battleship::shoot_computer_torpedo(string s)
{
	int t1 = 0;
	int t2 = 0;
	int t3 = 0;
	int t4 = 0;
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			if(s == board1[i][j])
			{
				board1[i][j] = "O ";
				cout << "The computer has missed!" << endl;
				display_player_board();
				cout << endl;
			}
		}
	}
	if(s == ship1)
	{
		t1 = ship1[0]-65;
		t2 = ship1[1]-49;
		board1[t1][t2] = "X ";
		cout << "A Direct Hit by the Computer!" << endl;
		display_player_board();
		cout << endl;
	}
	if(s == ship2)
	{
		t3 = ship2[0]-65;
		t4 = ship2[1]-49;
		board1[t3][t4] = "X ";
		cout << "A Direct Hit by the Computer!" << endl;
		display_player_board();
		cout << endl;
	}

}
bool battleship::game_over()
{
	int counter1 = 0;
	int counter2 = 0;
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			if(board1[i][j] == "X ")
			{
				counter1++;
			}
			if(board2[i][j] == "X ")
			{
				counter2++;
			}
		}
	}
	if(counter2 == 2)
	{
		cout << "Congratulations! You have won the game!" << endl;
		cout << "Computer's Board: " << endl;
		display_computer_board();
		return true;
	}
	else if(counter1 == 2)
	{
		cout << "The computer has won the game. Good luck next time!" << endl;
		cout << "Your Board: " << endl;
		display_player_board();
		return true;
	}
	else
	{
		return false;
	}
}

void battleship::play()
{
	string temp;
	string temp_c;
	char letters[] = {'A', 'B', 'C', 'D', 'E'};
	player_moves = 0;
	computer_moves = 0;

	stringstream ss1;
	srand(time(NULL));
	int temp1 = rand()%5 +1;
	int temp2 = rand()%5 +1;
	int temp3 = rand()%5;
	int temp4 = rand()%5;
	char temp5 = letters[temp3];
	char temp6 = letters[temp4];
	ss1 << temp5 << temp1;
	temp_c = ss1.str();



	create_player_board();
	display_player_board();
	create_computer_board();

	cout << "You have the first move, please enter the coorindates that will be fired upon." << endl;
	while(!game_over())
	{
		cin >> temp;
		while(!check_player_past_moves(temp))
		{
			cout << "Previously entered coordinates, try again." << endl;
			cin >> temp;
		}
		while(!is_legal(temp))
		{
			cout << "Invalid coordinates, try again." << endl;
			cout << endl;
			cin >> temp;
		}
		shoot_player_torpedo(temp);
		past_player_moves[player_moves] = temp;
		player_moves++;
		while(!check_computer_past_moves(temp_c))
		{
			stringstream ss1;
			srand(time(NULL));
			int temp1 = rand()%5 +1;
			int temp2 = rand()%5 +1;
			int temp3 = rand()%5;
			int temp4 = rand()%5;
			char temp5 = letters[temp3];
			char temp6 = letters[temp4];
			ss1 << temp5 << temp1;
			temp_c = ss1.str();
		}
		cout << "The computer has guessed " << temp_c << "." <<  endl;
		shoot_computer_torpedo(temp_c);
		past_computer_moves[computer_moves] = temp_c;
		computer_moves++;
		stringstream ss1;
		srand(time(NULL));
		int temp1 = rand()%5 +1;
		int temp2 = rand()%5 +1;
		int temp3 = rand()%5;
		int temp4 = rand()%5;
		char temp5 = letters[temp3];
		char temp6 = letters[temp4];
		ss1 << temp5 << temp1;
		temp_c = ss1.str();
		cout << "Enter coorindates to be fired upon." << endl;

	}
}

bool battleship::check_player_past_moves(string s)
{
	for(int i = 0; i < 25; i++)
	{
		if(s == past_player_moves[i])
		{
			return false;
		}
	}
	return true;
}
bool battleship::check_computer_past_moves(string s)
{
	for(int i = 0; i < 25; i++)
	{
		if(s == past_computer_moves[i])
		{
			cout << "hello" << endl;
			return false;
		}
	}
	return true;
}