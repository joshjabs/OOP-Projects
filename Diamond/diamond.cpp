#include <iostream>
using namespace std;

class Animal {
public:
  int weight;
  int getWeight() { return weight;};
  Animal() {
    weight = 10;
  }
};

class Tiger : virtual public Animal {
public:
  Tiger() {
    weight = 25;
  }
};

class Lion : virtual public Animal {
public:
  Lion() {
    weight = 35;
  }
};

class Liger : public Tiger, public Lion {
public:
  Liger() {
    weight = 15;
  }
};


int main( )
{

Tiger t;
cout << "Tiger is " << t.getWeight() << " pounds."<< endl;


Lion l;
cout << "Lion is " << l.getWeight() << " pounds."<< endl;


Liger lg ;
cout << "Liger is " << lg.getWeight() << " pounds."<< endl;
cin.get();
}
