#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <random>
#include <iomanip>
#include <windows.h>

using namespace std;


// ZMIENNE I KLASY

int czyTinySecret = 0;
int czyHugeSecret = 0;
int tinyTimes = 0;
int hugeTimes = 0;
int czyGramJeszczeRaz = 1;
bool tinySwitch = true;
bool hugeSwitch = true;
bool ultimateSwitch = true;
string pauza;

class Bus
{
public:
	//Atributes
	int rows;
	int columns;
	int passangersMin;
	int passangersMax;
	string leftWing;
	string rightWing;
	//constructor
	Bus(int x, int y, int w, int z, string s, string t)
	{
		rows = x;
		columns = y;
		passangersMin = w;
		passangersMax = z;
		leftWing = s;
		rightWing = t;
	}
};

// FUNKCJE
void CLSCR()
{
	system("cls");
}

void RDLN()
{
	getline(cin, pauza);
}



void wygranaGra(double yourSC)
{
	CLSCR();
	cout << setprecision(2) << fixed;
	cout << "@--------------------------------------@" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|    T H A T' S    T H E    S P O T,   |" << endl;
	cout << "|         Y O U    L I V E D !         |" << endl;
	cout << "|     \\                      \\         |" << endl;
	cout << "|      \\_________     ________\\        |" << endl;
	cout << "|       |        |===|         |       |" << endl; 
	cout << "|        \\______/     \\_______/        |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|         your score was: " << yourSC << "         |" << endl;
	cout << "@--------------------------------------@" << endl;
	cout << "|           Enter to continue          |" << endl;
	cout << "@--------------------------------------@" << endl;
	RDLN();
}

void przegranaGra(double bestSC, double yourSC)
{
	CLSCR();
	cout << setprecision(2) << fixed;
	cout << "@--------------------------------------@" << endl;
	cout << "|                                      |" << endl;
	cout << "|  Y O U    G O T    I N F E C T E D , |" << endl;
	cout << "|          N E X T    T I M E          |" << endl;
	cout << "|    B E   M O R E   C A R E F U L     |" << endl;
	cout << "|           _______________            |" << endl;
	cout << "|    |     |       |       |           |" << endl;
	cout << "|    |-----|-------|        |======-   |" << endl;
	cout << "|    |     |_______|_______|           |" << endl;
	cout << "|                                      |" << endl;
	cout << "|         best score was: " << bestSC << "         |" << endl;
	cout << "|         your score was: " << yourSC << "         |" << endl;
	cout << "@--------------------------------------@" << endl;
	cout << "|           Enter to continue          |" << endl;
	cout << "@--------------------------------------@" << endl;
	RDLN();
}

void playAgain()
{
	CLSCR();
	cout << "@--------------------------------------@" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|           ONE  MORE  TIME?           |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "@--------------------------------------@" << endl;
	cout << "|       YES! (1)         NO! (0)       |" << endl;
	cout << "@--------------------------------------@" << endl;
	RDLN();
}

void exitScreen()
{
	CLSCR();
	cout << "@--------------------------------------@" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|          SEE YOU NEXT TIME!          |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "@--------------------------------------@" << endl;
	cout << "|            Enter to exit             |" << endl;
	cout << "@--------------------------------------@" << endl;
	RDLN();
}

void gameOver()
{
	CLSCR();
	cout << "@--------------------------------------@" << endl;
	cout << "|   Y O U    B A S I C L Y    S A T    |" << endl;
	cout << "|        O N    D E S E A S E          |" << endl;
	cout << "|          I N C U B A T O R           |" << endl;
	cout << "|                                      |" << endl;
	cout << "|               ______                 |" << endl;
	cout << "|              | () ()|                |" << endl;
	cout << "|              |_  /\\ |                |" << endl;
	cout << "|                |_|_|                 |" << endl;
	cout << "|                \\   /                 |" << endl;
	cout << "|                  X                   |" << endl;
	cout << "|                 / \\                  |" << endl;
	cout << "@--------------------------------------@" << endl;
	cout << "|            Enter to exit             |" << endl;
	cout << "@--------------------------------------@" << endl;
	RDLN();
}

void tinySECRET()
{
	CLSCR();
	cout << "@-------------TINY-SECRET--------------@" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|             ______________________   |" << endl;
	cout << "|            |I remember now...     |  |" << endl;
	cout << "|            |...there used to be   |  |" << endl;
	cout << "|            |a very tiny bus....   |  |" << endl;
	cout << "|  __V__     |...line   0   was it? |  |" << endl;
	cout << "| /     \\    |__  __________________|  |" << endl;
	cout << "|C|O _| O|     |/                      |" << endl;
	cout << "| \\  _  /                              |" << endl;
	cout << "|_/     \\_                             |" << endl;
	cout << "@--------------------------------------@" << endl;
	cout << "|           Enter to continue          |" << endl;
	cout << "@--------------------------------------@" << endl;
	RDLN();
}

void hugeSECRET()
{
	CLSCR();
	cout << "@-------------HUGE-SECRET--------------@" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|             ______________________   |" << endl;
	cout << "|            |I've heard about      |  |" << endl;
	cout << "|            |   true monster...    |  |" << endl;
	cout << "|            |bus sooooo huuuuge....|  |" << endl;
	cout << "|  __V__     |line   9   behemoth!  |  |" << endl;
	cout << "| /     \\    |__  __________________|  |" << endl;
	cout << "|C|O _| O|     |/                      |" << endl;
	cout << "| \\  _  /                              |" << endl;
	cout << "|_/     \\_                             |" << endl;
	cout << "@--------------------------------------@" << endl;
	cout << "|           Enter to continue          |" << endl;
	cout << "@--------------------------------------@" << endl;
	RDLN();
}

void ultimateSECRET()
{
	CLSCR();
	cout << "@------------ULTIMATE-SECRET-----------@" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|             ______________________   |" << endl;
	cout << "|            |There's no dick in    |  |" << endl;
	cout << "|            |the village, how they |  |" << endl;
	cout << "|            |say in Poland, yer the|  |" << endl;
	cout << "|  __V__     |biggest bus-freak here!  |" << endl;
	cout << "| /     \\    |__  __________________|  |" << endl;
	cout << "|C|O _| O|     |/                      |" << endl;
	cout << "| \\  _  /                              |" << endl;
	cout << "|_/     \\_                             |" << endl;
	cout << "@--------------------------------------@" << endl;
	cout << "|           Enter to continue          |" << endl;
	cout << "@--------------------------------------@" << endl;
	RDLN();
}

void secretRevealTime()
{
	if ((czyTinySecret == 2) && (tinySwitch == true))
	{
		tinySECRET();
		tinySwitch = false;
	}
	if ((czyHugeSecret == 2) && (hugeSwitch == true))
	{
		hugeSECRET();
		hugeSwitch = false;
	}
	if ((czyHugeSecret >= 2) && (czyTinySecret >= 2) && (tinyTimes >= 2) && (hugeTimes >= 2) && (ultimateSwitch == true))
	{
		ultimateSECRET();
		cout << "ULTIMATE" << endl;
		RDLN();
		ultimateSwitch = false;
	}
}

double calculateProbability(const std::vector<std::vector<int>>& vect, int PCr, int PCc, int VVr, int VVc) {
	int score = 0;
	for (int i = 0; i < VVr; i++)
	{
		for (int j = 0; j < VVc; j++)
		{
			if (vect[i][j] == 1)
			{
				int distance = std::abs(PCr - i) + std::abs(PCc - j);
				if (distance <= 1)
				{
					score += 10;  // High penalty for being next to a passenger
				}
				else if (distance <= 2)
				{
					score += 5;  // Penalty for being 2 seats away
				}
				else if (distance <= 3)
				{
					score += 3;  // Penalty for being 3 seats away
				}
				else if (distance <= 4)
				{
					score += 1;  // Penalty for being 4 seats away
				}
			}
		}
	}

	double probability = static_cast<double>(score) / (VVr * VVc);
	return probability;
}
//do proby rozwiazania problemu vectora i wywalania gry
bool testCoords(int boardv, int playerv)
{
	if (playerv <= boardv)
	{
		return true;
	}
	cout << " value higher than board dimention, enter value again" << endl;
	return false;
}
// GENERATOR PLANSZY
void generatorPlanszy(int x, int y, int w, int z, string s, string t)
{
	CLSCR();
	//pierwsze trzy linie gui
	cout << "@--------------------------------------@" << endl;
	cout << "| " << s;
	for (int j = 0; j < y; j++)
	{
		if (j <= 9)
		{
			cout << " " << j;
		}
		else
		{
			cout << j;
		}
	}
	cout << " " << t << endl;
	cout << "|                                      |" << endl;
	//stworzenie macierzy (vectorXvector) i wypelnienie zerami na start
	vector<vector<int>> vect(x, vector<int>(y));
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			vect[i][j] = 0;
		}
	}
	//wypelnienie planszy pasazerami
	int rndmRANGE = z;
	int middlePNGcount = rand() % rndmRANGE;
	for (int i = 0; i < middlePNGcount; i++)
	{
		int rndmROW = rand() % x;
		int	rndmCOL = rand() % y;
		vect[rndmROW][rndmCOL] = 1;
	}
	//wydrukowanie lini z macierza(plansza) + po bokach ozdoby
	for (int i = 0; i < x; i++)
	{
		cout << "| " << i << s;
		for (int j = 0; j < y; j++)
		{
			cout << vect[i][j] << " ";
		}
		cout << t << endl;
	}
	//dopelnienie dolnych lini jesli trzeba (w zaleznosci ile wierszy generowal przed chwila
	if (x == 3)
	{
		cout << "|                                      |" << endl;
		cout << "|                                      |" << endl;
		cout << "|                                      |" << endl;
		cout << "|                                      |" << endl;
		cout << "|                                      |" << endl;
	}
	else if (x == 4)
	{
		cout << "|                                      |" << endl;
		cout << "|                                      |" << endl;
		cout << "|                                      |" << endl;
		cout << "|                                      |" << endl;
	}
	else if (x == 6)
	{
		cout << "|                                      |" << endl;
		cout << "|                                      |" << endl;
	}
	//ostatnie linie
	cout << "{row} > [spacebar]  > {column} > [enter]" << endl;
	cout << "@--------------------------------------@" << endl;
	cout << "|          Where do you seat?          |" << endl;
	cout << "@--------------------------------------@" << endl;
	/*
	PRACE NA MECHANIZMEM BLOKUJACYM MOZLIWOSC PODANIA X LUB Y
	POZA SKALA MACIERZY
	
	
	int playerX, playerY;
	bool pXbool, pYbool;
	do
	{
		pXbool = false;
		cin >> playerX;
		pXbool = testCoords(x, playerX);
	} while (pXbool == false);
	do
	{
		pYbool = false;
		cin >> playerY;
		pYbool = testCoords(x, playerY);
	} while (pYbool == false);
	*/

	//prosty mechanizm przyjmowania coordynatow do wywalenia jak sie fix duzy zrobi
	int playerX, playerY;
	cin >> playerX >> playerY;
	//sprawdzanie wyniku - nowa macierz z zapisanymi wynikami
	vector<vector<double>> vectSCR(x, vector<double>(y));
	double currentMaxScore = 9;
	double MScore = 9;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (vect[i][j] == 0) {
				currentMaxScore = calculateProbability(vect, i, j, x, y);
				vectSCR[i][j] = currentMaxScore;
				if (currentMaxScore < MScore) {
					MScore = currentMaxScore;
				}
			}
			else {
				vectSCR[i][j] = 9.9;

			}
		}
	}
	//drukowanie macierzy wyników - info techniczne, ukryte na czas gry
	/*
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cout << vectSCR[i][j] << " ";
		}
		cout << endl;
	}
	*/
	double probability;
	if (vect[playerX][playerY] == 1)
	{
		probability = 666.0;
	}
	else
	{
		probability = calculateProbability(vect, playerX, playerY, x, y);
	}
	
	if (probability <= currentMaxScore)
	{
		wygranaGra(probability);
		if (x == 4)
		{
			czyTinySecret++;
		}
		if (x == 6)
		{
			czyHugeSecret++;
		}
		if (x == 3)
		{
			tinyTimes++;
		}
		if (x == 8)
		{
			hugeTimes++;
		}

	}
	else if (probability == 666.0)
	{
		gameOver();
	}
	else
	{
		przegranaGra(currentMaxScore, probability);
	}
	RDLN();
}

void PCtinyBus()
{
	CLSCR();
	cout << "@--------------------------------------@" << endl;
	cout << "|                                      |" << endl;
	cout << "|             you prefer...            |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|              TINY ONE!               |" << endl;
	cout << "|             ___________              |" << endl;
	cout << "|             |     |    |             |" << endl;
	cout << "|             |_____|____|             |" << endl;
	cout << "|               O      O               |" << endl;
	cout << "|                                      |" << endl;
	cout << "@--------------------------------------@" << endl;
	cout << "|           Enter to continue          |" << endl;
	cout << "@--------------------------------------@" << endl;
	RDLN();
}

void PCsmallBus()
{
	CLSCR();
	cout << "@--------------------------------------@" << endl;
	cout << "|                                      |" << endl;
	cout << "|             you prefer...            |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|              SMALL ONE!              |" << endl;
	cout << "|         __________________           |" << endl;
	cout << "|         |            |    |          |" << endl;
	cout << "|         |____________|____|          |" << endl;
	cout << "|            O           O             |" << endl;
	cout << "|                                      |" << endl;
	cout << "@--------------------------------------@" << endl;
	cout << "|           Enter to continue          |" << endl;
	cout << "@--------------------------------------@" << endl;
	RDLN();
}

void PClargeBus()
{
	CLSCR();
	cout << "@--------------------------------------@" << endl;
	cout << "|                                      |" << endl;
	cout << "|             you prefer...            |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|              LARGE ONE!              |" << endl;
	cout << "|      ________________________        |" << endl;
	cout << "|     |          |        |    |       |" << endl;
	cout << "|     |__________|________|____|       |" << endl;
	cout << "|          O        O       O          |" << endl;
	cout << "|                                      |" << endl;
	cout << "@--------------------------------------@" << endl;
	cout << "|           Enter to continue          |" << endl;
	cout << "@--------------------------------------@" << endl;
	RDLN();
}

void PChugeBus()
{
	CLSCR();
	cout << "@--------------------------------------@" << endl;
	cout << "|                                      |" << endl;
	cout << "|             you prefer...            |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|              HUGE ONE!               |" << endl;
	cout << "|      ________________________        |" << endl;
	cout << "|     |          |        |    |       |" << endl;
	cout << "|     |          |        |    |       |" << endl;
	cout << "|     |__________|________|____|       |" << endl;
	cout << "|         OOO        OOO     O         |" << endl;
	cout << "@--------------------------------------@" << endl;
	cout << "|           Enter to continue          |" << endl;
	cout << "@--------------------------------------@" << endl;
	RDLN();
}

void titleScr()
{
	CLSCR();
	cout << "@--------------------------------------@" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|            B  R  A  I  N             |" << endl;
	cout << "|            W  O  R  K  S             |" << endl;
	cout << "|              H  A  R  D              |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "@-------------Warsaw-2023--------------@" << endl;
}

void titleScr2()
{
	CLSCR();
	cout << "@--------------------------------------@" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|               game by                |" << endl;
	cout << "|        N E S T O R A L I E N 4       |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "@-------------Warsaw-2023--------------@" << endl;
}

void titleScrMain()
{
	CLSCR();
	cout << "@--------------------------------------@" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|             | INFECTED |             |" << endl;
	cout << "|             | ONE      |             |" << endl;
	cout << "|             | RIDES    |             |" << endl;
	cout << "|             | THE BUS  |             |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "@--------------------------------------@" << endl;
	cout << "|           Enter to continue          |" << endl;
	cout << "@--------------------------------------@" << endl;
}

void ctrlScr()
{
	CLSCR();
	cout << "@--------------------------------------@" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|         \\  C O N T R O L S /         |" << endl;
	cout << "|          \\ [ENTER]ok/next /          |" << endl;
	cout << "|           \\  [SPACEBAR]  /           |" << endl;
	cout << "|            \\ {INTEGERS} /            |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "@--------------------------------------@" << endl;
	cout << "|           Enter to continue          |" << endl;
	cout << "@--------------------------------------@" << endl;
}

void plotScr()
{
	CLSCR();
	cout << "@--------------------------------------@" << endl;
	cout << "|                                      |" << endl;
	cout << "|           covid outbreak,            |" << endl;
	cout << "|                                      |" << endl;
	cout << "|         infected everywhere,         |" << endl;
	cout << "|                                      |" << endl;
	cout << "|            you are on your           |" << endl;
	cout << "|         way to the pharmacy,         |" << endl;
	cout << "|                                      |" << endl;
	cout << "|        choose the safest seat        |" << endl;
	cout << "|             on the bus!              |" << endl;
	cout << "|                                      |" << endl;
	cout << "@--------------------------------------@" << endl;
	cout << "|           Enter to continue          |" << endl;
	cout << "@--------------------------------------@" << endl;
}

void firstChoice()
{
	CLSCR();
	cout << "@--------------------------------------@" << endl;
	cout << "|                                      |" << endl;
	cout << "|          Here comes the bus...       |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|             SMALL one? (1)           |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                  or                  |" << endl;
	cout << "|                                      |" << endl;
	cout << "|             LARGE one? (2)           |" << endl;
	cout << "|                                      |" << endl;
	cout << "|...for unusual sizes ask the driver...|" << endl;
	cout << "@--------------------------------------@" << endl;
	cout << "|         How u like your bus?         |" << endl;
	cout << "@--------------------------------------@" << endl;
}

void PCnoBus()
{
	CLSCR();
	cout << "@--------------------------------------@" << endl;
	cout << "|                                      |" << endl;
	cout << "|             you prefer...            |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|          ...to choose again!         |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "|                                      |" << endl;
	cout << "@--------------------------------------@" << endl;
	cout << "|           Enter to continue          |" << endl;
	cout << "@--------------------------------------@" << endl;
	RDLN();
}







//MAIN
int main()
{
	Bus SMALLbus(4, 8, 8, 24, "         ", "           |");
	Bus LARGEbus(6, 12, 18, 54, "      ", "      |");
	Bus TINYbus(3, 6, 6, 12, "            ", "            |");
	Bus HUGEbus(8, 14, 28, 84, "   ", "     |");

	titleScr();
	Sleep(1500);
	titleScr2();
	Sleep(1500);
	titleScrMain();
	RDLN();
	ctrlScr();
	RDLN();
	plotScr();
	RDLN();
	bool czyGramJeszczeRaz = true;
	while (czyGramJeszczeRaz == true)
	{
		firstChoice();
		int PCbus;
		cin >> PCbus;
		while (PCbus != 0 && PCbus != 1 && PCbus != 2 && PCbus != 9)
		{
			PCnoBus();
			RDLN();
			firstChoice();
			cin >> PCbus;
		}
		if (PCbus == 0)
		{
			PCtinyBus();
		}
		else if (PCbus == 1)
		{
			PCsmallBus();
		}
		else if (PCbus == 2)
		{
			PClargeBus();
		}
		else if (PCbus == 9)
		{
			PChugeBus();
		}
		RDLN();

		Bus* pointBus;
		switch (PCbus)
		{
		case 0:
			pointBus = &TINYbus;
			break;
		case 1:
			pointBus = &SMALLbus;
			break;
		case 2:
			pointBus = &LARGEbus;
			break;
		case 9:
			pointBus = &HUGEbus;
			break;
		default:
			cout << "ALARM! ALARM!";
			pointBus = &SMALLbus;
			break;
		}
		generatorPlanszy(pointBus->rows, pointBus->columns, pointBus->passangersMin, pointBus->passangersMax, pointBus->leftWing, pointBus->rightWing);
		//czy ktorys sekret do pokazania
		secretRevealTime();
		//czy grasz ponownie
		playAgain();
		int graszDalejQM;
		cin >> graszDalejQM;
		if ((graszDalejQM != 0) && (graszDalejQM != 1))
		{
			cin >> graszDalejQM;
		}
		else if (graszDalejQM == 1)
		{
			czyGramJeszczeRaz = true;
		}
		else
		{
			czyGramJeszczeRaz = false;
		}
		
	};

	exitScreen();
	return 0;
}
