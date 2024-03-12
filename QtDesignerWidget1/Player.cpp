#include "Player.h"
Player::Player(string username, string password)
	:username(username), password(password), totalCorrectAnswers(0), totalQuestionsAnswered(0) {};

string Player::getUsername() {
	return username;
}

string Player::getPassword() {
	return password;
}

void Player::recordAnswer(bool correct) {
	totalQuestionsAnswered++;
	if (correct) {
		totalCorrectAnswers++;
	}
}

void Player::playerRank(Player& player) {

}

bool Player::comparePlayers(const pair<string, Player>& a, const pair<string, Player>& b) {
	double accuracyA = (a.second.totalQuestionsAnswered > 0) ?
		static_cast<double>(a.second.totalCorrectAnswers) / a.second.totalQuestionsAnswered : 0;
	double accuracyB = (b.second.totalQuestionsAnswered > 0) ?
		static_cast<double>(b.second.totalCorrectAnswers) / b.second.totalQuestionsAnswered : 0;
	return accuracyA > accuracyB;
}
void fuckyou() {

}