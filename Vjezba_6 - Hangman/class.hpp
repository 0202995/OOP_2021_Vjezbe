/*Klasa HangmanModel opisuje rečenicu koju treba pogoditi, trenutno stanje rečenice
koju gradimo, slova koja su pogođena i slično.
2. Klasa HangmanView opisuje prikaz vješala, prikaz trenutnog stanja rečenice koja se
gradi i prikaz pogođenih/promašenih slova.
3. Klasa HangmanController omogućuje i verificira unos, updatea prikaz, modificira
model.*/
#include <iostream>
#include <random>
#include <fstream>
#include <cstdio>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;
using std::string;
using std::vector;

class HangmanModel
{
    string movie;
    string guessMovie;
    int lives=8;
    bool inGame;
public:
    HangmanModel(fstream&file_name)
    {
        this->select_random_movie(file_name);
    }
    HangmanModel(){}
    bool game();
    void select_random_movie(fstream&file);
    string Movie(){return this->movie;}
    string GuessMovie(); //stvara crtice za pogadjanje slova
    string SetGuessMovie(string&s){this->guessMovie=s; return this->guessMovie;} //zamjenjuje crtice slovima
    void reduce_lives(){this->lives -=1; cout<<"Missed entry"<<endl;}
    int getlives(){return this->lives;}
};

class HangmanView
{
    HangmanModel model;
    vector<char> usedLetters;
public:
    HangmanView(const HangmanModel&modelView)
    {
        this->model = modelView;
    }
    HangmanView(){}
    void DisplayCurrentProgress(const string&s){cout<<s<<endl;}
    void SetUsedLetters(char&ch){this->usedLetters.push_back(ch);}
    void DisplayUsedLetters();
    void DisplayHangman(int&num);
};

class HangmanController
{
    HangmanModel model;
    HangmanView view;
    char letter;
    int correct_cnt=0;
public:
    HangmanController(const HangmanModel&modelCtrl, const HangmanView&viewCtrl)
    {
        this->SetModel(modelCtrl);
        this->SetView(viewCtrl);
    }
    void SetModel(const HangmanModel&modelSet)
    {
        this->model = modelSet;
    }
    void SetView(const HangmanView&viewSet)
    {
        this->view = viewSet;
    }
    void UserEntry(){cout<<"Enter a letter"<<endl; cin>>this->letter; view.SetUsedLetters(this->letter);}
    void CheckLetter();
    int UpdateLives();
    int CntPossibleAnswer();
    int CheckIfGameIsOver();
};



