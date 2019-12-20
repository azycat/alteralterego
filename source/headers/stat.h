/*
 *  A stat has a value from 1-100,
 *  and a 2-3 letter string identifier.
 *  You will probably want the identifier to be unique, heh.
 */

#ifndef STAT_H
#define STAT_H
#include <string>
//#include <map>

class Stat
{
private:
    std::string _statID;
    int _statValue;
    std::string _statName;
    //std::map<std::string, int> _statValue;
    //std::map<std::string, std::string> _statName;

public:
    static const int ERROR = -1;
    static const int MAX_VALUE = 100;
    Stat(const std::string &ID, int n, std::string name);
    Stat(Stat &copy, const std::string &newID);

    int getValue();
    std::string getID();
    std::string getName();
    void setValue(int newValue);
    void setName(std::string newName);

    void bumpValue(int bump);
    //Stat(const std::string &ID, int n, std::string name);
    //Stat(Stat &copy);
    //~Stat();
};



#endif //STAT_H
