#include "class.hpp"
bool HangmanModel::game()
{
    if(this->lives == 0)
    {
        cout<<"Game over. No more lives"<<endl;
        return this->inGame=false;
    }
    else
        return this->inGame=true;
}
void HangmanModel::select_random_movie(fstream&file)
{
    srand((unsigned)time(0));
    int rnd;
    rnd = (rand()%38)+0;
    file.open("movie.txt");
    if(!file)
        cout<<"ERROR: File could not be opened."<<endl;
    int cnt=0;
    string s;
    while(getline(file, s))
    {
        if(cnt==rnd)
            break;
    cnt++;
    }
    movie=s;
    cout<<"Let's play Hangman. In the game you have to enter letters or number to find out the movie name."<<endl<<
    "You have eight lives. Have fun!"<<endl;
    file.close ();
}
string HangmanModel::GuessMovie()
{
    string guess;
    string movie = Movie();
    for (int i=0; i<movie.size(); i++)
    {
        if(movie[i] == ' ')
            guess.push_back(' ');
        if(movie[i] == ':')
            guess.push_back(':');
        if(int(movie[i]) == 39)
            guess.push_back(movie[i]);
        if(isalpha(movie[i]))
            guess.push_back('_');
        if(isdigit(movie[i]))
            guess.push_back('_');
    }
    this->guessMovie=guess;
    return this->guessMovie;

}
void HangmanView::DisplayUsedLetters()
{
    cout<<"Used letters:";
    size_t size = this->usedLetters.size();
    for(int i=0; i<size; i++)
    {
        cout<<usedLetters[i]<<" ";
    }
    cout<<endl;
}
void HangmanView::DisplayHangman(int&num)
{
    cout<<"Num="<<num<<endl;
    if(num==7)
    {
        cout<<"_____"<<endl;
    }
    if(num==6)
    {
        cout<<"  |  "<<endl;
        cout<<"  |  "<<endl;
        cout<<"  |  "<<endl;
        cout<<"_____"<<endl;
    }
    if(num==5)
    {
        cout<<"  |  "<<endl;
        cout<<"  |  "<<endl;
        cout<<"  |  "<<endl;
        cout<<"  |  "<<endl;
        cout<<"  |  "<<endl;
        cout<<"  |  "<<endl;
        cout<<"  |  "<<endl;
        cout<<"_____"<<endl;
    }
    if(num==4)
    {
        cout<<"  ______"<<endl;
        cout<<"  | / "<<endl;
        cout<<"  |/  "<<endl;
        cout<<"  |  "<<endl;
        cout<<"  |  "<<endl;
        cout<<"  |  "<<endl;
        cout<<"  |  "<<endl;
        cout<<"  |  "<<endl;
        cout<<"_____"<<endl;
    }
    if(num==3)
    {
        cout<<"  ______"<<endl;
        cout<<"  | /  |"<<endl;
        cout<<"  |/   O"<<endl;
        cout<<"  |  "<<endl;
        cout<<"  |  "<<endl;
        cout<<"  |  "<<endl;
        cout<<"  |  "<<endl;
        cout<<"  |  "<<endl;
        cout<<"_____"<<endl;
    }
    if(num==2)
    {
        cout<<"  ______"<<endl;
        cout<<"  | /  |"<<endl;
        cout<<"  |/   O"<<endl;
        cout<<"  |   /|\\"<<endl;
        cout<<"  |  "<<endl;
        cout<<"  |  "<<endl;
        cout<<"  |  "<<endl;
        cout<<"  |  "<<endl;
        cout<<"_____"<<endl;
    }
    if(num==1)
    {
        cout<<"  ______"<<endl;
        cout<<"  | /  |"<<endl;
        cout<<"  |/   O"<<endl;
        cout<<"  |   /|\\"<<endl;
        cout<<"  |    |"<<endl;
        cout<<"  |  "<<endl;
        cout<<"  |  "<<endl;
        cout<<"  |  "<<endl;
        cout<<"_____"<<endl;
    }
    if(num==0)
    {
        cout<<"  ______"<<endl;
        cout<<"  | /  |"<<endl;
        cout<<"  |/   O"<<endl;
        cout<<"  |   /|\\"<<endl;
        cout<<"  |    |"<<endl;
        cout<<"  |   / \\"<<endl;
        cout<<"  |  "<<endl;
        cout<<"  |  "<<endl;
        cout<<"_____"<<endl;
    }
}
void HangmanController::CheckLetter()
{
    string movie=model.Movie();
    string guess=model.GuessMovie();
    while(model.game())
    {
        UserEntry();
        char ch = this->letter;
        view.SetUsedLetters(ch);
        vector<int> v;
        int found = movie.find(ch);
        while(found!=string::npos)
        {
            this->correct_cnt+=1;
            v.push_back(found);
            found=movie.find(ch, found+1);
        }
        for(int i=0; i<v.size(); i++)
        {
            guess[v[i]]=ch;
        }
        if(v.empty())
            model.reduce_lives();
        int num = UpdateLives();
        this->model.SetGuessMovie(guess);
        view.DisplayCurrentProgress(guess);
        view.DisplayUsedLetters();
        view.DisplayHangman(num);
        if(!CheckIfGameIsOver())
            break;
    }
}
int HangmanController::UpdateLives()
{
    return model.getlives();

}
int HangmanController::CntPossibleAnswer()
{
    string movie = model.Movie();
    int size = movie.size();
    for(int i=0; i<movie.size(); ++i )
    {
        if(movie[i]==' ' || movie[i] == ':' || int(movie[i]) == 39)
            size--;
    }
    return size;
}
int HangmanController::CheckIfGameIsOver()
{
    size_t movie = CntPossibleAnswer();
    if(this->correct_cnt == movie)
    {
        cout<<"Game over"<<endl;
        return 0;
    }
    else
        return 1;
}
