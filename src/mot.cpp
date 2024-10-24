#include <iostream>
#include "mot.h"
#include "db.cpp"

mot::mot(){
    db d;
    mot = d.get_random();
    word_length = mot.length();
    for (int i = 0; i < word_length; i++){
        lettre_trouvees.push_back(0);
    }
}

mot::mot(string word){
    mot = word;
    word_length = mot.length();
    for (int i = 0; i < word_length; i++){
        lettre_trouvees.push_back(0);
    }
}

mot::~mot(){
    lettre_trouvees.clear();
}

std::string mot::get(){
    return word;
}

void mot::update(int lettre_ind){
    lettre_trouvees[lettre_ind] = 1;
}

std::list<int> get_list(){
    return lettre_trouvees;
}
