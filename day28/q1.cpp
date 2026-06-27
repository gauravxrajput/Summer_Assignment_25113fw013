#include <iostream>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    int copies;
};

int main() {
    int n;
    cout << "Enter number of books: ";
    cin >> n;

    Book lib[50];   

    for (int i = 0; i < n; i++) {
        cout << "\nEnter Book ID: ";
        cin >> lib[i].id;
        cout << "Enter Title: ";
        cin >> lib[i].title;
        cout << "Enter Author: ";
        cin >> lib[i].author;
        cout << "Enter Number of Copies: ";
        cin >> lib[i].copies;
    }

    cout << "\n--- Library Records ---\n";
    for (int i = 0; i < n; i++) {
        cout << "ID: " << lib[i].id
             << " | Title: " << lib[i].title
             << " | Author: " << lib[i].author
             << " | Copies: " << lib[i].copies << endl;
    }

    return 0;
}
