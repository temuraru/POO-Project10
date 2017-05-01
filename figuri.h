//
// Created by temur on 01.05.2017.
//

#ifndef PROJECT10_FIGURI_H
#define PROJECT10_FIGURI_H

class Factori {
public:
    double x, y;
    Factori() : x(0), y(0) {};
    Factori(double fx, double fy) : x(fx), y(fy) {};
};

class Figura {
public:
//    virtual Figura operator + (Factori f); // translatie
//    virtual Figura operator * (Factori f); // scalare
//    void display(Figura f); // metoda generica de afisare a figurii
    void log(std::string msg) { std::cout << msg << "\n"; }
};

class Punct : public Figura {
    double a, b;
public:
    Punct(); // constructor fara argumente
    Punct(const Punct& p) : a(p.a), b(p.b) { log("Punct - constructor cu datele unei alte figuri!"); }
    Punct(double set_x, double set_y) : a(set_x), b(set_y) { log("Punct - constructor cu date explicite!"); }
    ~Punct() {}; // destructor
    double get_a();
    double get_b();
    void print() const; // metoda specifica de afisare a unei figuri concrete

    Punct operator = (const Punct& p); // operator de copiere
    Punct operator + (Factori f); // translatare
    Punct operator - (Factori f); // translatare -
    Punct operator * (Factori f); // scalare

    friend std::ostream& operator<<(std::ostream& out, const Punct& f) {
        f.print();
        return out;
    }
};

Punct :: Punct() : a(0.0), b(0.0) { log("Punct - constructor fara argumente!"); }
double Punct :: get_a() { return a; }
double Punct :: get_b() { return b; }
Punct Punct :: operator = (const Punct& p) { a = p.a; b = p.b; }
Punct Punct :: operator + (Factori f) { Punct p2(a + f.x, b + f.y); return p2; } // translatare
Punct Punct :: operator - (Factori f) { f.x = 0.0 - f.x; f.y = 0.0 - f.y; Punct p2(a + f.x, b + f.y); return p2; } // translatare -
Punct Punct :: operator * (Factori f) { Punct p2(a * f.x, b * f.y); return p2; } // scalare
void Punct :: print() const {
    std::cout << "Coordonatele punctului: (" << a << ", " << b << ")\n";
}

void testPunct(Factori f_translatare, Factori f_scalare);

#endif //PROJECT10_FIGURI_H
