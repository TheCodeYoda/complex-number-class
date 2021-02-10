class complex {
 private:
    double real_;
    double imag_;
 public:
    complex(double real=0.0,double imag=0.0);
    double mag() const;
    friend complex operator+(const complex& lhs,const complex& rhs);
    friend complex operator-(const complex& lhs,const complex& rhs);
    friend ostream& operator<<(ostream& ,const complex&);
    friend bool operator<(const complex& lhs,const complex& rhs);
    friend bool operator==(const complex& lhs,const complex& rhs);
    friend bool operator!=(const complex& lhs,const complex& rhs);
};
