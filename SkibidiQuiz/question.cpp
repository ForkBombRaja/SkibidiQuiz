#include "question.h"
/**
 * @brief This is the implementation class for question.h
 * @author Aditya Mukerjee
 * @version 1.0
 */
Question::Question(QString questionText, QString answerA, QString answerB, QString answerC, QString correctAnswer):
    questionText(questionText),
    correctAnswer(correctAnswer)
{
    /* the answer chaoces are loaded in*/
    answerChoices.push_back(answerA);
    answerChoices.push_back(answerB);
    answerChoices.push_back(answerC);
}
bool Question::checkAnswer(QString answerChoice){
    return (correctAnswer == answerChoice); //just return the comparison
}
