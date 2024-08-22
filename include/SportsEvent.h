#ifndef SPORTSEVENT_H
#define SPORTSEVENT_H
#include<string>
#include <Event.h>
#include<ValidateEvent.h>
  #include "SportsTicket.h"

using namespace std;

class SportsEvent : public Event
{
   protected:
 string team[2];
  static int char_num;
    public:
    //SportsEvent();
     SportsEvent(SportsTicket*ticket);
     // double get_price()override;
      //void set_price(double price)override;
    void display_event()override;
    void set_teams(const string &team1,const string &team2 );
    string get_team1();
    string get_team2();
void fill_data()override;

};

#endif // SPORTSEVENT_H
