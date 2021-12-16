#include "header.hpp"
void Board::print_matrix(){
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
void Board::insert_matrix(){
    matrix = new char*[rows];
    for(int i=0; i<rows; i++)
        matrix[i] = new char[cols];
	for(int i=0; i<rows; i++){
		for (int j = 0; j < cols; j++)
		{
			if(i==0 || i==rows-1){
                matrix[i][j]='*';
			}
            else if(j==0 || j==cols-1)
                matrix[i][j] = '*';
            else
                matrix[i][j] = ' ';
		}
	}
}
void Board::draw_char(struct Point&p, char ch){
    matrix[int(p.x)][int(p.y)] = ch;
}
void Board::draw_up_line(struct Point&p, char ch){
    int x=p.x;
    int y=p.y;
    for(int i=1; i!=x; i++){
        matrix[i][y] = ch;
    }
}
void Board::draw_line(struct Point&p1, struct Point&p2, char ch){
    int maxx, maxy, minx, miny;
    maxx = (p1.x >= p2.x)? p1.x: p2.x;
    miny = (p1.y <= p2.y)? p1.y: p2.y;
    minx = (p1.x <= p2.x)? p1.x: p2.x;
    maxy = (p1.y >= p2.y)? p1.y: p2.y;
    cout<<maxx<<" "<<miny<<endl;
    cout<<minx<<" "<<maxy<<endl;
    while(maxx!=minx && miny!=maxy){
        if(maxx>minx && miny<maxy){
            maxx--;
            miny++;
            cout<<"1.if"<<maxx<<" "<<miny<<endl;
            matrix[maxx][miny] = ch;
        }
        else if(maxx==minx && miny < maxy){
            miny++;
            matrix[maxx][miny] = ch;
            cout<<"2.if"<<maxx<<" "<<miny<<endl;
        }
        else{
            maxx--;
            matrix[maxx][miny] = ch;
            cout<<"else"<<maxx<<" "<<miny<<endl;
        }
    }
}
