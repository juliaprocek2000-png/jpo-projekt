#ifndef BIELIKCLIENT_H
#define BIELIKCLIENT_H

#include <string>

/**
 * @class BielikClient
 * @brief Klasa odpowiedzialna za komunikację z lokalnym modelem AI Bielik.
 */
class BielikClient {
public:
    /**
     * @brief Wysyła tekst do analizy i zwraca odpowiedź od AI.
     * @param prompt Tekst do przetworzenia.
     * @return std::string Odpowiedź wygenerowana przez model.
     */
    std::string zapytajBielika(const std::string& prompt);
};

#endif