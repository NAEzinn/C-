#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    
    int numeroSecreto= rand()% 100 + 1;
    int tentativas = 8;
    int palpite;
    int acao=1;
    
    do{
        cout << "Tentativa " << acao << "- Digite um número: ";
        
        cin >> palpite;
        
        if (palpite < numeroSecreto) {
        cout << "O numero é maior!" << endl;
        acao++;
        }else if (palpite > numeroSecreto){
            cout << "O numero é menor!" <<endl;
            acao++;
        }
        
        
        tentativas--;

    } while (palpite != numeroSecreto && tentativas > 0);
    
    if (palpite == numeroSecreto) {

    cout << "Parabéns! Você acertou o número em " << acao << " tentativas!" << endl;
    } else {
        cout << "Você é muito RUIM!!!! Espero que você não tente trabalhar tentando acertar números na sua vida. O número era: " << numeroSecreto << endl;
    }
    
    return 0;
}