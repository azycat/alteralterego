#include <profile.h>
#include <AE_stats.h>
#include <map>
#include <string>
#include <list>

/* Profile class
 * Stores multiple stats, maps them to an string ID key
 * that can be used to access them easily
 */

//creates a new profile with all the default stats in the Alter Ego game
void Profile::makeDefaultProfile(std::string profileName){
    AE_Stats aes;
    this->_profileStat[aes._rel.getID()] = aes._rel; // relationship [REL]
    this->_profileStat[aes._occ.getID()] = aes._occ; // occupation [OCC]
    std::list<Stat> basicStatList = aes.listBasicStats();
    for(Stat s : basicStatList){
        this->_profileStat[s.getID()] = s;
    }
    this->_profileName = profileName;
}

// adds a stat to the profile if key is unique... will probably not need to use this for AE
void Profile::addStatToProfile(Stat stat){
    if( this->_profileStat.count(stat.getID()) != 1  { // ID does not already exist in profile
        this->_profileStat[stat.getID()] = stat;
}

Stat Profile::getStat(std::string ID){
    return this->_profileStat[ID];
}

std::string Profile::getStatName(std::string ID){
    return this->_profileStat[ID].getName();
}

int Profile::getStatValue(std::string ID){
    return this->_profileStat[ID].getValue();
}

std::string Profile::getStatID(Stat stat){
    return stat.getID();
}

void Profile::setProfileName(std::string newName){
    this->_profileName = newName;
}

std::string Profile::getProfileName(){
    return this->_profileName;
}

void Profile::resetProfile() {
    this->_profileStat.clear();
}




//old code preserved here for you to laugh at
/* // familial [FM] = 50
    _profileStat[aes._fm.getID()] = aes._fm;
    _profileStat[aes._fm.getID()].setValue(50);
    //intellectual [IN] = 50
    _profileStat[aes._in.getID()] = aes._in;
    _profileStat[aes._in.getID()].setValue(50);
    //physical [PH] = 30
    _profileStat[aes._ph.getID()] = aes._ph;
    _profileStat[aes._ph.getID()].setValue(30);
    //Social [SC] = 50
    _profileStat[aes._sc.getID()] = aes._sc;
    _profileStat[aes._sc.getID()].setValue(50);
    //Vocational [VC] = 54
    _profileStat[aes._vc.getID()] = aes._vc;
    _profileStat[aes._vc.getID()].setValue(54);
    //Calmness [CA] = 50
    _profileStat[aes._ca.getID()] = aes._ca;
    _profileStat[aes._ca.getID()].setValue(50);
    //Expression [EX] = 50
    _profileStat[aes._ca.getID()] = aes._cn;
    _profileStat[aes._ca.getID()] = aes._cn;

    _profileStat[aes._gn.getID()] = aes._gn;
    _profileStat[aes._hp.getID()] = aes._hp;
    _profileStat[aes._th.getID()] = aes._th;
    _profileStat[aes._tr.getID()] = aes._tr;

    void Profile::makeDefaultProfile(std::string profileName){
    AE_Stats aes;
    _profileStat[aes._rel.getID()] = aes._rel; // relationship [REL]
    _profileStat[aes._occ.getID()] = aes._occ; // occupation [OCC]
    //std::list<int> basicStatValues = { 50, 50, 30, 50, 54, 50, 50, 50, 50, 50, 50 };
    std::list<Stat> basicStatList = aes.listBasicStats();
    //std::list<int>::iterator it = basicStatValues.begin();
    for(Stat s : basicStatList){
        _profileStat[s.getID()] = s;
        //_profileStat[s.getID()].setValue(*it);
        //++it;
    }
    this->_profileName = profileName;
}
*/