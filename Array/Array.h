#include <iostream>
using std::ostream;
using std::istream;

class Array{
    friend ostream &operator<<(ostream &, const Array &);
    friend istream &operator>>(istream &, const Array &);

    public:
        Array(int = 10);
        Array(const Array &);
        ~Array();
        int getTamanio() const;
        const Array operator=(const Arrayt &);
        bool operator

};

