#include "FootBallMatchTicket.h"

 void FootBallMatchTicket::set_chair(int chair){
 this->chair=chair;
 }
 int FootBallMatchTicket::get_chair(){return chair;};
 void FootBallMatchTicket::set_teams(string Team1,string Team2){Teams[0]=Team1;Teams[1]=Team2;}
 string FootBallMatchTicket::get_team1(){return Teams[0];}
  string FootBallMatchTicket::get_team2(){return Teams[1];}
void FootBallMatchTicket::display(){
        cout << "Ticket ID: " << getID() << endl;
        cout << "Name: " << getName() << endl;
        cout << "Location: " << getLocation() << endl;
        cout << "Time: " << get_time() << endl;
        cout << "History: " << get_date() << endl;
        cout << "Price: $" << get_price() << endl;
        cout << "Chair: " << get_chair() << endl;
        cout << "Teams: " << get_team1() << " vs " << get_team2() << endl;
    }
FootBallMatchTicket::FootBallMatchTicket(){}

    FootBallMatchTicket::FootBallMatchTicket(const string& name, const string& location, const string& time, const string& history, double price, int chair, const string& team1, const string& team2) {
        setName(name);
        setLocation(location);
        set_time(time);
        set_date(history);
        setPrice(price);
        set_chair(chair);
        set_teams(team1, team2);
    }

double FootBallMatchTicket::get_price(){return price/2;}



