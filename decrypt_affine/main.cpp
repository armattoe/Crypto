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

    string decrypter(string texte,int a,int b){
            string resultat="";
            int aInverse=verif_premier(a,26);
            if(aInverse==-1){
                cout<<"L'inverse modulaire n'existe pas."<<endl;
                return "";
            }

            for(char &caractere : texte){
                if(isalpha(caractere)){
                    char base= isupper(caractere)? 'A' : 'a';
                    int y=caractere-base;
                    caractere=(aInverse*(y-b+26))%26+base;
                }
            resultat+=caractere;
            }
            return resultat;
        }
int main()
{
    string texte;
    string dechiffre;
    int a,b;
            cout<<"Entrez le texte a dechiffrer"<<endl;
            getline(cin,texte);
            cout<<"Entrez la  valeur de a"<<endl;
            cin>>a;
            cout<<"Entrez la  valeur de b"<<endl;
            cin>>b;
            if(a<0 || a>=26 || verif_premier(a,26)==-1){
                 cout<<"a doit etre un nombre premier avec 26"<<endl;
                 return 1;
            }
            dechiffre=decrypter(texte,a,b);
             cout<<"Le dechiffrement affine de votre texte donne: "<<dechiffre<<endl;
    return 0;
}
