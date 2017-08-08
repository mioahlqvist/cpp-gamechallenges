#include <iostream>
#include <string>
#include <random>
#include <ctime>

using namespace std;

int main() {

	int humans;
	int skeletons;

	string ready;

	mt19937 humanHpGenerator(time(0));
	uniform_int_distribution<int> humanHpRandomizer(50, 200);
	int humanHp = humanHpRandomizer(humanHpGenerator);

	mt19937 humanDmgGenerator(time(0));
	uniform_int_distribution<int> humanDmgRandomizer(0, 40);
	int humanDmg = humanDmgRandomizer(humanDmgGenerator);

	mt19937 skeletonHpGenerator(time(0));
	uniform_int_distribution<int> skeletonHpRandomizer(40, 150);
	int skeletonHp = skeletonHpRandomizer(skeletonHpGenerator);

	mt19937 skeletonDmgGenerator(time(0));
	uniform_int_distribution<int> skeletonDmgRandomizer(0, 35);
	int skeletonDmg = skeletonDmgRandomizer(skeletonDmgGenerator);

	cout << "Type in the number of humans" << endl;
	cin >> humans;
	cout << "Type in the number of skeletons" << endl;
	cin >> skeletons;

	system("CLS");

	cout << "Are you ready? (Y/N)" << endl;
	cin >> ready;

	if (ready == "Y") {
		system("CLS");
	}
	else if (ready == "y") {
		system("CLS");
	}
	else if (ready == "Yes") {
		system("CLS");
	}
	else if (ready == "yes") {
		system("CLS");
	}
	else if (ready == "N") {
		exit(0);
	}
	else if (ready == "No") {
		exit(0);
	}
	else if (ready == "no") {
		exit(0);
	}
	else if (ready == "n") {
		exit(0);
	}
	else {
		system("CLS");
	    cout << "You must type y, n, yes or no" << endl;
		system("PAUSE");
		exit(0);
	}

	cout << "You play as humans" << endl;
	cout << "We have randomized how much HP your humans have within' 50 to 200 and your human have " << humanHp << " hp." << endl;
	cout << "You have " << humans << " remaining." << endl;

	system("PAUSE");
	system("CLS");

	cout << "Test" << endl;

	system("PAUSE");
	return(0);
}