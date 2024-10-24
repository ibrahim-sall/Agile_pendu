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
