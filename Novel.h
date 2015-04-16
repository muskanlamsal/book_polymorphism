/*Program: Novel interface
Author: Muskam Lamsal
Date: 16th April 2015*/

#include <iostream>
#include "Book.h"

using namespace std;

class Novel : public Book
{
private:
    bool isHardCover;
    string genre;
    string publisher;
public:
    Novel(string, Author , float , int, bool , string , string);
    bool getCover();
    string getGenre();
    string getPublisher();
    string toString();

};

