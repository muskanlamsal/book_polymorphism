/*Program: Book implementation
Author: Muskam Lamsal
Date: 16th April 2015*/

#include <iostream>
#include "Book.h"
using namespace std;

void Book::setPrice(float price)
{
    this->price=price;
}
void Book::setQuantity(int quantity)
{
    this->quantity = quantity;
}

string Book::getName()
{
    return name;
}
Author Book::getAuthor()
{
    return author;
}
float Book::getPrice()
{
    return price;
}
int Book::getQuantity()
{
    return quantity;
}

