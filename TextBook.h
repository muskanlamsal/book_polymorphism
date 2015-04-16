/*Program: TextBook interface
Author: Muskam Lamsal
Date: 16th April 2015*/

#include <iostream>
#include "Book.h"
#ifndef TEXTBOOK_H
#define TEXTBOOK_H


using namespace std;

class TextBook:public Book
{
private:
    string subject;
    string publisher;
    string edition;
public:
    TextBook(string, Author, float, int, string , string, string);
    void setSubject(string textSubject);
    void setEdition(string textEdition);
    string getSubject();
    string getPublisher();
    string getEdition();
    string toString();
};
#endif
