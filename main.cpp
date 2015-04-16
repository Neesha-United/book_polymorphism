#include <iostream>
#include <string>
#include "book.h"
#include "TextBook.h"
#include "Novel.h"
int main()
	{

	string author, email, gender;
    string subject;
    string name;
    string genre;
	string level, teacher;
    int choice;
    bool cover;
    int quantity;
    int price;

    cout<< "Enter Name, gender and Email Address of Author"<<endl;
    cout<<"Name: ";
	getline(cin, author);
	cout<<"Gender: ";
    getline(cin,gender);
    cout<<"Email: ";
    getline(cin,email);

    cout<<"Enter Name, price and quantity of book"<<endl;
    cout<<"Name of Book: ";
    getline (cin,name);
    cout<<"Price in whole number: ";
    cin>> price;
    cout<<"Quantity in whole number: ";
    cin>>quantity;
      Author newAuthor(author,email, gender );


      cout<<"Choose 1 for Novel and 2 for Textbook"<<endl;
      cin>>choice;
      if (choice==1)
      {

      	cout<<"Enter 1 if book is hard cover \n Enter 0 if book is not hard cover: ";
      	cin>>cover;
      	cout<<"Enter the genre of book: "<<endl;
      	cin>>genre;
      	Novel newNovel(name, newAuthor, price, quantity, cover, genre );
      	Book *novel=&newNovel;

      	cout<<novel->tostring()<<endl;
      	cout<<newAuthor.tostring();



      }
      else{
      	cout<<"Enter Subject, Level and Teacher of textbook"<<endl;
      	cin.get();
      	cout<<"Enter the subject of Text book: ";
      	getline(cin, subject);
      	cout<<"Enter which level are you studying: ";
      	getline(cin, level);
      	cout<<"Please mention the name of subject teacher: ";
      	getline(cin, teacher);
      	TextBook newText(name, newAuthor, price, quantity, subject, level, teacher );
      	Book *text=&newText;
      	cout<<text->tostring()<<endl;
        cout<<newAuthor.tostring();


      }




}

