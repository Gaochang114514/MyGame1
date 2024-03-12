#include "Question.h"

Question::Question() :q_istrue(false), q_type(Choice) {
	//默认构造函数
}

Question::Question(bool q_istrue, QuestionTypes q_type) :q_istrue(q_istrue), q_type(q_type){
	//带参构造函数
}

std::string Question::q_getText(){
	return q_text;
}

bool Question::q_getIstrue() {
	return q_istrue;
}

QuestionTypes Question::q_getType() {
	return q_type;
}