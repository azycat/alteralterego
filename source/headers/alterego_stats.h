#ifndef __ALTEREGO_LIFE_
#define _ALTEREGO_LIFE_
#include <'stat.h'>

class Life
{
private:
    /* Relationship status:
     * 0 - Unattached
     * 1 - Dating
     * 2 - Married */
     int REL;

    /* Occupation
     * 0 - (NONE)
     */
    int OCC;

    /* Array of basic stats affected by gameplay
     *  0 - Familial        (FM)
     *  1 - Intellectual    (IN)
     *  2 - Physical        (PH)
     *  3 - Social          (SC)
     *  4 - Vocational      (VC)
     *  5 - Calmness        (CA)
     *  6 - Confidence      (CN)
     *  7 - Expression      (EX)
     *  8 - Gentleness      (GN)
     *  9 - Happiness       (HP)
     * 10 - Thoughtfulness  (TH)
     * 11 - Trustworthiness (TR)
     * eventually u should make a fxn that will create an array of
     * possible stats for the user with types of each stat stored =)
     */
    int stats[11];


public:
    static const int ERROR = -1;
    static const int MAX_VALUE = 100;
    Life(); // Make a new life

    int getStat(char c[]);
    void setStat(char c[], int value);
    void bumpStat(char c[], int bump);

};

Life::Life(){
    REL = 0;
    OCC = 0;

    //initialize default stats
    int def[] = { 50, 50, 30, 50, 54,
                50, 50, 50, 50, 50,
                50 };
    for( int i = 0; i<=10; i++ ){
        stats[i] = def[i];
    }
}

int Life::getStat(char c[]){
    if(c[2]!='\0'||c[1]=='\0'||c[0]=='\0'){ // if input is not 2 letters long
        return ERROR;
    }

    if(c=="FM")
        return FM;
    else if(c=="IN")
        return IN;
    else if(c=="PH")
        return PH;
    else if(c=="SC")
        return SC;
    else if(c=="VC")
        return VC;
    else if(c=="CA")
        return CA;
    else if(c=="CN")
        return CN;
    else if(c=="EX")
        return EX;
    else if(c=="GN")
        return GN;
    else if(c=="HP")
        return HP;
    else if(c=="TH")
        return TH;
    else if(c=="TR")
        return TR;

    return ERROR; //return error code if input is something else
}

void setStat(){

}
#endif //_ALTEREGO_LIFE_