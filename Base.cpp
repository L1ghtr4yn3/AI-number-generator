#include <stdlib.h>
#include <iostream>
#include <time.h>
using namespace std;
int main() {
srand(time(NULL));               // Seed the random number generator
int goal = rand() % 100 + 1;     // goal will be 1-100, inclusive
double answer;
double counter;
counter = 0;
do {
cout << "I've thought of a number bewteen 1 and 100, what is your guess" << endl;
cin >> answer;
if (answer < 1)
cout << answer << " is not bewteen 1 and 100" << endl;
else if (answer > 100)
cout << answer << " is not between 1 and 100" << endl;
else if (answer == goal)
cout << answer << " is correct" << endl;
else {
if (answer >= goal - goal && answer <= goal -1  ) {
cout << "Your guess is:" << answer << " too Low" << endl;
}
else if (answer >= goal +1 && answer <= goal + 99) {
cout << "Your guess is:" << answer << " too High " << endl;
}
else if (answer == goal) {
cout << answer << " is correct" << endl;
}
}
counter++;
cout << "you've had " << counter << " attempts" << endl;
} while (answer != 0);
}
