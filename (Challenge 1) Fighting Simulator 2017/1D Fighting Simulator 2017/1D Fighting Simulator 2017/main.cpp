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
		uniform_int_distribution<int> humanHpRandomizer(10, 60);
		int humanHp = humanHpRandomizer(humanHpGenerator);

		mt19937 humanDmgGenerator(time(0));
		uniform_int_distribution<int> humanDmgRandomizer(0, 40);
		int humanDmg = humanDmgRandomizer(humanDmgGenerator);

		mt19937 skeletonHpGenerator(time(0));
		uniform_int_distribution<int> skeletonHpRandomizer(5, 50);
		int skeletonHp = skeletonHpRandomizer(skeletonHpGenerator);

		mt19937 skeletonDmgGenerator(time(0));
		uniform_int_distribution<int> skeletonDmgRandomizer(0, 35);
		int skeletonDmg = skeletonDmgRandomizer(skeletonDmgGenerator);

		cout << "Type in the number of humans" << endl;
		cin >> humans;
		cout << "Type in the number of skeletons" << endl;
		cin >> skeletons;

		if (humans == 0) {
			cout << "You must have at least 1 human to play" << endl;
		}
		else if (skeletons == 0) {
			cout << "You must have at least 1 skeleton to play" << endl;
		}

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
		cout << "We have randomized how much HP your humans have within' 10 to 60 and your human have " << humanHp << " hp." << endl;
		cout << "You have " << humans << " remaining." << endl;

		system("PAUSE");
		system("CLS");

		humanHp -= skeletonDmg;
		skeletonHp -= humanDmg;

		cout << "Test " << humanHp << endl;

		system("PAUSE");
		system("CLS");

		if (humanHp <= 0) {
			humans -= 1;
		}
		if (skeletonHp <= 0) {
			skeletons -= 1;
		}
		if (humans <= 0) {
			system("CLS");
			cout << "Game over" << endl;
			system("PAUSE");
			exit(0);
		}
		if (skeletons <= 0) {
			system("CLS");
			cout << "You Won! Congratz" << endl;
			system("PAUSE");
			exit(0);
		}

		cout << "Now you have " << humans << " humans remaining" << endl;
		system("PAUSE");
		system("CLS");

		cout << "Wait one second and click again" << endl;
		system("PAUSE");
		system("CLS");

		humanHp = humanHpRandomizer(humanHpGenerator);

		system("PAUSE");
		system("CLS");

		humanHp -= skeletonDmg;
		skeletonHp -= humanDmg;

		if (humanHp == 0) {
			humans -= 1;
		}
		else if (skeletonHp == 0) {
			skeletons -= 1;
		}
		else if (humans == 0) {
			system("CLS");
			cout << "Game over" << endl;
			system("PAUSE");
			exit(0);
		}
		else if (skeletons == 0) {
			system("CLS");
			cout << "You Won! Congratz" << endl;
			system("PAUSE");
			exit(0);
		}

		cout << "Now you have " << humans << " humans remaining" << endl;
		cout << "You have " << humanHp << " hp on your fighting human" << endl;

		system("PAUSE");
		system("CLS");

		return(0);
	}
