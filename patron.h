/*
    Author:         Ashley Eubanks
    Section:        1103
*/

#ifndef PATRON_H
#define PATRON_H
#include "ride.h"
#define MAX_RIDES 100
#include <string>

using namespace std;


class Patron{

    string firstName;
    string lastName;
    int patronNumber;
    int numRides;
    int numTickets;
    Ride patronRides[MAX_RIDES];

    public:

       
        Patron();
        Patron(string, string, int, int, int, Ride*[]);
        Patron(const Patron&);
        
        string getFirstName();
        void setFirstName(string);

        string getLastName();
        void setLastName(string);

        int getPatronNumber();
        void setPatronNumber(int);

        Ride* getPatronRides();
        void addPatronRide(Ride);

        void displayName();
        
        int getNumTickets();
        void setNumTickets(int);

        void displayPatronData();

};

#endif