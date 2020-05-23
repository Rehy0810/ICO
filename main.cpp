/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ucitel
 *
 * Created on 5. února 2019, 9:52
 */

#include <cstdlib>
#include "ICO.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char** argv) {
    ICO Ico1;
    ICO Ico2(Ico1);
    string zadaneIco;
    ICO Ico3("25145444");
    int podminka;
    
    cout<<"Objekt vytvoreny "
            "vychozim konstruktorem "<<Ico1.getIco()<<endl; 
    cout<<"Objekt vytvoreny "
            "kopirovacim konstruktorem "<<Ico2.getIco()<<endl;
    cout<<"Objekt vytvoreny "
            "konstruktorem s parametrem "<<Ico3.getIco()<<endl;
    do{
        cout<<"Zadej ICO: ";
        cin>>zadaneIco;

        if(Ico1.setIco(zadaneIco)){
            cout<<"ICO po zmene: "<<Ico1.getIco()<<endl;
        }else{
            cout<<"Chybne ICO."<<endl;
        }
        cout<<"Pro zadani dalsiho ICO zadej 1: ";
        cin>>podminka;
    }while(podminka == 1);
    return 0;
}

