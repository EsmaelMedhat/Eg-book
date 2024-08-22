#ifndef EVENT_H
#define EVENT_H
#include <iostream>
#include<Ticket.h>
using namespace std;
class Event {
public:
    void set_name(const string &value);
    void set_maker(const std::string& maker);
    void set_num_tickets(int num_tickets);
    void set_description(const string &description);
      double get_price();
      void set_price(double price);
    virtual void display_event()=0;
    string get_name() const;
    string get_maker() const ;
    int get_num_tickets() const ;
    string get_description() const ;
   string getLocation() const;
    void setLocation(const string& value);
    void set_time(string &hours,string mintues,string second);
    void set_date(string &year,string month,string day);
    string get_date();
    string get_time();
    virtual void fill_data();

    Ticket* get_ticket();

    protected:
    string name;
    string maker;
    int num_tickets;
    string description;
    double price;
    Ticket*ticket;
    string location;
    string date ;
    string time;
};

#endif // EVENT_H
