#include <iostream>
#include <fstream>

using namespace std;

class battleship
{
	public:
		void create_player_board();
		void display_player_board();
		void shoot_player_torpedo(string s);
		bool is_legal(string s);

		void display_computer_board();
		void create_computer_board();
		void shoot_computer_torpedo(string s);

		void play();
		bool game_over();

	private:
		string board1[5][5];
		string board2[5][5];
		string ship1;
		string ship2;
		string comp_ship1;
		string comp_ship2;
};