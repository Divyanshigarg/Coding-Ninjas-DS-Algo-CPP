Sample Input 1 :
3
1 3 5
1 2 -4
4
0 1 2 3
4 2 -3 1
1
Sample Output 1 :
4x0 3x1 -3x2 3x3 -4x5
Sample Input 2 :
3
1 3 5
1 2 -4
4
0 1 2 3
4 2 -3 1
2
Sample Output 2 :
-4x0 -1x1 3x2 1x3 -4x5
Sample Input 3 :
3
1 3 5
1 2 -4
4
0 1 2 3
4 2 -3 1
3
Sample Output 3 :
4x1 2x2 5x3 5x4 -22x5 -6x6 12x7 -4x8
/*************
 Driver program to test below functions
 
int main()
{
    int count1,count2,choice;
    cin >> count1;
    
    int *degree1 = new int[count1];
    int *coeff1 = new int[count1];
    
    for(int i=0;i < count1; i++) {
        cin >> degree1[i];
    }
    
    for(int i=0;i < count1; i++) {
        cin >> coeff1[i];
    }
    
    Polynomial first;
    for(int i = 0; i < count1; i++){
        first.setCoefficient(degree1[i],coeff1[i]);
    }
    
    cin >> count2;
    
    int *degree2 = new int[count2];
    int *coeff2 = new int[count2];
    
    for(int i=0;i < count2; i++) {
        cin >> degree2[i];
    }
    
    for(int i=0;i < count2; i++) {
        cin >> coeff2[i];
    }
    
    Polynomial second;
    for(int i = 0; i < count2; i++){
        second.setCoefficient(degree2[i],coeff2[i]);
    }
    
    cin >> choice;
    
    Polynomial result;
    switch(choice){
            // Add
        case 1:
            result = first + second;
            result.print();
            break;
            // Subtract
        case 2 :
            result = first - second;
            result.print();
            break;
            // Multiply
        case 3 :
            result = first * second;
            result.print();
            break;
            
        case 4 : // Copy constructor
        {
            Polynomial third(first);
            if(third.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
        case 5 : // Copy assignment operator
        {
            Polynomial fourth(first);
            if(fourth.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
    }
    
    return 0;
}
****************/

class Polynomial {
     public:
    int *degCoeff; // Name of your array (Don't change this)
    int capacity;
    // Complete the class
    public:
    Polynomial()
    {
        degCoeff=new int[5];
        capacity=5;
        for(int i=0;i<capacity;i++)
        {   degCoeff[i]=0;   }                 // /initialise array with null values
    }
//copy constructor
    Polynomial(Polynomial const & p1)
    {
        this->degCoeff= new int[p1.capacity];
        for( int i=0;i<p1.capacity;i++)
        {
            this->degCoeff[i]=p1.degCoeff[i];       //     copying elements
        }

        capacity=p1.capacity;            //updating capacity also
    }
//set coefficient
    void  setCoefficient(int degree,int coff)
    {
        while(degree>=capacity)
        {
            int *newarray=new int[2*capacity];        // making a new arry and copying the elemments
            for(int i=0;i<capacity;i++)
            {
                newarray[i]=degCoeff[i];
            }
                                                    //initilizing rest of elements to zero
            for(int j=capacity;j<2*capacity;j++)
            {
                newarray[j]=0;
            }

            delete [] degCoeff;
            degCoeff=newarray;
            capacity*=2;
        }
        degCoeff[degree]=coff;
    }
//print class
    void print() const
    {
        for(int i=0 ;i<capacity;i++)
        {
            if(this->degCoeff[i]==0)
                continue;
            else
            {
                cout<<degCoeff[i]<<"x"<<i<<" ";
            }
        }
        cout<<endl;
    }
//assigment constructor
    void operator=(Polynomial const & p1)
    {
          this->degCoeff= new int[p1.capacity];        //simialar as copy constructor
        for( int i=0;i<p1.capacity;i++)
        {
            this->degCoeff[i]=p1.degCoeff[i];
        }

        capacity=p1.capacity;
    }
//add
  Polynomial operator+( Polynomial & p2)            //its working
    {
       int Max=max(capacity,p2.capacity);

       //setting value 0 at remaining index of smaller array
       if(Max==capacity)
       {
           for(int i=p2.capacity;i<capacity;i++)
           {
               p2.setCoefficient(i,0);                            //  updating garbage values to null
           }                                               //so that I am not adding any no to a garbage value
       }
       if(Max==p2.capacity)
       {
        for(int i=capacity;i<p2.capacity;i++)
           {
               setCoefficient(i,0);
           }
       }
       Polynomial p3;
        for(int i=0;i<Max;i++)
        {
            p3.setCoefficient(i,degCoeff[i] + p2.degCoeff[i]);  
        }
        return p3;
    }
//subtract
    Polynomial operator-( Polynomial  & p2)                //its working
    {
        int Max=max(capacity,p2.capacity);

       //setting value 0 at remaining index of smaller array
       if(Max==capacity)
       {
           for(int i=p2.capacity;i<capacity;i++)
           {
               p2.setCoefficient(i,0);                                
           }
       }
       if(Max==p2.capacity)
       {
        for(int i=capacity;i<p2.capacity;i++)
           {
               setCoefficient(i,0);
           }
       }
       Polynomial p3;
        for(int i=0;i<Max;i++)
        {
            p3.setCoefficient(i,degCoeff[i] - p2.degCoeff[i]);
        }
        return p3;
    }

 Polynomial operator*( Polynomial  & p2)
{
     Polynomial p3;
     for(int i=0;i<capacity;i++)    //loop for *this
     {
         Polynomial p;
         for(int j=0;j<p2.capacity;j++)   ///loop for p2.degcoeff elemnts
         {
              p.setCoefficient(i+j,degCoeff[i]*p2.degCoeff[j]);     //   setting coeff at write place in arr
                                        //copying sideways to an alternate object  which I will return
         }
         p3=p3+p;
     }
    return p3; 

 }

};
