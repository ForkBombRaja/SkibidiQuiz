#include "game.h"
/**
 * @brief This is the implementation class for game.h
 * @author Aditya Mukerjee
 * @version 1.0
 */
Game::Game(Question question1, Question question2, Question question3, Question question4, Question question5) {
    score = 0; //initialize the score
    /*add the questions to the questionList*/
    questionList.push_back(question1);
    questionList.push_back(question2);
    questionList.push_back(question3);
    questionList.push_back(question4);
    questionList.push_back(question5);
}
void Game::changeScore(){
    score += 20; //add 20 points
}
