#ifndef AE_QUESTIONS_H
#define AE_QUESTIONS_H
#include <string>
#include <map>

struct AE_Questions{
    std::map<std::string, bool> questionTF;

    std::string Q1
        = "I will probably try to answer these questions honestly";
    std::string Q2
        = "I am likely to speak whatever comes to mind.";
    std::string Q3
        = "I am a light sleeper who stirs at even the slightest sound";
    std::string Q4
        = "Revenge is sweet.";
    std::string Q5
        = "I often feel slow, tired, and down in the dumps.";
    std::string Q6
        = "An important part of every job is knowing whom to impress.";
    std::string Q7
        = "I am fascinated by car accidents and other disaster scenes.";
    std::string Q8
        = "The people who know me best like me as a person"
};






#endif //AE_QUESTIONS_H
