#include <iostream>
#include<SportsEvent.h>
#include<NormalTicket.h>
#include<Ticket.h>
#include<FootBallMatchTicket.h>
using namespace std;
SportsEvent m(new FootBallMatchTicket);
SportsEvent g(new FootBallMatchTicket);

int main() {
m.fill_data();
m.set_teams("ahly","Zamalek");
m.get_ticket()->display();
m.display_event();


 return 0;
}

