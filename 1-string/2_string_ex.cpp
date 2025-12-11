#include <iostream>
#include <string>

using namespace std;

/*
    size() e length()
    TODO: stampa la lunghezza della string passata in input
*/
void lunghezzaStringa(string stringa){
    int x = stringa.size();
    int y = stringa.length();
    cout<<"la lunghzza e' "<<x<<endl;
    cout<<"la lunghzza e' "<<y<<endl;

}

/*
    find()
    TODO: immettere una stringa da tastiera e comunicare all'utente se è presente la parola "ciao"
            se la parola è presente, stampare "La parola ciao è presente"
            altrimenti stampare "La parola ciao NON è presente"
*/
void trovaCiao(string stringa){

    int x = stringa.find("ciao");
    cout<<"debug: "<<x<<endl;
    if (x > -1){
        cout<<"ciao e' presente"<<endl;
    }
    else {cout<<"ciao non e' presente"<<endl;
    }

}


/*
    replace()
    TODO: sostituire la parola "pizza" con la parola "pasta" e stampare la nuova stringa
*/
void sostituisciPizzaConPasta(string stringa){

    int x = stringa.find("pizza");
    cout<<"debug: "<<x<<endl;
    if (x > -1){
        cout<<"pizza e' presente"<<endl;
        stringa.replace(stringa.find("pizza"),stringa.size(),"pasta");
        cout<<"stringa dopo la sostituzione: "<<stringa<<endl;
    }
    else {cout<<"pizza non e' presente"<<endl;
    }
}


/*
    substr()
    TODO: estrarre e stampare la prima parola della stringa passata in input

    HINT: la prima parola termina al primo spazio (trovabile con find())
*/
void stampaPrimaParola(string stringa){
    // TODO
    string x = stringa.substr(0,stringa.find(" "));
    cout<<"la prima parola e': "<<x<<endl;


}


/*
    insert()
    TODO: inserire alla fine della stringa passata in input " Giovanni!" e stampare la nuova stringa
*/
void aggiungiGiovanni(string frase){

    frase.insert(frase.length(), " Giovanni!");
    cout << "Stringa dopo insert: " << frase << endl;

}

int main()
{

    string str;

    cout << "Inserire valore stringa: ";
    getline(cin, str);


    //lunghezzaStringa(str);
    //trovaCiao(str);
    //sostituisciPizzaConPasta(str);
    //stampaPrimaParola(str);
    //aggiungiGiovanni(str);



    return 0;
}
