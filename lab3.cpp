#include <iostream>
using namespace std;
class Figura
{
public:
    Figura(double pole_) : pole{pole_} {}
    double       getp() { return pole; }
    virtual void id() { cout << "To jest Figura o polu " << this->getp() << endl; }
    // void   setp(double pole_in) { pole = pole_in; }

private:
    double pole;

protected:
    // double pole;
};

class Kolo : public Figura
{
public:
    Kolo(double r) : Figura{3.14159 * r * r} {}
    void id() override { cout << "To jest Kolo o polu " << this->getp() << endl; }
};

class Kwadrat : public Figura
{
public:
    Kwadrat(double a) : Figura{a * a} {}
    void id() override { cout << "To jest Kwadrat o polu " << this->getp() << endl; }
};

void id(const Figura& f)
{
    f->id();
}

int main()
{
    Kwadrat k1(5);
    cout << k1.getp() << endl;
    k1.id();
    id(k1);
}
