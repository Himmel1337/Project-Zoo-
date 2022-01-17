//
// Created by xkudla on 17/01/2022.
//


#include "Errorlogger.h"

ErrorLogger* ErrorLogger::s_errorLogger = nullptr;

ErrorLogger* ErrorLogger::getLogger(){
    if (s_errorLogger == nullptr){
        s_errorLogger = new ErrorLogger();
    }
    return s_errorLogger;
}

void ErrorLogger::writeError(std::string textError){
    std::ofstream file("ErrorLoger.txt", std::ios::app);
    if (file.is_open()){
        file << textError << std::endl;
    } else {
        std::cout << "File Error loger is not open" << std::endl;
    }
    std::cout << textError << std::endl;
    file.close();
}

void ErrorLogger::addError(std::string textError){
    m_errors.push_back(textError);
}

ErrorLogger::ErrorLogger(){
    loadErrorrs();
}

void ErrorLogger::loadErrorrs(){
    std::string text = "";

    std::ifstream file("ErrorLoger.txt");
    if (file.is_open()){
        while (getline(file, text)){
            m_errors.push_back(text);
        }
        file.close();
    } else {
        std::cout << "File is not open" << std::endl;
    }
}

void ErrorLogger::printErrors(){
    for (int i = 0; i < m_errors.size(); i++){
        std::cout << m_errors.at(i) << std::endl;
    }
}