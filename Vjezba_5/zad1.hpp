class dot {
    double x,y,z;
public:
    void set(double x, double y, double z);
    void set_rand(double a, double b);
    void get(double *x, double *y, double *z)const;
    void print_dot() const;
    double distance2d(double x1, double y1, double z1, double x2, double y2, double z2);
    double distance3d(double x1, double y1, double z1, double x2, double y2, double z2);

};

