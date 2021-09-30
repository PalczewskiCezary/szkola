
#include <iostream>

using namespace std;
struct Date {
    unsigned short int dd, mm, rrrr;
};

struct User {
    string login, password, status, account;
    unsigned short int id;
    Date creationDate;
    
};


int main(){
setlocale(LC_CTYPE, "polish");

User user {"JNowak", "JanNowak", "online", "admin", 7, {16, 9 , 2021}
};
cout << "\nlogin: " << user.login << "\nhas³o: " << user.password
<< "\nstatus: " << user.status << "\nrodzaj konta: " << user.account
<< "\nidentyfikator u¿ytkownika: " << user.id << "\nData do³¹czenia: "
<< user.creationDate.dd << "-" << user.creationDate.mm << "-" << user.creationDate.rrrr;


    

    return 0;
};

