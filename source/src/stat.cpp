#include "stat.h"
#include <string>
#include <stdio.h>

/* Stat class
 * store and keeps track of stats in the Alter Ego game
 */

Stat::Stat(const std::string &ID, int n, std::string name){
    if(n<=this->MAX_VALUE&&n>this->ERROR){
        this->_statValue = n;
        this->_statID = ID;
        this->_statName = name;
    }
}

// makes a copy of an existing stat with a different ID
Stat::Stat(Stat &copy, const std::string &newID){
    if(newID!=copy._statID){
        this->_statValue = copy._statValue;
        this->_statID = newID;
        this->_statName = copy._statName;
    }
}

int Stat::getValue(){
    return this->_statValue;
}

std::string Stat::getID(){
    return this->_statID;
}

std::string Stat::getName(){
    return this->_statName;
}

// new value must be positive integer between 0-100
void Stat::setValue(int newValue){
    if( newValue <= this->MAX_VALUE && newValue > this->ERROR )
        this->_statValue = newValue;
}

void Stat::setName(std::string newName){
    this->_statName = newName;
}

// bumps stat value by a given positive or negative int. bumps to nearest max or min
void Stat::bumpValue(int bump){
    int newValue = (this->_statValue + bump);
    if( newValue < 0 ) {
        this->_statValue = 0;
    } else if(newValue > this->MAX_VALUE){
        this->_statValue = this->MAX_VALUE;
    } else {
        this->_statValue = newValue;
    }
}

void Stat::printValue(){
    printf("%", this->_statValue);
}

void Stat::printName(){
    printf("%s", this->_statName.c_str());
}

/* makes a new stat with string identifier key, integer value from 0-100, and a name
Stat::Stat(const std::string &ID, int n, std::string name){
    if(n<=this->MAX_VALUE&&n>this->ERROR){
        this->_statValue[ID] = n;
        this->_statName[ID] = name;
    }
    //this->_statValue.insert(std__1::make_pair(ID, n));
    //this->_statValue.insert(pair<std::string, int>(ID, n);
    //this->_statName.insert(pair<std::string, std::string>(ID, name);
}
// clears name and value associated with its ID
Stat::~Stat(){
    this->_statValue.clear();
    this->_statName.clear();
}


int Stat::getValue(std::string ID){
    return this->_statValue[ID];
}

void Stat::setValue(std::string ID, int set){
    this->_statValue[ID] = set;
}

void setName(string ID, string name){

}

void bumpValue(string ID, int bump);
void printValue(string ID);

**/

/* you can remove the letter limit later on, just want it for now
Stat::Stat(char c[], int n){
    assert(c!=NULL);
    assert(c[1]!='0'); //must be at least 2 characters
    assert(n>ERROR && n<= MAX_VALUE);

    value = n;

    if(c[2]=='\0'){ // ID is 2 letters long
        for( int i = 0; i < 2 ; i++ ){
            ID[i]=c[i];
        }
    }
    else{  // ID is 3 letters long, max
        for (int i = 0; i < 3; i++) {
            ID[i] = c[i];
        }
    }
}

Stat::~Stat() {
    delete[] ID;
}

Stat::Stat(Stat &copy){
    this->value = copy.value;
}

int Stat::getValue(){
    return value;
}

void Stat::setValue(int set){
    if(value>=0 && value <= MAX_VALUE){
        value = set;
    }
}*/
