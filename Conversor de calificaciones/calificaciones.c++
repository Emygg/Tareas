#include <iostream>
using namespace std;

int main() {
    while (true) {
        int calificacion;
        cout << "¿Cuál es tu calificación? ";
        cin >> calificacion;

        string Cal_convertida;

        if (97 <= calificacion && calificacion <= 100) {
            Cal_convertida = "A+, felicidades";
        } else if (93 <= calificacion && calificacion <= 96) {
            Cal_convertida = "A, hiciste un gran trabajo";
        } else if (90 <= calificacion && calificacion <= 92) {
            Cal_convertida = "A-, muy bien";
        } else if (87 <= calificacion && calificacion <= 89) {
            Cal_convertida = "B+, bien hecho";
        } else if (83 <= calificacion && calificacion <= 86) {
            Cal_convertida = "B, lo hiciste bien";
        } else if (80 <= calificacion && calificacion <= 82) {
            Cal_convertida = "B-, no está tan mal";
        } else if (77 <= calificacion && calificacion <= 79) {
            Cal_convertida = "C+, pudiste hacerlo mejor";
        } else if (73 <= calificacion && calificacion <= 76) {
            Cal_convertida = "C, esfuérzate más";
        } else if (70 <= calificacion && calificacion <= 72) {
            Cal_convertida = "C-, puedes hacerlo mucho mejor";
        } else if (67 <= calificacion && calificacion <= 69) {
            Cal_convertida = "D+, estás cerca de reprobar";
        } else if (65 <= calificacion && calificacion <= 66) {
            Cal_convertida = "D, puedes dar más de ti";
        } else if (0 <= calificacion && calificacion <= 64) {
            Cal_convertida = "D-, muy mal";
        } else {
            cout << "No pusiste bien tu calificación, vuelve a intentarlo" << endl;
            continue;  // Salta el resto del bucle y vuelve a solicitar una calificación
        }

        cout << "Tu calificación es: " << Cal_convertida << endl;

        char intento;
        cout << "¿Quieres ingresar otra calificación? (s/n) ";
        cin >> intento;

        if (intento != 's' && intento != 'S') {
            break;
        }
    }

    return 0;
}
