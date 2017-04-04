#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>

class IPainter {
public:
	virtual void paint() = 0;
};

class Painter: public IPainter {
	void paint() override {
		std::cout << "The painter is painting." << std::endl;
	}
};

class ProxyPainter: public IPainter {
private:
	IPainter* realPainter = new Painter();
	int _painting_cost = 150;
	int _painting_offer;
public:
	ProxyPainter(const int painting_offer): _painting_offer(painting_offer) {}

	void paint() {
		if (_painting_cost <= _painting_offer)
			realPainter->paint();
		else
			std::cout << "This painting is more expencive than that.";
	}
};

void main() {
	IPainter* painter = new ProxyPainter(500);
	painter->paint();
	delete painter;

	painter = new ProxyPainter(75);
	painter->paint();
	delete painter;
	system("pause");
}
