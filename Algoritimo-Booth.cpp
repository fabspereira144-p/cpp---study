#include <iostream>
using namespace std;

void converterParaBinario(int numeroDecimal, int vetorBinario[], int quantidadeBits) {
    bool eNegativo = false;

    if (numeroDecimal < 0) {
        eNegativo = true;
        numeroDecimal *= -1;
    }

    for (int i = quantidadeBits - 1; i >= 0; i--) {
        vetorBinario[i] = numeroDecimal % 2;
        numeroDecimal /= 2;
    }

    if (eNegativo) {
        for (int i = quantidadeBits - 1; i >= 0; i--) {
            vetorBinario[i] = (vetorBinario[i] == 0) ? 1 : 0;
        }

        for (int i = quantidadeBits - 1; i >= 0; i--) {
            if (vetorBinario[i] == 0) {
                vetorBinario[i] = 1;
                break;
            } else {
                vetorBinario[i] = 0;
            }
        }
    }
}

void algoritmoBooth(int registradorA[], int registradorM[], int registradorQ[], int quantidadeBits) {
    int resultadoSoma = 0;
    int bitAnteriorQ = 0;

    for (int i = 0; i < quantidadeBits; i++) {
        registradorA[i] = 0;
    }

    for (int iteracao = 1; iteracao <= quantidadeBits; iteracao++) {

        int bitAtualQ = registradorQ[quantidadeBits - 1];

        if (bitAtualQ == 0 && bitAnteriorQ == 1) {
            int vaiUm = 0;

            for (int i = quantidadeBits - 1; i >= 0; i--) {
                resultadoSoma = registradorA[i] + registradorM[i] + vaiUm;
                registradorA[i] = resultadoSoma % 2;
                vaiUm = resultadoSoma / 2;
            }
        }

        else if (bitAtualQ == 1 && bitAnteriorQ == 0) {
            int vaiUm = 1;

            for (int i = quantidadeBits - 1; i >= 0; i--) {
                int resultadoSubtracao = registradorA[i] + (1 - registradorM[i]) + vaiUm;
                registradorA[i] = resultadoSubtracao % 2;
                vaiUm = resultadoSubtracao / 2;
            }
        }

        int ultimoBitQ = registradorQ[quantidadeBits - 1];

        for (int i = quantidadeBits - 1; i > 0; i--) {
            registradorQ[i] = registradorQ[i - 1];
        }
        registradorQ[0] = registradorA[quantidadeBits - 1];

        for (int i = quantidadeBits - 1; i > 0; i--) {
            registradorA[i] = registradorA[i - 1];
        }

        bitAnteriorQ = ultimoBitQ;
    }
}

int main() {
    const int quantidadeBits = 4;

    int binMultiplicando[quantidadeBits];
    int binMultiplicador[quantidadeBits];
    int binAcumulador[quantidadeBits];

    int entradaMultiplicando, entradaMultiplicador;

    cout << "==============================\n";
    cout << "  Algoritmo de Booth - " << quantidadeBits << " bits\n";
    cout << "==============================\n";
    cout << "Multiplicando : ";
    cin  >> entradaMultiplicando;
    cout << "Multiplicador : ";
    cin  >> entradaMultiplicador;

    converterParaBinario(entradaMultiplicando, binMultiplicando, quantidadeBits);
    converterParaBinario(entradaMultiplicador, binMultiplicador, quantidadeBits);

    cout << "----------------" << endl;

    cout << "Multiplicando em binario: ";
    for (int i = 0; i < quantidadeBits; i++) cout << binMultiplicando[i];
    cout << endl;

    cout << "Multiplicador em binario: ";
    for (int i = 0; i < quantidadeBits; i++) cout << binMultiplicador[i];
    cout << endl;

    algoritmoBooth(binAcumulador, binMultiplicando, binMultiplicador, quantidadeBits);

    cout << "Resultado: ";
    for (int i = 0; i < quantidadeBits; i++) cout << binAcumulador[i];
    cout << " ";
    for (int i = 0; i < quantidadeBits; i++) cout << binMultiplicador[i];
    cout << endl;

    return 0;
}