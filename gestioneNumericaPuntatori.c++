#include <iostream>
#include <string>
#include <cmath>

int numero1;
int numero2;

int somma(int *ptr_x, int *ptr_y);
int sottrazione(int *ptr_x, int *ptr_y);
int moltiplicazione(int *ptr_x, int *ptr_y);
int divisone(int *ptr_x, int *ptr_y);
int scambia(int *ptr_x, int *ptr_y);

int main()
{

    std::cout << "Inserisci due numeri" << std::endl;

    std::cin >> numero1;
    std::cin >> numero2;

    while (true)
    {
        int *ptr_numero1 = &numero1;
        int *ptr_numero2 = &numero2;

        std::cout << "=== GESTIONE NUMERI CON PUNTATORI ===" << std::endl;
        std::cout << "1 Visualizza gli indirizzi di memoria" << std::endl;
        std::cout << "2 Somma dei numeri" << std::endl;
        std::cout << "3 Sottrazione" << std::endl;
        std::cout << "4 Moltiplicazione" << std::endl;
        std::cout << "5 Divisione" << std::endl;
        std::cout << "6 Scambio dei valori tra variabili" << std::endl;
        std::cout << "7 Esci" << std::endl;

        int scelta;
        std::cin >> scelta;

        switch (scelta)
        {
        case 1:
            /* code */
            // Stampa gli indirizzi della memoria
            std::cout << " Indirizzo di memoria di " << numero1 << " è " << ptr_numero1 << std::endl;
            std::cout << " Indirizzo di memoria di " << numero2 << " è " << ptr_numero2 << std::endl;
            break;
        case 2:
            somma(ptr_numero1, ptr_numero2);
            break;
        case 3:
            sottrazione(ptr_numero1, ptr_numero2);
            break;
        case 4:
            moltiplicazione(ptr_numero1, ptr_numero2);
            break;
        case 5:
            divisone(ptr_numero1, ptr_numero2);
            break;
        case 6:
            scambia(ptr_numero1, ptr_numero2);
            break;
        case 7:
            std::cout << "Uscita dal programma..." << std::endl;
            return 0; 
        default:
            std::cout << "Selezione non valida" << std::endl;
            break;
        }
    }

    return 0;
}

int somma(int *ptr_x, int *ptr_y)
{
    int risultato = *ptr_x + *ptr_y; // somma i valore puntanti, non gli indirizzi
    std::cout << risultato << std::endl;
    return risultato;
}

int sottrazione(int *ptr_x, int *ptr_y)
{
    int differenza = *ptr_x - *ptr_y;
    std::cout << differenza << std::endl;
    return differenza;
}

int moltiplicazione(int *ptr_x, int *ptr_y)
{
    int moltiplicazione = *ptr_x * *ptr_y;
    std::cout << moltiplicazione << std::endl;
    return moltiplicazione;
}

int divisone(int *ptr_x, int *ptr_y)
{

    if (*ptr_y == 0)
    {
        std::cout << "Non puoi dividere per 0" << std::endl;
        return 0;
    }

    int divisione = *ptr_x / *ptr_y;
    std::cout << divisione << std::endl;
    return divisione;
}

int scambia(int *ptr_x, int *ptr_y)
{
    int temp = *ptr_x;
    *ptr_x = *ptr_y;
    *ptr_y = temp;
    std::cout << temp << std::endl;
    return temp;
}
