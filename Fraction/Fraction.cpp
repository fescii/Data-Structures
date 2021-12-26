/// This is the implementation of Fractions in c++
/// To test find test.cpp or create new cpp file and include this class

#include<iostream>
using namespace std;

class Fraction
{
    private:
        int numerator; //!< Member variable "numerator"
        int denominator; //!< Member variable "denominator"

    public:
        Fraction(int numerator, int denominator)
        {
            this->numerator = numerator;
            this->denominator = denominator;
        }

        void print()
        {
            if(this->denominator == 0)
            {
                cout<<"Infinite Number"<<endl;
            }
            else if(this->denominator == 1)
            {
                cout<<this->numerator<<endl;
            }
            else
            {
               cout<<this->numerator<<"/"<<this->denominator<<endl;
            }

        }

        ///Printing Fraction in a mixed fraction
        void mixed()
        {
           if(this->denominator == 0)
           {
                cout<<"Infinite Number"<<endl;
           }
           else if(this->denominator == 1)
           {
                cout<<this->numerator<<endl;
           }
           else
           {
                int remainder = (this->numerator) % (this->denominator);
                int whole = (this->numerator) / (this->denominator);
                if(whole == 0)
                {
                    cout<<numerator<<"/"<<denominator<<endl;
                }
                else if((remainder == this->numerator) && whole == 0 )
                {
                    cout<<numerator<<"/"<<denominator<<endl;
                }
                else
                {
                    cout<<whole<<" "<<remainder<<"/"<<this->denominator<<endl;
                }
           }

        }


        /// Addition of Fractions(f1 and f2)
        void add(Fraction const &f2) ///Pass fraction f2 by reference (const)
        {
            int lcm = this->denominator * f2.denominator;
            int x = lcm / this->denominator;
            int y = lcm / f2.denominator;
            int num = (x * this->numerator) + (y * f2.numerator);

            //!< Storing the result in f1
            this->numerator = num;
            this->denominator = lcm;

            //!< Simplifying the "result"
            simplify();
        }


        ///Multiplication Fractions(f1 and f2)
        void multiply(Fraction const &f2)
        {   /// Multiplying and storing values into the initial fraction f1
            this->numerator = this->numerator * f2.numerator;
            this->denominator = this->denominator * f2.denominator;

            ///Simply our answer
            simplify();
        }


        ///Division Fractions(f1 and f2)
        void divide(Fraction const &f2)
        {   ///Dividing two Fractions and storing results in the initial fraction f1

            this->numerator = (this->numerator * f2.denominator);
            this->denominator = (this->denominator * f2.numerator);

            //To Simplify
            simplify();
        }



        ///Subtraction Fractions(f1 and f2)
        void sub(Fraction const &f2)
        {
            int lcm = this->denominator * f2.denominator;
            int x = this->numerator * f2.denominator;
            int y = this->denominator * f2.numerator;

            //Storing the result to f1
            this->numerator = (x-y);
            this->denominator = lcm;

            //Simplifying
            simplify();
        }


        ///Simplification of Fractions
        void simplify()
        {
            ///Calculate the GCD
            /* Similarly GCD can be obtain using this internal function:
                gcd = __gcd(numerator, denominator);
            */
            int gcd = 1;
            int j = min(this->numerator, this->denominator);
            for(int i=1; i<=j; i++)
            {
                if((this->numerator % i == 0) && (this->denominator % i == 0))
                {
                    gcd = i;
                }
            }

            ///Simplify
            this->numerator = this->numerator / gcd;
            this->denominator = this->denominator / gcd;
        }

};
