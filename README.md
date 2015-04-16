The assignment on polymorphism:
The task that are done for implementing polymorphism in book and author project:
1. Book is a base class from where Novel and TextBook classes are derived.
2. The Book class is made abstract by using virtual keyword on tostring function. The tostring function now should be included in every derived class.
3. No constructors are required in Book since the class is abstract, therefore constructures are removed.
5. Since there are no constructors in base class(book), therefore, the derived constructors are removed from derived class.
6. In main class:
i). No objects of base class is required.
ii). Objects are made for novel and textbook.
iii). The pointer object using base class is made for implementing polymorphism. 
They are: Book *novel=&newNovel;
	  Book *text=&newText;
iv). tostring function now has polymorphic behaviour.



