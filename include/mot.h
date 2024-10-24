#include <string>
#include <list>

class mot {
    public:
        mot();

        mot(string mot);
        
        ~mot();

        void set(string mot);

        string get();

        void update(int lettre_ind);

        std::list<int> get_list();


    protected:
        int word_length = 0;
        std::list<int> lettre_trouvees;
        string mot;

}