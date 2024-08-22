#include "SportsEvent.h"
#include <iostream>
  #include "SportsTicket.h"
   using namespace std;
  #include "Event.h"
int SportsEvent::char_num=0;
SportsEvent::SportsEvent(SportsTicket*ticket){
    this->ticket=ticket;
   if(get_num_tickets()!=0)
     ticket->set_chair(++char_num);
 ticket->set_teams(team[0],team[1]);
 }
         void SportsEvent::set_teams(const string &Team1,const string &Team2){
        team[0]=Team1;
        team[1]=Team2;

                  }
        string SportsEvent::get_team1(){return team[0];}
        string SportsEvent::get_team2(){return team[1];}
      void SportsEvent:: display_event(){
cout<<"------------------------------"<<get_name()<<"-----------------------------------------------------\n\n";
cout<<"--------------------------"<<get_maker()<<"----------------------------------------------\n";
cout<<"              "<<   get_team1()<<"  vs    "<<get_team2()<<endl;
cout<<get_description()<<endl;
cout<<"Location  "<<getLocation()<<endl;
cout<<"Avaliable Tickets  :"<<get_num_tickets()<<endl;
cout<<"    Ticket   "<<get_price()<<endl;
      }
//SportsEvent::SportsEvent(){}
void SportsEvent::fill_data(){
Event::fill_data();
//cout



}
