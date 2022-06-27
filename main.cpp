
// Language review is complete

// Now begin study of data structures

// What's a Data Structure?

// 	an object that stores a collection of other objects
// 	data structures are sometimes called "containers"

// What are the common data types?
// 	List
// 	Set
// 	Map
// 	Stack
// 	Queue
// 	Priority Queue

// What's our approach to studying data structures?

// 	1. learn the operations and behavior of each type
// 	2. learn how they can be used to solve problems
// 	3. first use the data types in the standard library
// 	4. later learn how each type is implemented


// List Data Type (4.1, 4.6, 4.9)

// What's a List?

// 	1. a container that holds objects
// 	2. each object has an index or position
// 	3. objects are kept in the order given by the user

// What operations are supported by a List?
// What's the abstract interface for a List?

// 	size();
// 	append(item);
// 	remove(index);
// 	insert(index, item);
// 	get(index);
// 	set(index, item);

// What happens to the item at index 2 when the item at index 1 is removed?

// What happens to the item at index 2 when an item is inserted at index 2?

// Classwork
// You may work with a partner.

// What does the program print?

  List L1;
  L1.append(1);
  L1.append(2);
  L1.append(4);
  print(L1);

	List L2;
	for (int i = 0; i < L1.size(); i++)
	    L2.insert(0, L1.get(i));
	print(L2);

	for (int i = 0; i < L1.size(); i++)
	    L2.insert(2*i, L1.get(i));
	print(L2);

	for (int i = 0; i < L1.size(); i++)
	    L2.set(i, L1.get(i));
	print(L2);

	int len = L2.size();
	for (int i = 0; i < len; i++)
	    L2.remove(i);
	print(L2);


// Lists in the C++ Library

	#include <vector>
	std::vector

	#include <list>
	std::list

// What are some of the operations supported by std::vector?

	vector<string> junk;

	string stud = junk[1];

	size_t size() const;
	void push_back ( const ItemType& item );  // append
	iterator erase ( iterator index );
	iterator insert ( iterator index, const ItemType& item );
	ItemType& at ( int index );
	ItemType& operator[] ( int index );

// DEMO	(write reverse method using indexes)


// What are some of the operations supported by std::list?

// 	size_t size() const;
// 	void push_back ( const ItemType& item );
// 	iterator erase ( iterator index );
// 	iterator insert ( iterator index, const ItemType& item );


// DEMO	(change vector to list)

// Iterators

// How do you iterate over an array?

	for (int i = 0; i < length; i++)
	    print(array[i]);


// How do you iterate over a list?
// Why do you need an Iterator?
// Why can't you use indexing?

// 	some containers don't support indexing
// 	internal structure can't be indexed efficiently

// What's an Iterator?

// 	a pointer that steps through the objects in a container

// What operations are supported by an Iterator?
// What's the abstract interface for an Iterator?

// 	create();
// 	access();
// 	increment();
// 	compare();


// How do you create and use an Iterator on a list?

// 	list<int> items;

	list<int>::iterator i = items.begin();

	while (i != items.end()) {
	    cout << *i;
	    i++;
	}


// DEMO	(rewrite reverse using iterators)


// Why List?

// A 'vector' can do most anything a 'list' can do.
// A 'list' cannot do indexing, while a 'vector' can.
// Why is a 'list' useful?


// DEMO	(time for insert on vector vs list)

