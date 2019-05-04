#include <iostream>
#include <conio.h>

using namespace std;

int main()
 {
 	char choice;
 	double billA, billB, demandwtrchrg, consmwtrchrg, latewtrchrg, lastmeter, nowmeter;
 	
 	demandwtrchrg = 35;
 	consmwtrchrg = 1.10;
 	latewtrchrg = 20;
 	
 	cout << "Put previous water reading = "; cin >> lastmeter;
 	cout << "Put recent water reading = "; cin >> nowmeter;
 	cout << "do you pay you last billing? [y]epp or [n]ahh= "; cin >> choice;
 	
 	
 	switch (choice)
 	{
 		case 'A':
 		case 'a':
 			 billA = (demandwtrchrg+nowmeter*consmwtrchrg);
 			 
 			 cout << "balance is p" << billA << endl;
 			 break;
 			 
 	    
 	    case 'B':
 	    case 'b':
 	         billB = (demandwtrchrg+lastmeter*consmwtrchrg)+(demandwtrchrg+nowmeter*consmwtrchrg)+latewtrchrg;
 	         
 	         cout << "balance is p" << billA << endl;
 			 break;
	 }
 	
    _getch();
    return 0;
}
    
    

