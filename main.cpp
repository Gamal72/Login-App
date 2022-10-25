#include <bits/stdc++.h>
#include "Login Application library.h"
using namespace std;

int main() {
    cout<<"Welcome to login App!\n";
    loadUsers();
    while (!Exit){
        int choice = mainMenu();
        switch (choice) {
            case 1:
                Registration();
                break;
            case 2:
                login();
                break;
            case 3:
                changePassword();
                break;
            default:
                Exit = true;
                break;
        }
    }
    cout<<"Thanks for using our login App!";

}
