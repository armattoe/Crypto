#include <iostream>

using namespace std;
    string crypter(string texte, int d){
        string result="";
        for(char &caractere : texte){
            if(isalpha(caractere)){
                char base = isupper(caractere)? 'A' : 'a';
                caractere=(caractere-base+d)%26 + base;
            }
            result += caractere;
        }
        return result;
    }

    string decrypter(string txt, int dec){
        string resultat="";
        for(char &caracter : txt){
            if(isalpha(caracter)){
                char Base = isupper(caracter)? 'A' : 'a';
                caracter=(caracter-Base-dec)%26 + Base;
            }
            resultat += caracter;
        }
        return resultat;
    }

    int main(){
        string texte;
        int decalage;
        string chiffre;
            cout<<"Entrez le texte a chiffrer"<<endl;
            getline(cin,texte);
            cout<<"Entrez le decalage"<<endl;
            cin>>decalage;
            chiffre= crypter(texte,decalage);
            cout<<"Le chiffrement de cesar de votre texte donne:"<<chiffre<<endl;

    return 0;
}
