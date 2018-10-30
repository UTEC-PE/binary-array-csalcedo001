#include <iostream>

#include "binary.h"

using namespace std;

int main(int argc, char *argv[]) {
    cout << "===========================================================" << endl;
    cout << "Binary Array Practice" << endl;
    cout << "===========================================================" << endl << endl;

    boolean b(10);

    b.bitOn(0);
    b.bitOn(7);
    b.bitOn(2);
    b.bitOn(3);

    for (int i = 0; i < 10; i++)
      cout << b[i] << endl;

    cout << endl;


    b.bitOff(0);
    b.bitOff(2);
    b.bitOff(8);

    for (int i = 0; i < 10; i++)
      cout << b[i] << endl;

    system("read");
    return EXIT_SUCCESS;
}
