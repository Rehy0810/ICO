/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ICO.hpp
 * Author: ucitel
 *
 * Created on 5. února 2019, 9:53
 */

#ifndef ICO_HPP
#define ICO_HPP
#include <string>

using std::string;

class ICO {
public:
    ICO();
    ICO(const string);
    ICO(const ICO& orig);
    virtual ~ICO();
    string getIco()const;
    bool setIco(string);
private:
    string Ico;
    bool kontrolaIco(string)const;
};

#endif /* ICO_HPP */

