#include "Event.h"
#include<cstring>
#include<ValidateEvent.h>
 void Event::set_name(const string &value){
  name= value;
    ticket->setName(name);
  }
    void Event::set_maker(const std::string& value) {
 maker= value;
  }
    void Event::set_num_tickets(int num_tickets) {
        this->num_tickets = num_tickets;
    }
    void Event::set_description(const string &value) {
description= value;
  }
void Event::setLocation(const string& value)
{
location= value;
  ticket->setLocation(location);
}
  void Event::set_price(double price){
  ticket->setPrice(price);
  price=ticket->get_price();
     this->price=price;
   }
    string Event::get_name() const { return name; }
    string Event::get_maker() const { return maker; }
    int Event::get_num_tickets() const { return num_tickets; }
    string Event::get_description() const { return description; }
   string Event::getLocation() const { return location; }
double Event::get_price(){
return price;
}
Ticket* Event::get_ticket(){
return ticket;
}
void Event::set_time(string &hours,string mintues,string second){
time=hours+":"+mintues+":"+second;
ticket->set_time(time);

}
    void Event::set_date(string &year,string month,string day)
    {
     date=year+"-"+month+"-"+day;
       ticket->set_date(date);
        }

string Event::get_date(){return date;}
    string Event::get_time(){return time;}
void Event::fill_data(){
 string name;
    string maker;
    int num_tickets;
    string description;
    double price=0;
    string location;
    string date,year,month,day ;
    string hours,mintue,second;

 ValidateEvent validation;
cout<<"                         please dive me Event data  \n\n";
cout<<" Name :";
cin>>name;
set_name(name);
cout<<" Maker:";
cin>>maker;
set_maker(maker);
cout<<" Numbers of tickets:";
cin>>num_tickets;
set_num_tickets(num_tickets);
cout<<" Price :";
cin>>price;
set_price(price);

cout<<" location:";
cin>>location;
setLocation(location);
cout<<" Date:  year month  day\n";
cin>>year>>month>>day;
set_date(year,month,day);
cout<<" Time:";
cin>>hours>>mintue>>second;
set_time(hours,mintue,second);

if(!validation.valiate_name(name)||!validation.Valid_date(get_date())||!validation.valiate_maker(maker))
{
 cout<<" Error ,please follow instructions\n";
fill_data();
}
}
