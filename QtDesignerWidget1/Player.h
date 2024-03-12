#pragma once
#ifndef PLAYER_H
#define PLAYER_H
#include <qwidget.h>
#include <string.h>
#include <map>
#include <algorithm>
#include <vector>
using std::string;
using std::pair;

std::map<std::string, Player> playerMap;

class Player {
private:
	string username;
	string password;
	int totalQuestionsAnswered;
	int totalCorrectAnswers;
public:
	Player(string username, string password);
	string getUsername();
	string getPassword();
	void recordAnswer(bool correct);
	void playerRank(Player& player);
	bool comparePlayers(const pair<string, Player>& a, const pair<string, Player>& b);
};
#endif // !PLAYER_H
