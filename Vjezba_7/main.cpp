#include "header.hpp"
int main()
{
    Point p1, p2, p3, p4;
    p1.x = 6;
    p1.y = 1;
    p2.x = 1;
    p2.y = 6;
    p3.x = 15;
    p3.y = 1;
    p4.x = 15;
    p4.y = 15;
    Board b(20,20);
    b.insert_matrix();
    //b.draw_char(p1, 'o');
    //b.draw_char(p2, 'o');
    //b.draw_up_line(p, 'x');
    b.draw_line(p1, p2, 'x');
    //b.draw_line(p3, p4, 'x');
    b.print_matrix();
    return 0;
}
