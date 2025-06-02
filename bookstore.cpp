#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

/* Function declarations */
void optionsFunc();
void Fiction();
void nonFiction();
void fictionInfo1(int &totalValue);
void fictionInfo2(int &totalValue);
void fictionInfo3(int &totalValue);
void fictionInfo4(int &totalValue);
void cart();

void total(int &totalValue){
    cout << "£" << totalValue;
};
 
int totalValue = 0;

int main() {
    int value;
    cout << "Select an option" << endl;
    cout << "1 fiction\n ";
    cout << "2 Cart\n";
    cout << "3 null\n";
    cout << "4 exit application\n";

    optionsFunc();
    cin >> value;
    switch(value){
        case 1:
        Fiction();
        break;
        case 2:
        main();
        break;
        case 3:
        total(totalValue);
    }
}

void optionsFunc() {
    for (int x = 1; x < 5; x++) {
        cout << x << endl;
    }

}


void Fiction() {
    string fictionValue;
   

    cout << "Please select your book" << endl;
    string arrFict[5] = {"Harry Potter", "The Hobbit", "Spirited away", "The book thief","Main"};
    for (int a = 0; a < 5; a++) {
        cout << arrFict[a] << endl;
    }

    cin.ignore();
    getline(cin,fictionValue);
   

    cout << "You selected " << fictionValue << endl;
   

    if (fictionValue == "Harry Potter") {
        fictionInfo1(totalValue);
    } else if (fictionValue == "The Hobbit") {
        fictionInfo2(totalValue);
    } else if (fictionValue == "Spirited away") {
        fictionInfo3(totalValue);
    } else if (fictionValue == "The book thief") {
        fictionInfo4(totalValue);
    } else if(fictionValue == "Main"){
        main();
    } else {
        Fiction();
    }
}



void fictionInfo1(int &totalValue) {
    int userValue;
   
    string cart;
    string ficarr[3] = {"1. Book description", "2. Price", "3. Main"};
    for (int z = 0; z < 3; z++) {
        cout << ficarr[z] << endl;
    }
    cin >> userValue;
    cin.ignore();
    if (userValue == 1) {
        cout << "Harry Potter is a wizard" << endl;
    } else if (userValue == 2) {
        cout << "Price = £13" << endl;
        cout << "Would you like to add to cart Y or N" << endl;
        cin >> cart;
        if(cart == "Y"){
            cout << "Added to cart \n" ;
            totalValue += 13;
            Fiction();
        } else if (cart == "N") {
            Fiction();
        }
    } else if(userValue == 3 ){
        main();
    }
}

void fictionInfo2(int &totalValue) {
    int userValue;
   
    string cart;
    string ficarr[3] = {"1. Book description", "2. Price", "3. Main"};
    for (int z = 0; z < 3; z++) {
        cout << ficarr[z] << endl;
    }
    cin >> userValue;
    cin.ignore();
    if (userValue == 1) {
        cout << "The Hobbit lives in the shire; he is met by a grey Gandalf" << endl;
    } else if (userValue == 2) {
        cout << "Price = £8" << endl;
        cout << "Would you like to add to cart Y or N" << endl;
        cin >> cart;
        if(cart == "Y"){
            cout << "Added to cart";
            totalValue += 8;
            Fiction();
        } else if (cart == "N") {
            Fiction();
        }
       
    } else if(userValue == 3) {
        main();
    }
}

void fictionInfo3(int &totalValue) {
    int userValue;
   
    string cart;
    string ficarr[3] = {"1. Book description", "2. Price", "3. Main"};
    for (int z = 0; z < 3; z++) {
        cout << ficarr[z] << endl;
    }
    cin >> userValue;
    cin.ignore();
    if (userValue == 1) {
        cout << "The book is about a girl who loses her parents and is transported to a magical land" << endl;
    } else if (userValue == 2) {
        cout << "Price = £12" << endl;
        cout << "Would you like to add to cart Y or N" << endl;
        cin >> cart;
        if(cart == "Y"){

            cout << "Added to cart";
            totalValue += 12;
            Fiction();
        } else if (cart == "N") {
            Fiction();
        }
    } else if (userValue == 3){
        main();
    }
}

void fictionInfo4(int &totalValue) {
    int userValue;
     
    string cart;
    string ficarr[3] = {"1. Book description", "2. Price", "3. Main"};
    for (int z = 0; z < 3; z++) {
        cout << ficarr[z] << endl;
    }
    cin >> userValue;
    cin.ignore();
    if (userValue == 1) {
        cout << "This book is about a girl in 1940s Germany who steals books" << endl;
    } else if (userValue == 2) {
        cout << "Price = £10" << endl;
        cout << "Would you like to add to cart Y or N" << endl;
        cin >> cart;
        if(cart == "Y"){
            cout << "Added to cart";
            totalValue += 10;
            Fiction();
        } else if (cart == "N") {
            Fiction();
        }
       
    } else if (userValue == 3) {
        main();
    }
}
