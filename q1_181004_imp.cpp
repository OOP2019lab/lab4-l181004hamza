

#include "cricketteam.h"

void CricketTeam::setcaptain(string c)
{
	captain = c;
}

void CricketTeam::getcaptain()
{
	cout << captain << endl;
}

void CricketTeam::setrank(int r)
{
	Rank = r;
}

void CricketTeam::getrank()
{
	cout << Rank << endl;
}

//void CricketTeam::setteamName(char *name)
//{
//	teamName = name;
//}
//
//void CricketTeam::getteamName()
//{
//	cout << teamName << endl;
//}

void CricketTeam::setmembers(int members)
{
	if (members > 0 && members < 11)
		no_of_members = members;
}

void CricketTeam::getmembers()
{
	cout << no_of_members << endl;
}

void CricketTeam::inputmembers(string name)
{
	int i = 0;
	for (; i < no_of_members; i++)
	{
	}
	if (i < no_of_members)
		membernames[i] = name;
	else
		cout << "no place for new teammates" << endl;

}
void CricketTeam::inputScore(int score)
{
	int i = 0;
	for (; Scoreinlast10matches[i] != 0; i++) {}
	if (i < 10)
		Scoreinlast10matches[i] = score;
	else
	{
		for (; i = i + 1; i--)
		{
			Scoreinlast10matches[i] = score;
		}
	}
}

void printScore(int Scoreinlast10matches[10])
{
	int i = 0;
	for (; Scoreinlast10matches[i] != 0; i++)
	{
		cout << Scoreinlast10matches[i];
	}
}

int CricketTeam::avScore(int av)
{
	for (int i = 0; i < no_of_members; i++)
	{
		av += Scoreinlast10matches[i];
	}

	av = av / no_of_members;

	return av;
}

