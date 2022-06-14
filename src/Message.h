#pragma once

#include <iosfwd>
#include <string>

class Message{
public:
  Message(const std::string &m):message_(m) {}
  friend std::ostream& operator<<(std::ostream &os, Message &obj)
  {
    return obj.printObj(os);
  }


private:
  std::string message_;
  std::ostream& printObj(std::ostream &obj);

};