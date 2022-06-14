#include "Message.h"
#include <iostream>
#include <string>

std::ostream &Message::printObj(std::ostream &os)
{
  os<<"This is print check [Message][printObj]"<<std::endl;
  os<<message_;
  return os;
}