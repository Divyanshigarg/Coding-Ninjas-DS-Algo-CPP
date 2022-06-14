Sample Input 1 :
4 5
6 7
1
Sample Output 1 :
10 + i12
Sample Input 2 :
4 5
6 7
2
Sample Output 2 :
-11 + i58


/**********
 
Following is the main function we are using internally.
Refer this for completing the ComplexNumbers class.
 
 
int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }
    
}
 
 ************/


class ComplexNumbers {
     private:
    int real;
    int imag;
    
    public:
    ComplexNumbers(int real ,int imag)
    {
        this->real=real;
        this->imag=imag;
    }
    
    void print()
    {
        cout<<real<<" "<<"+"<<" "<<"i"<<imag<<endl;
        
    }
    void plus( ComplexNumbers c2)
    {
        this->real=real+c2.real;       ///this is not compulsory to use as it already know about it;
        imag=imag+c2.imag;
    }
    void multiply(ComplexNumbers const & c2 )
    {
        int x=(real*c2.real)-(imag*c2.imag);
        int y=(real*c2.imag)+(imag*c2.real);
        real=x;
        imag=y;
    }
};
