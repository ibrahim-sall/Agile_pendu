#include <string>
#include <list>

class mot {
    public:
        mot();

        mot(string word);
        
        ~mot();

        void set(string word);

        string get();

        void update(int lettre_ind);

        std::list<int> get_list();


    protected:
        int word_length = 0;
        std::list<int> lettre_trouvees;
        string word;

}