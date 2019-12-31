#ifndef PROFILE_H
#define PROFILE_H
#include <map>
#include <string>
class Stat;

class Profile{
public:
    // default profile constructor for Alter Ego
    void makeDefaultProfile(std::string profileName);

    void addStatToProfile(Stat stat);
    void resetProfile();

    Stat getStat(std::string ID);
    std::string getStatName(std::string ID);
    int getStatValue(std::string ID);

    std::string getStatID(Stat stat);

    void setProfileName(std::string newName);
    std::string getProfileName();

private:
    std::map<std::string, Stat> _profileStat;
    std::string _profileName;
};

#endif //PROFILE_H
