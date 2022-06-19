#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;

void welcome();
void getBabyWeight(double &);
void findLowest(double, double, double, double, double);
void findHighest(double, double, double, double, double);

int main() {
  double baby1, baby2, baby3, baby4, baby5, averageWeight;

  welcome();
  cout << "\n\n";
  getBabyWeight(baby1);

  getBabyWeight(baby2);

  getBabyWeight(baby3);

  getBabyWeight(baby4);

  getBabyWeight(baby5);

  findLowest(baby1, baby2, baby3, baby4, baby5);
  findHighest(baby1, baby2, baby3, baby4, baby5);
}

void welcome() {

  cout << "\n";
  cout << std::setw(60) << std::setfill('*') << "*\n\n";
  cout << std::setfill(' ') << std::setw(40) << std::right
       << "Baby Weight Program\n\n";
  cout << std::setw(48) << "Please enter the five baby weights.\n";
  cout << "Please enter a real number, weights must be greater than 0.\n";
  cout << "\n\n\n";
  cout << std::setw(48) << "Program Developed by: Chris Hinson\n\n";
  cout << std::setw(60) << std::setfill('*') << "*";
}

void getBabyWeight(double &babyWeight) {
  cout << "Please enter a weight: ";
  cin >> babyWeight;
  cout << "\n";
  while (babyWeight <= 0) {
    cout << "Please enter a number greater than 0: ";
    cin >> babyWeight;
    cout << "\n";
  }
}

void findLowest(double low1, double low2, double low3, double low4,
                double low5) {
  double lowest;
  bool tie = false;
  if (low1 <= low2 && low1 <= low3 && low1 <= low4 && low1 <= low5) {
    lowest = low1;
    if (lowest == low2 || lowest == low3 || lowest == low4 || lowest == low5) {
      tie = true;
    } else {
      cout << "Baby #1 has the lowest weight at: " << lowest;
    }
  }
  if (low2 <= low1 && low2 <= low3 && low2 <= low4 && low2 <= low5) {
    lowest = low2;
    if (lowest == low1 || lowest == low3 || lowest == low4 || lowest == low5) {
      tie = true;
    } else {
      cout << "Baby #2 has the lowest weight at: " << lowest;
    }
  }
  if (low3 <= low1 && low3 <= low2 && low3 <= low4 && low3 <= low5) {
    lowest = low3;
    if (lowest == low1 || lowest == low2 || lowest == low4 || lowest == low5) {
      tie = true;
    } else {
      cout << "Baby #3 has the lowest weight at: " << lowest;
    }
  }
  if (low4 <= low1 && low4 <= low2 && low4 <= low3 && low4 <= low5) {
    lowest = low4;
    if (lowest == low1 || lowest == low2 || lowest == low3 || lowest == low5) {
      tie = true;
    } else {
      cout << "Baby #4 has the lowest weight at: " << lowest;
    }
  }
  if (low5 <= low1 && low5 <= low2 && low5 <= low3 && low5 <= low4) {
    lowest = low5;
    if (lowest == low1 || lowest == low2 || lowest == low3 || lowest == low4) {
      tie = true;
    } else {
      cout << "Baby #5 has the lowest weight at: " << lowest;
    }
  }
  if (tie == true)
    cout << "There is a tie!! No low weight today.";
  cout << "\n\n";
}

void findHighest(double high1, double high2, double high3, double high4,
                 double high5) {
  double highest;
  bool tie = false;
  if (high1 >= high2 && high1 >= high3 && high1 >= high4 && high1 >= high5) {
    highest = high1;
    if (highest == high2 || highest == high3 || highest == high4 || highest == high5) {
      tie = true;
    } else {
      cout << "Baby #1 has the highest weight at: " << highest;
    }
  }
  if (high2 >= high1 && high2 >= high3 && high2 >= high4 && high2 >= high5) {
    highest = high2;
    if (highest == high1 || highest == high3 || highest == high4 || highest == high5) {
      tie = true;
    } else {
      cout << "Baby #2 has the highest weight at: " << highest;
    }
  }
  if (high3 >= high1 && high3 >= high2 && high3 >= high4 && high1 >= high5) {
    highest = high3;
    if (highest == high1 || highest == high2 || highest == high4 || highest == high5) {
      tie = true;
    } else {
      cout << "Baby #3 has the highest weight at: " << highest;
    }
  }
  if (high4 >= high1 && high4 >= high2 && high4 >= high3 && high4 >= high5) {
    highest = high4;
    if (highest == high1 || highest == high2 || highest == high3 || highest == high5) {
      tie = true;
    } else {
      cout << "Baby #4 has the highest weight at: " << highest;
    }
  }
  if (high5 >= high1 && high5 >= high2 && high5 >= high3 && high5 >= high4) {
    highest = high5;
    if (highest == high1 || highest == high2 || highest == high3 || highest == high4) {
      tie = true;
    } else {
      cout << "Baby #5 has the highest weight at: " << highest;
    }
  }
  if (tie == true)
    cout << "There is a tie!! No high weight today.";
  cout << "\n\n";
  
                 }