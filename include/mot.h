#ifndef MOT_H
#define MOT_H

#include <string>
#include <vector>

class mot {
    public:
        mot();

        mot(std::string word);
        
        ~mot();

        std::string get();

        void update(int lettre_ind);

        std::vector<int> get_list();

        int get_word_length();


    protected:
        int word_length = 0;
        std::vector<int> lettre_trouvees;
        std::string word;

};
#endif // MOT_H