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

        /**

        Getter, Setter, Mixed and Print functions set to constant
        to allow constant object to call them

        **/

        int getNumerator() const
        {
			return this->numerator;
		}

		int getDenominator() const
		{
			return this->denominator;
		}

		void setNumerator(int n)
		{
			this->numerator = n;
		}

		void setDenominator(int d)
		{
			this->denominator = d;
		}

        void print() const
        {
            if(this->denominator == 0)
            {
                cout<<"Infinite Number"<<endl;
            }

            else  if(this->numerator == 0)
            {
                cout<<0<<endl;
            }

            else
            {
               cout<<this->numerator<<"/"<<this->denominator<<endl;
            }

        }

        ///Printing Fraction in a mixed fraction
        void mixed() const
        {
           if(this->denominator == 0)
           {
                cout<<"Infinite Number"<<endl;
           }

           else  if(this->numerator == 0)
           {
                cout<<0<<endl;
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


        /// Addition of Fractions(f1 and f2) & Overloading Operator "+"

        Fraction  operator+(Fraction const &f2) const ///Pass fraction f2 by reference (const)
        {
            int lcm = this->denominator * f2.denominator;
            int x = lcm / this->denominator;
            int y = lcm / f2.denominator;
            int num = (x * this->numerator) + (y * f2.numerator);


            //Create new Fraction to store result
            Fraction fnew(num,lcm);

            /// Simplifying the "result"
            fnew.simplify();

            return fnew;
        }

        //Overloading +=
        Fraction& operator+=(Fraction const &f2) ///Pass fraction f2 by reference (const)
        {
            int lcm = this->denominator * f2.denominator;
            int x = lcm / this->denominator;
            int y = lcm / f2.denominator;
            int num = (x * this->numerator) + (y * f2.numerator);

            numerator = num;
            denominator = lcm;

            simplify();


            return *this;
        }



        ///Multiplication Fractions(f1 and f2)
        Fraction operator*(Fraction const &f2) const
        {
            int n = this->numerator * f2.numerator;
            int d = this->denominator * f2.denominator;

            //Create new Fraction to store our result
            Fraction fnew(n,d);

            ///Simply our answer
            fnew.simplify();

            return fnew;
        }

         //Overloading *=
        Fraction& operator*=(Fraction const &f2)
        {
            int n = this->numerator * f2.numerator;
            int d = this->denominator * f2.denominator;

           numerator = n;
           denominator = d;
           simplify();

           return *this;
        }


        ///Division Fractions(f1 and f2)
        Fraction operator/(Fraction const &f2)
        {
            int n = (this->numerator * f2.denominator);
            int d = (this->denominator * f2.numerator);

           numerator = n;
           denominator = d;
           simplify();

           return *this;
        }

        //Overloading /=
        Fraction& operator/=(Fraction const &f2)
        {   ///Dividing two Fractions and storing results in the initial fraction f1

            int n = (this->numerator * f2.denominator);
            int d = (this->denominator * f2.numerator);

           numerator = n;
           denominator = d;
           simplify();

           return *this;
        }



        ///Subtraction Fractions(f1 and f2)
        Fraction operator-(Fraction const &f2) const
        {
            int lcm = this->denominator * f2.denominator;
            int x = this->numerator * f2.denominator;
            int y = this->denominator * f2.numerator;

            //Storing the result to f1
            int n = (x-y);
            int d = lcm;

            Fraction fnew(n,d);

            //Simplifying
            fnew.simplify();

            return fnew;

        }

        ///Overloading -=
         Fraction& operator-=(Fraction const &f2)
        {
            int lcm = this->denominator * f2.denominator;
            int x = this->numerator * f2.denominator;
            int y = this->denominator * f2.numerator;

            //Storing the result to f1
            int n = (x-y);
            int d = lcm;

            numerator = n;
            denominator = d;
            simplify();

            return *this;
        }

        /// Overloading comparison operator"=="
            bool operator==(Fraction const &f2) const
            {
                return(numerator==f2.numerator && denominator == f2.denominator);
            }



        /// Overloading comparison operator"!="
            bool operator!=(Fraction const &f2) const
            {
                return(numerator!=f2.numerator && denominator != f2.denominator) ||
                      (numerator!=f2.numerator && denominator == f2.denominator) ||
                      (numerator==f2.numerator && denominator != f2.denominator);
            }
        /** Pre-Increment Overloading
            Pass by reference to avoid creating a copy **/
        Fraction& operator++()
        {
            numerator = numerator + denominator;
            simplify();

            return *this;
        }

        /** Post-Increment Overloading**/
        Fraction operator++(int)//Pass int to differentiate from Pre
        {   /// Post: Assign first then increment
            Fraction fnew(numerator, denominator);

            ///Then increment
            numerator = numerator + denominator;
            simplify();

            ///Simplify new fraction
            fnew.simplify();

            ///Return the new function
            return fnew;
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
