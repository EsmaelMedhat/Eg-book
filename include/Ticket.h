#ifndef TICKET_H
#define TICKET_H
#include <iostream>
using namespace std;
class Ticket {
public:
    void setPrice(double value) ;
    string getName() const ;
    void setName( const string& value);
    string getLocation() const;
    void setLocation(const string& value);
    int getID() const;
    void set_time(const string& event);
    void set_date(const string& event);
    string get_time();
    string get_date() ;
    virtual double get_price()=0;
    virtual void display()=0;
  protected:
   char name[20];
   char location[20];
    int id;
    double price;
    char time[20];
    char date[20];

private:
        static int generateUniqueID();
public:
    Ticket();
    virtual ~Ticket() = default;
};

#endif // TICKET_H

