#include "Question.h"

Question::Question() :q_istrue(false), q_type(Choice) {
	//Ĭ�Ϲ��캯��
}

Question::Question(bool q_istrue, QuestionTypes q_type) :q_istrue(q_istrue), q_type(q_type){
	//���ι��캯��
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