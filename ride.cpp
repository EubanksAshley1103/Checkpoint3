/* 
    Author:         Ashley Eubanks 
    Section:        1103
    Description:    Responsible for all ride information 
*/ 

#include "ride.h"


/*________________________________________________________________________
-------------------Constructor & Destructor Do ------------------------------
--------------------------------------------------------------------------*/

Ride::Ride(){
    //  Default constructor name is NONE, numTicketsNecessary is 0, heightRestricted is true
    name = "NONE";
    numTicketsNecessary = 0;
    heightRestricted = true;
}

Ride::Ride(int ticketsNeeded, string rideName, bool canRide){
    /*  parameterized constructor; sets passed in variables
        Parameters: numRideTickets  integer argument to set numTickets
                    name            string argument to set rideName
                    height          bool argument to set hightRestricted
    */
   setNumTicketsNecessary(ticketsNeeded);
   setRideName(rideName);
   setHeightRestricted(canRide); //IS THIS ONE RIGHT??
}

Ride::Ride(const Ride& old){
    //  Copy constructor; copies properties from one ride class object to another
    //  Paramenters: oldRide Ride address object (&)
    setRideName(old.name);
    setNumTicketsNecessary(old.numTicketsNecessary);
    setHeightRestricted(old.heightRestricted);
}

/*________________________________________________________________________
-------------------Member Function Documentation------------------------------
--------------------------------------------------------------------------*/

int Ride::getNumTicketsNecessary(){
    //  return # of tickets required to ride the ride
    return numTicketsNecessary;;
}
void Ride::setNumTicketsNecessary(int ticketsNeeded){
    //  set the # of tickets in a ride object required to ride it
    //  Parameters: numTicket; integer argument to set number of tickets in the ride object
    numTicketsNecessary = ticketsNeeded;
}


string Ride::getRideName(){
    //  return ride name
    //  Parameters: name; string argument to set ride name in the ride object
    return name;;
}
void Ride::setRideName(string rideName){
    //  set the ride name in a ride object, returns the string name of the ride
    name = rideName;
}


bool Ride::getHeightRestricted(){
    //  return if the ride is height restricted
    //  returns the height restricion bool; true if restricted, otherwise false
    return heightRestricted;;
}
void Ride::setHeightRestricted(bool canRide){
    //  set if a ride is height restricted or not
    //  Parameters: heightRestriction;bool argument to set if the ride is height restricted
    heightRestricted = canRide; 
}


/*________________________________________________________________________
-------------------Member Data Documentation------------------------------
--------------------------------------------------------------------------*/

/*
int Ride::numTicketsNecessary private
string Ride::name private
bool Ride::heightRestricted private 
*/


