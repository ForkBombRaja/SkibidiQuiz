#ifndef GAME_H
#define GAME_H
#include "question.h"
#include <QList>
/**
 * @brief This is an abstract representation of a game.
 * @author Aditya Mukerjee
 * @version 1.0
 */
class Game
{
public:
    /**
     * @brief score - total game score
     */
    int score;
    /**
     * @brief currentQuestions - index of the question were on as per questionList
     */
    int  currentQuestion;
    /**
     * @brief totalQuestions-total number of questions
     */
    int totalQuestions;
    /**
     * @brief questionList - the list of questions in the game
     */
    QList<Question> questionList;
    /**
     * @brief Game - default constructor
     */
    Game();
    /**
     * @brief changeScore - add 20 points for the score
     */
    void changeScore();
    /**
     * @brief addQuestion - add questions
     * @param question - the question to add
     */
    void addQuestion(Question question);
};
#endif // GAME_H
