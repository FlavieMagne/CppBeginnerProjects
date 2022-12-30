//
// Created by flavi on 30/12/2022.
//
#include <iostream>
#include <cstdlib>
#include "JustPrice.h"

using namespace std;
void jp();

namespace game {
    JustPriceGame::JustPriceGame() {
        x = 10000;
        r = 20;
        srand(time(nullptr));
        buffer = rand()%r;
        cout << "new game\n";
    }
    void JustPriceGame::play() {
        while(x!=buffer){
            cout<<"Please, type a number in range 0-20: \n";
            cin>>x;
            if(x<buffer)
                cout<<"It's more ! \n";
            else if(x>buffer)
                cout<<"It's less ! \n";
        }
        if(x==buffer)
            cout<<"Congrats";
    }
}