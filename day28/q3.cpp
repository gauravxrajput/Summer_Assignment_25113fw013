#include <iostream>
using namespace std;

struct Ticket {
    int ticketNo;
    string name;
    string movie;
    int seats;
};

int main() {
    int n;
    cout << "Enter number of bookings: ";
    cin >> n;

    Ticket t[50];   

    for (int i = 0; i < n; i++) {
        cout << "\nEnter Ticket No: ";
        cin >> t[i].ticketNo;
        cout << "Enter Customer Name: ";
        cin >> t[i].name;
        cout << "Enter Movie Name: ";
        cin >> t[i].movie;
        cout << "Enter Number of Seats: ";
        cin >> t[i].seats;
    }

    cout << "\n--- Ticket Bookings ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Ticket No: " << t[i].ticketNo
             << " | Name: " << t[i].name
             << " | Movie: " << t[i].movie
             << " | Seats: " << t[i].seats << endl;
    }

    return 0;
}
