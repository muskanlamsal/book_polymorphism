/*Program: TextBook implementation
Author: Muskam Lamsal
Date: 16th April 2015*/

#include <iostream>
#include "TextBook.h"

using namespace std;

TextBook::TextBook(string name, Author author, float price, int quantity, string subject,string publisher,string edition)
{
			this->name=name;
			this->author=author;
			this->publisher=publisher;			
			setPrice(price);
			setQuantity(quantity);
		    setSubject(subject);
		    setEdition(edition);
}

void TextBook::setSubject(string subject)
{
    this->subject = subject;
}

void TextBook::setEdition(string edition)
{
    this->edition = edition;
}

string TextBook::getSubject()
{
    return subject;
}

string TextBook::getPublisher()
{
    return publisher;
}

string TextBook::getEdition()
{
    return edition;
}

string TextBook::toString()
{
    return "Subject " + subject + "\npublisher " + publisher + "\nedition " + edition + "\nAuthor " + Book::getAuthor().getName();
}
