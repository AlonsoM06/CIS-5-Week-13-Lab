#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

// Lab 13 — Alonso Martinez
// CIS 5 Week 13 · Names and a roster

struct Student {
  std::string name;
  int id;
  double gpa;
};

void printStudent(const Student& s) {
  cout << s.id << " " << s.name << " " << s.gpa << endl;
  
}

int main() {
  std::string first , last;
  std::cout << "First: ";
  std::cin >> first;
  std::cout << "Last: ";
  std::cin >> last;
  string full_name = first + " " + last;
  cout << "Full Name: " << full_name << endl;
  cout << "Length: " << full_name.size() << endl;


  const int N = 3;
  Student roster[N] = {
    {"Ada", 1, 3.9}, {"Ben", 2, 2.7}, {"Cy", 3, 3.2}
  };
  std::cout << "All students:\n";
  for (int i = 0; i < N; i++){
    printStudent(roster[i]);
  }

  std::cout << "Honors (gpa 3.0 or above):\n";
  int honors = 0;
  for (int i = 0; i < N; i++){
    if (roster[i].gpa >= 3.0) {
      printStudent(roster[i]);
      honors++;
    }
  }
  cout << honors << " of " << N << endl;
  
  return 0;
}
