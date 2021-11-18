#include "zad4.cpp"
int main()
{
    default_random_engine generator;
    uniform_real_distribution<double> distribution(2,6);
    cout<<"Unesite broj meta:"<<endl;
    unsigned n;
    cin>>n;
    target*t=new target[n];
    weapon w(4.25, 4.88, 3.55, 20, 20);
    for(int i=0; i<n; i++)
    {
        double x1=distribution(generator), y1=distribution(generator), z1=distribution(generator),
        x2=distribution(generator), y2=distribution(generator), z2=distribution(generator);

        t[i].set(x1,y1,z1,x2,y2,z2);
        cout<<x1<<" "<<y1<<" "<<z1<<" "<<x2<<" "<<y2<<" "<<z2<<endl;

        double wx, wy, wz, num_c;
        w.shoot(&wx,&wy,&wz, &num_c);
        cout<<wx<<" "<<wy<<" "<<wz<<" "<<num_c<<endl;

        if(wx<=x2 && wx >=x1 && wy<=y2 && wy>= y1)
        {
            t[i].hit();
        }
        else
        {
            t[i].no_hit();
        }
        if(num_c==0)
            break;
    }
    delete[] t;
    return 0;
}
