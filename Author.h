/*Program: Author interface
Author: Muskam Lamsal
Date: 16th April 2015*/

#include <iostream>
#ifndef AUTHOR_H
#define AUTHOR_H


using namespace std;

class Author{
private:
    string name;
    string gender;
    string email;

public:
    Author(string authorName, string authorGender, string authorEmail);
    Author();
    void setEmail(string authorEmail);
    string getName();
    string getGender();
    string getEmail();
    string toString();
};
#endif 
