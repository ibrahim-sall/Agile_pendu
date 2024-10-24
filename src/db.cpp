#include <string>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <algorithm>    

class db {
    public:
        db(){
            try {

            std::string file_name = "./DATA/Lexique383.xml";

            ifstream input_stream(file_name);

            if (!input_stream) cerr << "Fichier impossible à ouvrir" << std::endl;

            std::string line;

            while (getline(input_stream, line)) {

                dictionnaire.push_back(line);
            }
                
            }
        }
        ~db(){
            dictionnaire.clear();
        }
        std::string get_random(){
            int randomNum = std::rand() % 10000;
            return dictionnaire[randomNum];

        }
        bool is_word(std::string mot){
            if (std::find(dictionnaire.begin(), dictionnaire.end(), mot) != dictionnaire.end()){
                return true;
            }
            return false;

        }
    protected:
        std::vector<std::string> dictionnaire;
}