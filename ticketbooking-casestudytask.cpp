#include <iostream>
using namespace std;

class Train {
    public:
        string pnr;
        string src;
        string dst;
        int seats;
        
        void getseat() {
            cout << seats << "\n";
        }

        void reserve(int reservation) {
            seats = seats - reservation;
        }
};

int main() {
    Train Tejas;
    int reserved_seats;
    
    cin >> reserved_seats;
    
    Tejas.seats = 110;
    Tejas.reserve(reserved_seats);
    cout << "Current Seats\n";
    Tejas.getseat();
    
    return 0;
}
