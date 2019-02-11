#include "cricketteam.h"

int main()
{
	CricketTeam t1;
	cout << "the captain is:";
	t1.setcaptain("hamza");
	t1.getcaptain();
	cout << "team rank:" ;
	t1.setrank(1);
	t1.getrank();
	//t1.setteamName();
	cout << "the number of team members:";
	t1.setmembers(8);
	t1.getmembers();
	t1.inputScore(3);
	t1.inputScore(15);
	t1.printScore(t1.inputScore);

	system("pause");
}