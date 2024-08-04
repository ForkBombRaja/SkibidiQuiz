#include "game.h"
/**
 * @brief This is the implementation class for game.h
 * @author Aditya Mukerjee
 * @version 1.0
 */
Game::Game(){
    score = 0; //initialize the score
    currentQuestion = 0;// set up the current question
    totalQuestions = 0; // setup totalQuestions
}
void Game::changeScore(){
    score += 20; //add 20 points
}
void Game::addQuestion(Question question){
    questionList.push_back(question);//add to question list
    totalQuestions++;//increase totalQuestions
}
