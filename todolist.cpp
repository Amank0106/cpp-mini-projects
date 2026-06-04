// to do list
#include <iostream>
int main() {
  int option = -1;
  int y;
  int x;

  std::string tasks[10];
  do {
    std::cout << "*************TO DO LIST**************\n";
    std::cout << '\n';
    std::cout << "1-view tasks\n";
    std::cout << "2- Add new tasks\n";
    std::cout << "3- remove a task\n";
    std::cout << "0- exit\n";
    std::cin >> option;
    switch (option) {
    case 1:

      for (std::string task : tasks) {
        std::cout << task << '\n';
      }
      break;
    case 2:
      std::cout << "HOW MANY TASKS YOU WANT TO DO\n";
      std::cin >> x;
      std::cin.ignore();
      if (x > 10) {
        std::cout << "Please enter less than or equal to 10\n";
      } else {
        for (int i = 0; i < x; i++) {

          std::cout << "ENTER TASK" << i + 1 << '\n';
          getline(std::cin, tasks[i]);
        }
      }

      break;
    case 3:
      std::cout << "ENTER TASK NOs\n";
      std::cin >> y;
      tasks[y - 1].clear();
    }

  } while (option != 0);
  std::cout
      << "**************************THANKS FOR VISTITING******************";
}