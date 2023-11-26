#include <iostream>

using namespace std;
    int verif_premier(int u, int v){
        for (int i=0;i<v;i++){
            if((u*i)%v==1){
                return i;
            }
        }
        return -1;
    }

    string crypter(string texte,int a,int b){
            string resultat="";
            for(char &caractere : texte){
                if(isalpha(caractere)){
                    char base= isupper(caractere)? 'A' : 'a';
                    int x=caractere-base;
                    caractere=(a*x+b)%26+base;
                }
            resultat+=caractere;
            }
            return resultat;
        }
int main()
{
    string texte;
    string chiffre;
    int a,b;
            cout<<"Entrez le texte a chiffrer"<<endl;
            getline(cin,texte);
            cout<<"Entrez la  valeur de a"<<endl;
            cin>>a;
            cout<<"Entrez la  valeur de b"<<endl;
            cin>>b;
            if(a<0 || a>=26 || verif_premier(a,26)==-1){
                 cout<<"a doit etre un nombre premier avec 26"<<endl;
                 return 1;
            }
            chiffre=crypter(texte,a,b);
             cout<<"Le chiffrement affine de votre texte donne: "<<chiffre<<endl;
    return 0;
}
