
#include<iostream>
#include "author.h"
#ifndef BOOK_H
#define BOOK_H

using namespace std;

class Book{
	private:
		string name_of_book;
		Author authr;
	protected:
		int price;
		int quantity;
 	public:


			string getName();

			Author getAuthr();

			void setPrice(int bookPrice);

			int getPrice();

			void setQuantity(int bookQuantity);


			int getQuantity();

			virtual string tostring()=0;

};
	#endif // BOOK_H

