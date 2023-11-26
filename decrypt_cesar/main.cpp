#include <iostream>

using namespace std;

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
        string dechiffre;
            cout<<"Entrez le texte a dechiffrer"<<endl;
            getline(cin,texte);
            cout<<"Entrez le decalage"<<endl;
            cin>>decalage;
            dechiffre= decrypter(texte,decalage);
            cout<<"Le dechiffrement de cesar de votre texte donne:"<<dechiffre<<endl;
    return 0;
}
