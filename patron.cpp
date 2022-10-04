/* 
    Author:         Ashley Eubanks 
    Section:        1103
    Description:    It must have a default constructor, parameterized constructor, and copy constructor 
                    It is responsible for getting and setting patron first name, last name, the patron 
                    number the number of rides that a patron has tickets for, the number of REMAINING 
                    tickets for the patron and an array of rides that a patron has signed up for (max size 100)
     
*/ 

#include "patron.h"

/*________________________________________________________________________
-------------------Constructor & Destructor Documentation ------------------------------
--------------------------------------------------------------------------*/

Patron::Patron(){
    //  default constructor. Choose values
    firstName = "Billy";
    lastName = "Bob";
    patronNumber = -29;
    numTickets = -13;
    int ticketsRemaining = -31;
    Ride patronRides[MAX_RIDES];
    // DID I DO THIS RIGHT OR DOES IT NEED BE SETTERS // ARRAY POINTER DONE RIGHT??

}

Patron::Patron(string newFirst, string newLast, int newPNum, int rideTickets, int ticketsLeft, Ride* patronRides[]){
    /*
        Parameters: first;      string first name to set patron first 
                    last;       string last name to set patron last
                    pNum;       int patron number
                    numR;       int number of rides the user has tickets for
                    numT;       int number of tickets user has remaining
                    patronR;    pointer to array of rides
    */
    setFirstName(newFirst);
    setLastName(newLast);
    setPatronNumber(newPNum);
    setNumTickets(rideTickets);


   //   HOW TO DO THE TICKETS REMAINING AND RIDE???

}

Patron::Patron(const Patron& old){
    //  copy constructor
    //  Make sure to create a loop using the old patron's number of rides to set all the rides in the array. Set all appropriate properties
    setFirstName(old.firstName);
    setLastName(old.lastName);
    setPatronNumber(old.patronNumber);
    setNumTickets(old.numTickets);
    /*
    for(int i = 0; i < old.numTickets; i++){
        patronRides[i] = old.newPRides[i];
    }*/
    //  HOW TO DO THE TICKETS REMAINING AND RIDE???
}


/*________________________________________________________________________
-------------------Member Function Documentation------------------------------
--------------------------------------------------------------------------*/

string Patron::getFirstName(){
    //  getter. Return's first name as string
    return firstName;;
}
void Patron::setFirstName(string newFirst){
    //  setter. Parameters: first; string firstname to set patron first
    firstName = newFirst;
}


string Patron::getLastName(){
    //  getter. Returns last name as string
    return lastName;;
} 
void Patron::setLastName(string newLast){
    //  setter. Parameters: last name; a string
    lastName = newLast;
}


int Patron::getPatronNumber(){
    //  getter. Returnes patron number, and int
    return patronNumber;;
}
void Patron::setPatronNumber(int newPNum){
    //  setter. Parameters: patron number; an int identifier number
    patronNumber = newPNum;
}


Ride* Patron::getPatronRides(){
    //  getter for patron rides array. returns a pointer to the patron's ride array
    //  NEED HELP ON THIS ONE   
    return patronRides;
}
void Patron::addPatronRide(Ride newRide){
    //  add a ride to the patron ride array. Parameters newRide; a Ride to add to the existing rideArray
    //  NEXT CHECKPOINT 
    patronRides[numTickets] = newRide;
    numTickets++;
}


void Patron::displayName(){
    //  displays a patron's first and last name to the terminal
    cout << firstName << " " << lastName << endl; 
}


int Patron::getNumTickets(){
    //  getter for # of tickets a patron has remaining. returns numTickets; an int
    return numTickets;;
}
void Patron::setNumTickets(int rideTickets){
    //  setter for # of tickes a patron has remaining 
    //  parameters: num; an integer # of tickets that the patron has remaining
    numTickets = rideTickets;
}


void Patron::displayPatronData(){
    //  Displays all of a patron's info (first, last, patron #, # of rides. # of tickets remaining, the name of rides in ride array)
    // NEXT CHECKPOINT
}





