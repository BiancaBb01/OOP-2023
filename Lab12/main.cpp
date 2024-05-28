#include <iostream>
#include "Agenda.h"
#include "Contact.h"
#include "Cunoscut.h"
#include "Prieten.h"
#include "Coleg.h"
using namespace std;

int main()
{
    Prieten p ("Bianca", "17.08.2001","07384384823", "On earth");
    Coleg c("Diana", "Bit","094823902", "On mars");
    Cunoscut cun("HelloWorld", "043942423490");
    Agenda agenda;
    agenda.addContact(p);
    agenda.addContact(c);
    agenda.addContact(cun);
    Contact *test = agenda.searchByName("Bianca");
    cout << test->name << '\n';
    vector<Prieten*> prieteni = agenda.getFriendList();
    cout << "Prietenii din agenda sunt: ";
    for(auto idx: prieteni)
    {
        cout << idx->name << ' ';
    }
    agenda.deleteByName("Diana");
    cout <<'\n';
    cout << '\n';
    return 0;
}
