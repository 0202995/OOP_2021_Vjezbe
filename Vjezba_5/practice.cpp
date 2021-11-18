#include <iostream>
#include <random>
using namespace std;
int main()
{
    default_random_engine generator;
    uniform_real_distribution<double> distribution(1,6);
    for(int i=0; i<3; i++)
    {
        double dice_roll = distribution(generator);
        cout<<dice_roll<<endl;
    }
}
