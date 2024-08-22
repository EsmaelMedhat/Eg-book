#ifndef SPORTSTICKET_H
#define SPORTSTICKET_H

#include <Ticket.h>

class SportsTicket : public Ticket
{
    public:
virtual void set_chair(int chair)=0;
virtual int get_chair()=0;
virtual void set_teams(string Team1,string team2)=0;
 string get_team1();
  string get_team2();
       protected:
int chair;
string Teams[2];
};

#endif // SPORTSTICKET_H
