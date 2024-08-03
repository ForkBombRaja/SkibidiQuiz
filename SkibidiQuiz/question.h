#ifndef QUESTION_H
#define QUESTION_H
#include <QString>
#include <QList>
/**
 * @brief The Question class is a abstraction of a individual Question in the game.
 * @author Aditya Mukerjee
 * @version 1.0
 */
class Question
{
public:
    /**
     * @brief questionText - the text of the question
     */
    QString questionText;
    /**
     * @brief answerChoices - a list of the answer choices
     */
    QList<QString> answerChoices;
    /**
     * @brief correctAnswer - the correct answer choice
     */
    QString correctAnswer;
    /**
     * @brief Question - the constructor of the question object
     * @param questionText - the text of the question
     * @param answerA - the first answer choice
     * @param answerB - the second answer choice
     * @param answerC - the third answer choice
     * @param correctAnswer - the correct answer choice
     */
    Question(QString questionText, QString answerA, QString answerB, QString answerC, QString correctAnswer);
    /**
     * @brief checkAnswer checks if user selected the correct answer
     * @param answerChoice - the answer choice selected by user
     * @return if the answer provided is correct
     */
    bool checkAnswer(QString answerChoice);
};
#endif // QUESTION_H
