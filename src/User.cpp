//
// Created by tamirsku@wincs.cs.bgu.ac.il on 07/01/2020.
//

#include "../include/User.h"

string User::getBooksByGenre(string genre) {
    return std::__cxx11::string();
}

User::User(string _name,string _password):name(_name),password(_password) {
    bookMap = map<string,vector<Book>>();
    subscribeByID = map<string,int>();

}

User::~User() {
//    delete bookMap;
//    delete subscribeByID;
}


int User::getRunningID() {
    return runningID++;
}

string User::getName() {
    return name;
}

string User::getPassword() {
    return password;
}

