#include <iostream>


class Szulo{
public:
    bool dolgozik;
    Szulo(){
        bool dolgozik=true;
    };
};

class Gyerek:public Szulo{
public:
    bool beszel;
    Gyerek(){
        bool beszel=false;
    };
};


int main( int argc, char **argv ){
    Szulo* szulo=new Szulo;
    Gyerek* gyerek=new Gyerek;
    
    std::cout<<szulo->beszel;
}

    
    
