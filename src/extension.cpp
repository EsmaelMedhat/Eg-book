#include "extension.h"
#include<string>
#include<cstring>
void append(std::string value,char*arr){
   size_t length = value.length();
  size_t max_name_length = sizeof(arr) - 1;  // Account for null terminator
  if (length >= max_name_length) {
    length = max_name_length;  // Truncate if necessary
  }
  strncpy(arr, value.c_str(), length);
  arr[length] = '\0';


}
