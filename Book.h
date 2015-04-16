/*Program: Book interface
Author: Muskam Lamsal
Date: 16th April 2015*/

#include <iostream>
#include "Author.h"
#ifndef BOOK_H
#define BOOK_H

using namespace std;

class Book{

private:
    float price;
    int quantity;

protected:
    string name;
    Author author;


public:
   
    void setPrice(float bookPrice);
    void setQuantity(int bookQuantity);
    string getName();
    Author getAuthor();
    float getPrice();
    int getQuantity();
    virtual string toString()=0;
};
#endif
