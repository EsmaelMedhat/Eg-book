#include<cstring>
#include "Ticket.h"
#include <iostream>
#include<random>
#include "extension.h"
   using namespace std;
    string Ticket::getName() const { return name; }
    string Ticket::getLocation() const { return location; }
   int Ticket::getID() const { return id; }
     int Ticket::generateUniqueID() {
        static random_device rd;
        static mt19937 gen(rd());
        static uniform_int_distribution<> dis(1, 1000000); // Adjust range as needed
        return dis(gen);
    }
    Ticket::Ticket() : id(generateUniqueID()) {}
  string Ticket::get_time(){return time;}
 string Ticket::get_date(){return date;}
 void Ticket::setName(const string& value) {
  append(value,name);
}
void Ticket::setLocation(const string& value) {
  append(value,location);
}
       void Ticket::set_time(const string& value) {   size_t length = value.length();
   append(value,time);
}
    void Ticket::set_date(const string& value) {
    append(value,date);
}
void Ticket::setPrice(double price) {
this->price=price;
}
// void Ticket::set_chair(int chair){
// this->chair=chair;
 //}
