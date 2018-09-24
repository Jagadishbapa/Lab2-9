// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
    cout << "cows size  :  " << cows.size() << endl;
    cout << "cows sum   :  " << cows.sum() << endl;
	cout << "cows list  :  " << cows << endl << endl;

	cows.removeFirst();
    cout << "cows size  :  " << cows.size() << endl;
    cout << "cows sum   :  " << cows.sum() << endl;
	cout << "cows list  :  " << cows << endl << endl;

	List horses(cows);
    cout << "cows size  :  " << cows.size() << endl;
    cout << "cows sum   :  " << cows.sum() << endl;
	cout << "cows list  :  " << cows << endl;

    cout << "horses size  :  " << horses.size() << endl;
    cout << "horses sum   :  " << horses.sum() << endl;
	cout << "horses list:  " << horses << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
    cout << "cows size  :  " << cows.size() << endl;
    cout << "cows sum   :  " << cows.sum() << endl;
	cout << "cows list  :  " << cows << endl;

    cout << "horses size  :  " << horses.size() << endl;
    cout << "horses sum   :  " << horses.sum() << endl;
	cout << "horses list:  " << horses << endl << endl;

	List pigs;
    cout << "cows size  :  " << cows.size() << endl;
    cout << "cows sum   :  " << cows.sum() << endl;
	cout << "cows list  :  " << cows << endl;

    cout << "horses size  :  " << horses.size() << endl;
    cout << "horses sum   :  " << horses.sum() << endl;
	cout << "horses list:  " << horses << endl;

    cout << "pigs size  :  " << pigs.size() << endl;
    cout << "pigs sum   :  " << pigs.sum() << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	pigs = cows;
    cout << "cows size  :  " << cows.size() << endl;
    cout << "cows sum   :  " << cows.sum() << endl;
    cout << "cows list  :  " << cows << endl;

    cout << "horses size  :  " << horses.size() << endl;
    cout << "horses sum   :  " << horses.sum() << endl;
    cout << "horses list:  " << horses << endl;

    cout << "pigs size  :  " << pigs.size() << endl;
    cout << "pigs sum   :  " << pigs.sum() << endl;
    cout << "pigs list  :  " << pigs << endl << endl;

	pigs = horses;
    cout << "cows size  :  " << cows.size() << endl;
    cout << "cows sum   :  " << cows.sum() << endl;
    cout << "cows list  :  " << cows << endl;

    cout << "horses size  :  " << horses.size() << endl;
    cout << "horses sum   :  " << horses.sum() << endl;
    cout << "horses list:  " << horses << endl;

    cout << "pigs size  :  " << pigs.size() << endl;
    cout << "pigs sum   :  " << pigs.sum() << endl;
    cout << "pigs list  :  " << pigs << endl << endl;

    // Testing insertAsLast
    cows.insertAsLast(3.14);
    cout << "cows size  :  " << cows.size() << endl;
    cout << "cows sum   :  " << cows.sum() << endl;
    cout << "cows list  :  " << cows << endl << endl;

    horses = cows;
    horses.removeFirst();
    horses.insertAsLast(123.45);
    cout << "horses size  :  " << horses.size() << endl;
    cout << "horses sum   :  " << horses.sum() << endl;
    cout << "horses list  :  " << horses << endl << endl;

    // Using insertAsLast to add an item to an empty list
    List chickens;
    cout << "chickens size  :  " << chickens.size() << endl;
    cout << "chickens sum   :  " << chickens.sum() << endl;
    cout << "chickens list  :  " << chickens << endl << endl;

    chickens.insertAsLast(45.6);
    cout << "chickens size  :  " << chickens.size() << endl;
    cout << "chickens sum   :  " << chickens.sum() << endl;
    cout << "chickens list  :  " << chickens << endl << endl;


	cout << "End of code" << endl;

	return 0;
}

