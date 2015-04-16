/*Program: Novel implementation
Author: Muskam Lamsal
Date: 16th April 2015*/

#include <iostream>
#include "Novel.h"
#include <string>

using namespace std;

Novel::Novel(string name, Author author, float price, int quantity, bool isHardCover, string genre, string publisher)
{
			this->name=name;
			this->author=author;
			this->genre=genre;
			this->publisher=publisher;			
			this->isHardCover=isHardCover;
			setPrice(price);
			setQuantity(quantity);
}

bool Novel::getCover()
{
    return isHardCover;
}

string Novel::getGenre()
{
    return genre;
}

string Novel::getPublisher()
{
    return publisher;
}

string Novel:: toString()
{
    string cover;
    if (getCover() == 1)
        cover = "Yes";
    else
        cover = "no";

    return "Cover " + cover + "\nGenre " + getGenre() + "\nPublisher " + getPublisher() + "\nAuthor " + Book::getAuthor().getName();
}
