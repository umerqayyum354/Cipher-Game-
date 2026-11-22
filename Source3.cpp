#include <iostream>
#include <cctype>

using namespace std;
int score = 0;

// Levels of the Game :
bool level1();
bool level2(int&);
bool level3(int&);
bool level4(int&);

int gameCounter = 1;


int main() {

	// Menu of the game :
	cout << "WELCOME TO GAME\n";
	cout << "1.Start\n";
	cout << "2.View Score\n";
	cout << "3.End\n";

	// Loop for the chocie of user to play as many games :
	for (int choice = 0; choice != 3;)
	{

		if (gameCounter != 1){
		cout << "\nWould you like to do next ?\n";
		cout << "1.Start\n";
		cout << "2.View Score\n";
		cout << "3.End\n\n";
		}

		gameCounter++;

		cout << "Enter your choice : ";
		cin >> choice;


		// Game Started
		if (choice == 1)
		{
			cout << "Game started\n";
			

			// Calling level 1 function :
			if (level1()) {

				score = score + 10;


			}


			//Score cannot be negative
			if (score < 0) {

				score = 0;
			}

			cout << "\nYour current Score = " << score << endl;


			// calling level 2
			if (level2(score)) {

				score = score + 10;
			}

			if (score < 0) {

				score = 0;
			}

			cout << "\nYour current Score = " << score << endl;

			if (level3(score)) {

				score = score + 10;
			}

			if (score < 0) {

				score = 0;
			}

			cout << "\nYour current Score = " << score << endl;

			if (level4(score)) {

				score = score + 10;
			}

			if (score < 0) {

				score = 0;
			}

			// Displaying the Final Score :
			cout << "\n==============================\n";
			cout << "        Final Score : " << score << "\n";
			cout << "==============================\n";



		}

		else if (choice == 2)
		{
			cout << "Score : " << score << endl;
		}

		// Program Ended :
		else if (choice == 3)
		{
			cout << "Game Ended ";


		}
		// Handling Invalid Input :
		else
		{
			cout << "invalid choice\n";
			cin.clear();
			cin.ignore(1000, '\n');
		}

		


	}

}



	

bool level1() {
	//  Cipher : Arrange the Letters to make word
	string originalWord = "TREE";
	string answer;
	cout << "+--------------------------+\n";
	cout << "|         LEVEL 1          |\n";
	cout << "+--------------------------+\n";
	cout << "Arrange these letters to make a word : REET\n";
	cout << "(Type the word as one word, no spaces. Any case works.)\n";
	cout << "Your answer : ";

	cin >> answer;

	//Handling LowerCase Errors : 
	for (int k = 0; k < answer.length(); k++) {

		answer[k] = toupper(answer[k]);
	}


	// Score + 10 :
	if (answer == originalWord) {

		cout << "\nLevel Passed! You are awarded 10 points.\n";

		return true;
	}

	//  Score + 0 :
	else {
		cout << "\nLevel Failed! You are awarded 0 points.\n";

		return false;

	}




}


		// Cipher : Alphabets position in Integers :
bool level2(int& score) {

	int i = 1, j = 2;

	string answer;
	string originalCode = "1357";
	cout << "\n+--------------------------+\n";
	cout << "|         LEVEL 2          |\n";
	cout << "+--------------------------+\n";
	cout << "Solve the code in the form of integers : ACEG\n";
	cout << "(Type the digits together with no spaces, e.g. 4821)\n";
	cout << "Your answer : ";

	// 2 Tries Given :
	while (i <= 2) {

		cin >> answer;

		i++;
		j--;

		if (answer == originalCode) {

			cout << "\nLevel 2 Passed! You are awarded 10 points.\n";

			return true;
		}

		else if ((answer != originalCode) && (i <= 2)) {

			cout << "\nWrong answer! Tries left : " << j << "\n";
			cout << "-5 from your score\n";

			cout << "Hint : Compare each letter with its integer value.\n";
			cout << "Your answer : ";
			score = score - 5;
		}

		else {
			cout << "\nLevel Failed! You are awarded 0 points.\n";

			return false;

		}



	}
}

	// Mirror Cipher :
bool level3(int& score) {
	string originalWord = "BULLET";
	string word = "BULLET";

	for (int i = 0;i < word.length();i++) {
		if (word[i] >= 'A' && word[i] <= 'Z') {
			word[i] = ('A' + 'Z') - word[i];
		}
	}
	cout << "\n+--------------------------+\n";
	cout << "|         LEVEL 3          |\n";
	cout << "+--------------------------+\n";
	cout << "Hint :\n";
	cout << "A B C D E F G H I J K L M" << endl;
	cout << "Z Y X W V U T S R Q P O N" << endl;

	cout << "\nDecode this word : " << word << endl;
	cout << "(Type your guess as one word, no spaces. Any case works.)\n";
	cout << "Enter your guess : ";

	string guess;
	int b = 2;

	// Two Tries Given :
	for (int a = 1; a <= 2; a++) {


		b--;

		cin >> guess;

		for (int k = 0; k < guess.length(); k++) {

			guess[k] = toupper(guess[k]);
		}

		if (guess == originalWord) {
			cout << "\nLevel 3 Passed! You are awarded 10 points." << endl;
			return true;
		}
		else if ((guess != originalWord) && (b != 0)) {
			cout << "\nWrong guess! Tries left : " << b << "\n";
			cout << "-5 from your score\n";
			cout << "Hint : Mirror Cipher Encryption\n";
			cout << "Enter your guess : ";
			score = score - 5;
		}

		else {
			cout << "\nLevel Failed! You are awarded 0 points.\n";

			return false;

		}

	}
}

// Cipher : Shifting of Words :
bool level4(int& score) {
	string originalWord = "CROCODILE";
	string word = "CROCODILE";

	for (int i = 0;i < word.length();i++) {
		word[i] = 'A' + (word[i] - 'A' + 3) % 26;
	}

	cout << "\n+--------------------------+\n";
	cout << "|         LEVEL 4          |\n";
	cout << "+--------------------------+\n";
	cout << "Decode this word : " << word << endl;
	cout << "(Type your guess as one word, no spaces. Any case works.)\n";
	cout << "Enter your guess : ";

	string guess;
	int b = 2;

	for (int a = 1; a <= 2; a++) {


		b--;

		cin >> guess;

		for (int k = 0; k < guess.length(); k++) {

			guess[k] = toupper(guess[k]);
		}

		if (guess == originalWord) {
			cout << "\nLevel 4 Passed! You are awarded 10 points." << endl;

			return true;
		}
		else if ((guess != originalWord) && (b != 0)) {
			cout << "\nWrong guess! Tries left : " << b << "\n";
			cout << "-5 from your score\n";
			cout << "Hint : Shifting Cipher Encryption\n";
			cout << "Enter your guess : ";

			score = score - 5;
		}

		else {
			cout << "\nLevel Failed! You are awarded 0 points.\n";

			return false;

		}

	}



}
