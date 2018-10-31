#include <iostream>

#include "binary.h"

using namespace std;

int main(int argc, char *argv[]) {
    cout << "===========================================================" << endl;
    cout << "\tBinary Array Practice" << endl;
    cout << "===========================================================" << endl << endl;

    boolean b(9);

    b.print();


    b.bitOn(0);
    b.bitOn(7);
    b.bitOn(2);
    b.bitOn(3);

    b.print();


    b.bitOff(0);
    b.bitOff(2);
    b.bitOff(4);

    b.print();


    b.clear();

    b.print();

    system("read");
    return EXIT_SUCCESS;
}
