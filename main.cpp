#include <iostream>                        // Ein- und Ausgabebibliothek
#include "addNumbers.hpp"                  // Header-Datei für die Funktion addNumbers

int main(){                                // Hauptfunktion
    int x = 2;
  int z = 3;
          
    int y = 3;
    int result;
    result = huhu(x, y);
    std::cout << "Die Summe von " << x << " und " << y << " ist: " << result << std::endl; // Ausgabe der Summe
    return 0;
}

// rm -rf build && mkdir build && cd build && cmake -G "MinGW Makefiles" .. && cmake --build . &&  ./ci-test.exe