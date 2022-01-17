//
// Created by xkudla on 17/01/2022.
//

#ifndef PROJECT_ERRORLOGGER_H
#define PROJECT_ERRORLOGGER_H
#include <iostream>
#include <vector>
#include <fstream>

class ErrorLogger{
    static ErrorLogger* s_errorLogger;
    std::vector<std::string> m_errors;
public:
    static ErrorLogger* getLogger();
    static void writeError(std::string textError);
    void addError(std::string textError);
    void storeErrors();
    void printErrors();
private:
    ErrorLogger();
    void loadErrorrs();
};

#endif //PROJECT_ERRORLOGGER_H
