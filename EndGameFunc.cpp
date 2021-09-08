

#include <iostream>
#include <string>
#include <ctime>
using namespace std;


void EndGameFunc(string BlackorWhite) {
	if (BlackorWhite == "white") { cout << "black win" << endl; system("pause"); exit(0); }
	else if (BlackorWhite == "black") { cout << "white win" << endl; system("pause"); exit(0); }
	else { cout << "Error"; system("pause"); exit(0); };
};

int main()
{
	string Gyt[2] = { "white","black" };
	srand(time(NULL));
	EndGameFunc(Gyt[rand()%2]);
}

