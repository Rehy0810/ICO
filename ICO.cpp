/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ICO.cpp
 * Author: ucitel
 * 
 * Created on 5. února 2019, 9:53
 */

#include "ICO.hpp"
#include <iostream>
#define DEFAULT "99999999"

ICO::ICO() {
    this->Ico = DEFAULT; 
}

ICO::ICO(const ICO& orig) {
    this->Ico=orig.getIco();
}

ICO::~ICO() {
}

ICO::ICO(const string Ico){
    if(kontrolaIco(Ico)){
        this->Ico=Ico;
    }else{
        this->Ico=DEFAULT;
    }
}

string ICO::getIco() const {
    return this->Ico;
}

bool ICO::setIco(string Ico){
    if(kontrolaIco(Ico)){
        this->Ico=Ico;
        return true;
    }
    return false;
}

bool ICO::kontrolaIco(string Ico) const {
    int vysledek = 0;
    int vahy = 8;
    int zbytek = 0;
    if(Ico.length() != 8){
        return false;
    }
    
    for(int i = 0; i < Ico.length(); i++){
        if(Ico[i] < '0' || Ico[i] > '9' ){
            return false;
        }      
    }
    
    for(int e = 0; e < Ico.length()-1; e++){
       vysledek += (Ico[e]-'0')* vahy--;
    }
 
    zbytek = (11-vysledek %11)%10;
    if(zbytek == Ico[7]-'0'){
        return true;
    }else{
        return false;
    }
}