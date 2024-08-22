#ifndef FOOTBALLMATCHTICKET_H
#define FOOTBALLMATCHTICKET_H

#include <SportsTicket.h>


class FootBallMatchTicket : public SportsTicket
{
    public:
 void set_chair(int chair)override;
 int get_chair()override;
 void set_teams(string Team1,string team2)override ;
 string get_team1();
  string get_team2();
void display()override;
FootBallMatchTicket(const string& name, const string& location, const string& time, const string& history, double price, int chair, const string& team1, const string& team2);
FootBallMatchTicket();
double get_price()override;

};

#endif // FOOTBALLMATCHTICKET_H
