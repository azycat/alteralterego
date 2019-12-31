#ifndef AE_STATS_H
#define AE_STATS_H
#include <stat.h>
#include <string.h>
#include <list>

/* Alter Ego Stats Header
 * Defines all the possible stats/parameters
 * in the MS-DOS game Alter Ego (1986)
 * Keys/IDs and variable names are listed here
 * for convenient reference
 */

/* Basic stats (values 1-100)
 * e.g. Stat _fm;
 *  Familial        (FM)
 *  Intellectual    (IN)
 *  Physical        (PH)
 *  Social          (SC)
 *  Vocational      (VC)
 *  Calmness        (CA)
 *  Confidence      (CN)
 *  Expression      (EX)
 *  Gentleness      (GN)
 *  Happiness       (HP)
 *  Thoughtfulness  (TH)
 *  Trustworthiness (TR)
 */

/* Relationship status (REL):
 * Stat _rel;
 * 0 - Unattached   (default)
 * 1 - Dating
 * 2 - Married
 * */

/* Occupation (OCC):
 * Stat _occ;
 * 0 - (NONE)
 */

struct AE_Stats{
    enum class Rel:int{
        Unattached,
        Dating,
        Married
    };
    enum class Occ:int{
        NONE
    };
    Stat _rel = Stat("REL", static_cast<int>(Rel::Unattached), "Relationship Status");
    Stat _occ = Stat("OCC", static_cast<int>(Occ::NONE), "Occupation");
    std::list<Stat> listBasicStats();
};

std::list<Stat> AE_Stats::listBasicStats(){
    std::list<Stat> basicStatList;
    basicStatList.push_front(Stat("FM", 50, "Familial"));
    basicStatList.push_front(Stat("IN", 50, "Intellectual"));
    basicStatList.push_front(Stat("PH", 30, "Physical"));
    basicStatList.push_front(Stat("SC", 50, "Social"));
    basicStatList.push_front(Stat("VC", 54, "Vocational"));
    basicStatList.push_front(Stat("CA", 50, "Calmness"));
    basicStatList.push_front(Stat("CN", 50, "Confidence"));
    basicStatList.push_front(Stat("EX", 50, "Expression"));
    basicStatList.push_front(Stat("GN", 50, "Gentleness"));
    basicStatList.push_front(Stat("HP", 50, "Happiness"));
    basicStatList.push_front(Stat("TH", 50, "Thoughtfulness"));
    basicStatList.push_front(Stat("TR", 50, "Trustworthiness"));

    return basicStatList;
}

#endif //AE_STATS_H

/** old code here for your enjoyment
 * Life::Life(){
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
*/