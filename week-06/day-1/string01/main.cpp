#include <iostream>

using namespace std;

// An average Green Fox attendee codes 6 hours daily
// The semester is 17 weeks long
//
// Print how many hours is spent with coding in a semester by an attendee,
// if the attendee only codes on workdays.
//
// Print the percentage of the coding hours in the semester if the average
// work hours weekly is 52

int main()
{
    int hours = 6;
    int weeks = 17;
    double percentage = (hours * 5 * weeks) / double(17 * 52);

    cout << "An average Green Fox attendee codes " << hours * 5 * weeks << " hours in " << weeks << " weeks!"<< endl;
    cout << "An average Green Fox attendee codes " << percentage * 100 << "% hours in " << weeks << " weeks!"<< endl;

    return 0;
}
