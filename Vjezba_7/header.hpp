#include <iostream>
using namespace std;
struct Point{
    double x,y;
};

class Board{
    char** matrix;
    int rows, cols;
public:
    Board() = default;
    Board(int rows, int cols){
        this->rows = rows; this->cols = cols;
    }
    Board(const Board&other){
        rows = other.rows;
        cols = other.cols;
    }
    Board(Board&&other){
        matrix = other.matrix;
        other.matrix = nullptr;
        other.rows = 0;
        other.cols = 0;
        cout<<"move constructor"<<endl;
    }
    ~Board(){
        delete[] matrix;
        cout<<"destructor"<<endl;
    }
    void print_matrix();
    void insert_matrix();
    friend struct Point;
    void draw_char(struct Point&, char ch);
    void draw_up_line(struct Point&, char ch);
    void draw_line(struct Point&, struct Point&, char ch);
};

