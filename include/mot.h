#include <string>
#include <vector>

class mot {
    public:
        mot();

        mot(string word);
        
        ~mot();

        string get();

        void update(int lettre_ind);

        std::list<int> get_list();


    protected:
        int word_length = 0;
        std::vector<int> lettre_trouvees;
        string word;

}