#include <iostream> //Quiz game
int main() {
  char input;
  double score = 0;
  std::string questions[] = {"1.What is the capital of France?\n",
                             "2.Which is the largest ocean on Earth?\n",
                             "3.Is the earth flat?\n",
                             "4.In which year did India gain independence?\n"};
  std::string options[][4] = {
      {"A)london", "B)paris", "C)berlin", "D)lords"},
      {"A)atlantic", "B)pacific", "C)indian", "D)artic"},
      {"A)no", "B)yes", "C)idk ", "D)whats earth"},
      {"A)1950", "B)1948", "C)1947", "D)1946"}};
  char answerkey[] = {'B', 'B', 'A', 'C'};
  for (int i = 0; i < 4; i++) {
    std::cout << questions[i] << '\n' << '\n';
    for (int j = 0; j < 4; j++) {

      std::cout << options[i][j] << '\n';
    }
    std::cin >> input;
    input = toupper(input);
    if (input == answerkey[i]) {
      std::cout << "CORRECT";
      score++;
    } else {
      std::cout << "WRONG!!";
    }

    std::cout << '\n';
  }
  std::cout << "You have scored " << score / 4 * 100 << "%" << '\n';
  std::cout << "****************************************";
}