#include<iostream>
#include "book.h"

using namespace std;


			string Book:: getName()
			{
				return name_of_book;
			}
			Author Book:: getAuthr()
			{
				return authr;
			}
			void Book:: setPrice(int bookPrice)
			{
				price=bookPrice;
			}
			int Book:: getPrice()
			{
				return price;
			}
			void Book:: setQuantity(int bookQuantity)
			{
				quantity=bookQuantity;

			}
			int Book:: getQuantity()
			{
				return quantity;
			}




