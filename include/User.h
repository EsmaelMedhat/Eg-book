#ifndef USER_H
#define USER_H
#include <string>
#include <vector>
#include<Ticket.h>
using namespace std;
class User {
public:
      void set_name(const string& name);
    void set_email(const string& email) ;
        void set_password(const string& password) ;
    void set_numoftickets();
     void set_id(string id);
    string get_name() const ;
    string get_email() const ;    string get_id() const ;
    bool is_admin() const;
   int get_numoftickets();
   vector<Ticket*>get_Ticket();
   void display_user_tickets();
   void add_ticket(Ticket*ticket);

private:
    string _name;
    string _email;
    string _password;
    int numberoftickets;
    string _id;
    bool _is_admin=true;
    vector<Ticket*>tickets;  // Vector to store ticket IDs

  };


#endif // USER_H
