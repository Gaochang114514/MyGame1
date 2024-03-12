#pragma once
#ifndef QUESTION_H
#define QUESTION_H

#include <qwidget.h>

//Ã‚–Õ
enum QuestionTypes {
	Choice,
	GapFilling,
	TrueOrFalse
};

class Question {

public:
	Question();
	Question(bool q_istrue, QuestionTypes q_type);
	std::string q_getText();
	bool q_getIstrue();
	QuestionTypes q_getType();
private:
	std::string q_text;
	bool q_istrue;
	QuestionTypes q_type;
};

class q_TreeNode {
private:
	Question question;
	q_TreeNode* left;
	q_TreeNode* right;
public:
	q_TreeNode(Question question) :question(question), left(nullptr), right(nullptr) {};

	void setLeft(q_TreeNode* newLeft) {
		left = newLeft;
	}

	void setRight(q_TreeNode* newRight) {
		right = newRight;
	}

	const Question& getQuestion()const {
		return question;
	}

	q_TreeNode* getLeft()const {
		return left;
	}

	q_TreeNode* getRight()const {
		return right;
	}
};
#endif