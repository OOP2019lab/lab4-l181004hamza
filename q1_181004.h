#include<iostream>
using namespace std;
#include<string>

class CricketTeam
{
private:
	string * membernames;
	int no_of_members;
	char *teamName;
	int Scoreinlast10matches[10];
	int Rank;
	string captain;

public:
	
	void setcaptain(string c);
	void getcaptain();
	void setrank(int r);
	void getrank();
	/*void setteamName(char *name);
	void getteamName();*/
	void setmembers(int members);
	void getmembers();
	void inputmembers(string name);
	void inputScore(int score);
	int avScore(int av);
	void printScore(int score);

};