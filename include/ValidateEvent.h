#ifndef VALIDATEEVENT_H
#define VALIDATEEVENT_H
#include<string>

class ValidateEvent
{
    public:
   bool valiate_name(const std::string &name);
   bool valiate_maker( const std::string &maker);
    bool Valid_date(const std::string& userDateStr);
   bool Valid_Time(const std::string& userTimeStr) ;

    //Ticket*ticket;
//        string time;


};

#endif // VALIDATEEVENT_H
