#include "class.hpp"
int main()
{
    fstream file;
    HangmanModel model(file);
    HangmanView view(model);
    HangmanController ctrl(model, view);
    cout<<model.GuessMovie()<<endl;
    ctrl.CheckLetter();
}
