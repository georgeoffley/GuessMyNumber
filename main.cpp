// Simple game for practicing C++. Learning from
// Kate Gregories amazing tut: https://app.pluralsight.com/library/courses/learn-program-cplusplus/table-of-contents

#include <iostream>
#include <cstdlib>

using std::cout;
using std::cin;

int main()
{
    int answer = rand() % 10;   // TODO: Improve this
    int guess;
    bool keepGuessing = true;

    cout << '\n' << "Welcome to the Guess My Number!" << '\n';

    while (keepGuessing)
    {
        cout << '\n' << "Please input your guess: " << '\n';
        cin >> guess;

        if (guess < answer)
        {
            cout << '\n' << "Not quite! Try a little more!" << '\n';
        }
        if (guess > answer)
        {
            cout << '\n' << "Not quite! Try a little less!" << '\n';
        }
        if (guess == answer)
        {
            keepGuessing = false;
        }
    }

    cout << '\n' << "Yes! You did it! Congratulations!" << '\n';

    return 0;
}