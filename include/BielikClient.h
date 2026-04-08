/**
 * @file BielikClient.h
 * @brief Definicja klasy odpowiedzialnej za transformację tekstów akademickich.
 * @author Julia Procek
 * @date 2026-04-08
 */

#ifndef BIELIKCLIENT_H
#define BIELIKCLIENT_H

#include <string>

/**
 * @class BielikClient
 * @brief Klasa realizująca komunikację z modelem Bielik w celu upraszczania języka.
 * * Klasa ta przygotowuje odpowiednie instrukcje (prompty) dla modelu AI,
 * aby skomplikowane treści naukowe stały się zrozumiałe dla laików i dzieci.
 */
class BielikClient {
public:
    /**
     * @brief Przetwarza tekst akademicki na język zrozumiały dla przedszkolaka.
     * @param trescAkademicka Tekst źródłowy zawierający żargon naukowy.
     * @return std::string Tekst uproszczony z użyciem analogii i prostych słów.
     * @throw std::runtime_error rzucany w przypadku braku połączenia z modelem.
     */
    std::string zapytajBielika(const std::string& trescAkademicka);
};

#endif