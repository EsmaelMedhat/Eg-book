#include "ValidateEvent.h"
#include <ctime>
#include <sstream>
#include <iomanip>

bool ValidateEvent::Valid_date(const std::string& userDateStr) {
    // Get the current date
    std::time_t now = std::time(nullptr);
    std::tm* currentDate = std::localtime(&now);

    // Parse user-provided date string (format YYYY-MM-DD)
    std::tm userDate = {};
    std::istringstream ss(userDateStr);
    ss >> std::get_time(&userDate, "%Y-%m-%d");

    if (ss.fail()) {
        //std::cerr << "Failed to parse date string" << std::endl;
        return false;
    }

    // Compare dates
    if (std::mktime(&userDate) > std::mktime(currentDate)) {
        return true;
    }

    return false;
}

bool ValidateEvent::Valid_Time(const std::string& userTimeStr) {
    // Get the current time
    std::time_t t = std::time(nullptr);
    std::tm* currentTime = std::localtime(&t);

    // Parse user-provided time string (format HH:MM:SS)
    std::tm userTime = {};
    std::istringstream ss(userTimeStr);
    ss >> std::get_time(&userTime, "%H:%M:%S");

    if (ss.fail()) {
       // std::cerr << "Failed to parse time string" << std::endl;
        return false;
    }

    // Compare the times
    if (userTime.tm_hour > currentTime->tm_hour) return true;
    if (userTime.tm_hour == currentTime->tm_hour && userTime.tm_min > currentTime->tm_min) return true;
    if (userTime.tm_hour == currentTime->tm_hour && userTime.tm_min == currentTime->tm_min && userTime.tm_sec > currentTime->tm_sec) return true;

    return false;
}

bool ValidateEvent::valiate_name(const std::string &name){

    for (char c : name) {
        if (std::isdigit(c)) {
            return false;        }
    }

    return true;
}
   bool ValidateEvent::valiate_maker( const std::string &maker){
     for (char c : maker) {
        if (std::isdigit(c)) {
            return false;        }
    }

    return true;


   }



