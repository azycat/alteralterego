#ifndef PROFILE_H
#define PROFILE_H

#include <map>
#include <string>
class Stat;

class Profile{
public:
    void makeAEDefaultProfile(std::string profileName); //makes new profile with Alter Ego default stats
    void setProfileName(std::string input);
    void addStatToProfile(Stat s, std::string str);


    Stat getStat(std::string ID);
    std::string getProfileName();


private:
    std::map<std::string, Stat> _statProfile;
    std::string _profileName;
};

#endif //PROFILE_H
