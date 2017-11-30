#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class card {
private:
    int value;
public:
   virtual void action();
};

class community : public card {
private:
    int value;
public:
    void action();
};

class chance : public card
 {
private:
    int value;
public:
    void action();
};



#endif // HEADER_H_INCLUDED
