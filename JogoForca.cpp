#include<iostream>
#include<locale.h>
#include<string>

using namespace std;

const string PALAVRA = "arroz";
bool letra_existe(char chute){
    for(char letra : PALAVRA){
        if(chute == letra){
            return true;
        }
    }
    return false;
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    cout << PALAVRA << endl;

    bool nao_acertou = true;
    bool nao_enforcou = true;

    while(nao_acertou && nao_enforcou){
        char chute;
        cin >> chute;
        cout << "O seu chute foi " << chute << endl;

        if(letra_existe(chute)){
            cout << "Você acertou! Seu chute está na PALAVRA." << endl;
        }
        else{
            cout << "Você errou! Seu chute não está na PALAVRA." << endl;
        }


    }

}