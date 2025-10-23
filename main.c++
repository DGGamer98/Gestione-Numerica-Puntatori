#include <iostream>

const int MAX_VOTI = 5;

void inserisciVoti(int *array, int &count);
void mostraVoti(int *array, int count);
void calcolaMedia(int *array, int count);
void trovaMassimo(int *array, int count);
void aggiornaVoto(int *array, int count);

int main()
{
    int voti[MAX_VOTI] = {0};
    int count = 0;
    int scelta;
}

void inserisciVoti(int *array, int &count)
{
    if (count >= MAX_VOTI)
    {
        std::cout << "Hai già inserito tutti i voti!" << std::endl;
        return;
    }

    int nuovoVoto;
    std::cout << "Inserisci un nuovo voto" << std::endl;
    std::cin >> nuovoVoto;

    if (nuovoVoto < 0 || nuovoVoto > 10)
    {
        std::cout << "Voto non valido" << std::endl;
        return;
    }

    *(array + count) = nuovoVoto;
    count++;
    std::cout << "Voto aggiunto correttamente." << std::endl;
}

// Mostra tutti i voti
void mostraVoti(int *array, int count)
{
    if (count == 0)
    {
        std::cout << "Nessun voto inserito" << std::endl;
        return;
    }

    std::cout << "Voti inseriti" << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cout << *(array + i) << " ";
    }
}

// calcolo della media
void calcolaMedia(int *array, int count)
{
    if (count == 0)
    {
        std::cout << "Non ci sono voti per calcolare la media" << std::endl;
        return;
    }

    int somma = 0;
    for (int i = 0; i < count; i++)
    {
        somma += *(array + i);
    }

    double media = static_cast<double>(somma) / count;
    std::cout << "La media dei voti è: " << media << endl;
}

// Trova il voto massimo
void trovaMassimo(int *array, int count)
{
    if (count == 0)
    {
        std::cout << "Non ci sono valori massimi trovati" << std::endl;
        return;
    }

    int max = *array;
    for (int i = 0; i < count; i++)
    {
        if (*(array + i) > max)
        {
            max = *(array + i);
        }
    }
    std::cout << "Il voto massimo è: " << max << std::endl;
}

// Aggiorna voto
void aggiornaVoto(int *array, int count)
{
    if (count == 0)
    {
        std::endl
            << "Nessun voto trovato" << std::endl;
    }

    int posizione;
    std::cout << "Inserisci la posizione del voto da modificare (1–" << count << "): ";
    std::cin >> posizione;

    if (posizione < 1 || posizione > count)
    {
        cout << "Posizione non valida!" << endl;
        return;
    }

    int nuovoVoto;
    cout << "Inserisci il nuovo voto: ";
    cin >> nuovoVoto;

    *(array + (posizione - 1)) = nuovoVoto; // aggiorno tramite puntatore
    cout << "Voto aggiornato con successo." << endl;
}

