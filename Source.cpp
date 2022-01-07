#include <iostream>
using namespace std;
class Virus {
protected:
	double Cases;
	double Deaths;
	double Mortality;
	virtual double GetMortalityRate() = 0;//virtual function
};

class CovidVirus :public Virus {
	public:
	double GetMortalityRate() {
		Mortality = (Deaths / Cases) * 100;
		return Mortality;
	}
	CovidVirus() {//constructor
		cout << "Enter Number of Covid cases:";
		cin >> Cases;
		cout << "Enter Number of Covid deaths:";
		cin >> Deaths;
	}
};

class HivVirus :public Virus {
	public:
	double GetMortalityRate() {
		Mortality = (Deaths / Cases) * 100;
		return Mortality;
    }
	HivVirus() {//constructor
		cout << "Enter Number of Hiv cases:";
		cin >> Cases;
		cout << "Enter Number of Hiv deaths:";
		cin >> Deaths;
	}
};

class BirdFlue :public Virus {
	public:
		double GetMortalityRate() {
			Mortality = (Deaths / Cases) * 100;
			return Mortality;
		}
	BirdFlue() {//constructor
		cout << "Enter Number of Birdflue cases:";
		cin >> Cases;
		cout << "Enter Number of Birdflue deaths:";
		cin >> Deaths;
	}
};


int main() {
	int Selection;
	cout << "Enter 1 for Covid virus" << endl
	     << "Enter 2 for Hiv virus" << endl
		 << "Enter 3 for Bird flue" << endl;
	cin >> Selection;
	switch (Selection) {
	case 1: {CovidVirus cov;
			cout << " Mortality rate for Covid virus= " << cov.GetMortalityRate() << "%";	
            break;}
	case 2: {HivVirus hiv;
			cout << " Mortality rate for Hiv virus= " << hiv.GetMortalityRate() << "%";
			break;}
	case 3: {BirdFlue bir;
			cout << " Mortality rate for Bird flue= " << bir.GetMortalityRate() << "%";
			bir.GetMortalityRate();
			break;}
	default:cout << "Invalid Entery";
			break;
	}

	return 0;
}