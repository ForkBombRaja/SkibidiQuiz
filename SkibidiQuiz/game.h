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
     * @brief questionList - the list of questions in the game
     */
    QList<Question> questionList;
    /**
     * @brief Game - the constructor for a game
     * @param question1 - the first question
     * @param question2 - the second question
     * @param question3 - the third question
     * @param question4 - the fourth question
     * @param question5 - the fifth question
     */
    Game(Question question1, Question question2, Question question3, Question question4, Question question5);
    /**
     * @brief changeScore - add 20 points for the score
     */
    void changeScore();
};
#endif // GAME_H
