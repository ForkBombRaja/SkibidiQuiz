#include "mainwindow.h"
#include <QApplication>
/**
 * @author Aditya Mukerjee
 * @date 7/28/2024
 */
/**
 * @brief qMain this is the main method
 * @param argc - commandline arg size
 * @param argv - commandline args
 * @return execution num 0 if failes 1 if success
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//set up the applicatiuon using te command line arguements
    MainWindow w;//set up the window
    w.show();//show it
    return a.exec();// exec the program
}
