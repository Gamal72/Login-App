#ifndef LOGIN_APPLICATION_LOGIN_APPLICATION_LIBRARY_H
#define LOGIN_APPLICATION_LOGIN_APPLICATION_LIBRARY_H
using namespace std;
struct UserProfile{
    string name,email,password,phoneNumber;
};
bool Exit = false;
map<string,UserProfile>users;
set<string>emails;
void loadUsers();
void Registration();


#endif //LOGIN_APPLICATION_LOGIN_APPLICATION_LIBRARY_H
