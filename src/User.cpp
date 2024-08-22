#include "User.h"
 #include<Ticket.h>
      void User::set_name(const string& name) {
        _name = name;
    }
    void User::set_email(const string& email) {
                _email = email;
    }
        void User::set_password(const string& password) {
        // Implement hashing logic here (replace with actual hashing)
        // _password = hash(password);  // Placeholder for actual hashing
        //throw std::runtime_error("Password cannot be set in plain text. Use a secure hashing mechanism.");
_password=password;
    }
    void User::set_numoftickets(){
      if(tickets.empty())
       numberoftickets=0;
    else numberoftickets=tickets.size()-1;
    }
    void User::set_id(string id){
    _id=id;
    }

    string User::get_name() const { return _name; }
    string User::get_email() const { return _email; }
    string User::get_id() const { return _id; }
    bool User::is_admin() const { return _is_admin; }
    int User::get_numoftickets(){return numberoftickets;}
     vector<Ticket*> User::get_Ticket(){return tickets;}
    void User::display_user_tickets(){
    for(Ticket*t:tickets)
{
    t->display();
}
    }
void User::add_ticket(Ticket*ticket)
  {
  tickets.push_back(ticket);
  }


