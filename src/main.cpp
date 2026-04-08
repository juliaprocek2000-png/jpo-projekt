#include <iostream>
#include <fstream>
#include <string>
#include "../include/BielikClient.h"

int main() {
    // 1. Sprawdzamy czy startuje
    std::cout << "[DEBUG] Program wystartowal poprawnie!" << std::endl;

    BielikClient ai;
    std::string nazwaPliku = "README.txt"; // Ustawiamy na sztywno do testu

    std::cout << "[DEBUG] Probuje otworzyc plik: " << nazwaPliku << std::endl;

    std::ifstream plik(nazwaPliku);
    if (plik.is_open()) {
        std::cout << "[DEBUG] Plik otwarty! Czytam zawartosc..." << std::endl;
        
        std::string tresc((std::istreambuf_iterator<char>(plik)), std::istreambuf_iterator<char>());
        
        std::cout << "[DEBUG] Wysylam do klasy BielikClient..." << std::endl;
        std::string odpowiedz = ai.zapytajBielika(tresc);
        
        std::cout << "\n--- WYNIK ---\n" << odpowiedz << "\n------------\n" << std::endl;
        
        plik.close();
    } else {
        std::cout << "[DEBUG] BLAD: Nie udalo sie otworzyc pliku " << nazwaPliku << "!" << std::endl;
        std::cout << "Upewnij sie, ze plik jest w glownym folderze projektu." << std::endl;
    }

    std::cout << "[DEBUG] Koniec programu. Nacisnij dowolny klawisz..." << std::endl;
    std::cin.get(); 
    return 0;
}