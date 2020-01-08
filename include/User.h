//
// Created by tamirsku@wincs.cs.bgu.ac.il on 07/01/2020.
//

#ifndef BOOST_ECHO_CLIENT2_USER_H
#define BOOST_ECHO_CLIENT2_USER_H

#include <map>
#include <vector>
#include "Book.h"

using namespace std;

class User {
private:
    map<string,vector<Book*>*> bookMap;
    map<string,int> subscribeByID;
    map<string,int> openMissions;
    int runningID;
    string name;
    string password;
public:
    User(string name,string password);
    string removeBookFromInventory(string genre,string bookName); //return the bookOwner
    void addBookToInventory(string bookName,string genre,string borrowedFrom); //
    void removeAllSubscribe();
    void subscribeWithID(string genre,int subscribeID);
//    void addOpenMission(int id,);
    int getRunningID();
    string getName();
    string getPassword();
    ~User();

};


#endif //BOOST_ECHO_CLIENT2_USER_H
