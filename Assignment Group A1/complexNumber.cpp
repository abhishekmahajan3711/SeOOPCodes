// Implement a class Complex which represents the Complex Number data type. Implement the 
// following
// 1. Constructor (including a default constructor which creates the complex number 0+0i).
// 2. Overload operator+ to add two complex numbers.
// 3. Overload operator* to multiply two complex numbers.
// 4. Overload operators << and >> to print and read Complex Numbers.


#include <iostream>
using namespace std;
class complex
{
  int real;
  int img;

public:
  friend ostream &operator<<(ostream &out, complex &a1);
  friend istream &operator>>(istream &in, complex &a1);

  complex()
  {
    real = 0;
    img = 0;
  }
  complex(int r, int i)
  {
    real = r;
    img = i;
  }
  complex operator*(complex a1)
  {
    complex r;
    r.real = (a1.real + real) - (a1.img * img);
    r.img = (a1.real + img) - (a1.img * real);
    return r;
  }

  complex operator-(complex a1)
  {
    complex r;
    r.real = a1.real - real;
    r.img = a1.img - img;
    return r;
  }

  complex operator+(complex a1)
  {
    complex r;
    r.real = a1.real + real;
    r.img = a1.img + img;
    return r;
  }
};

ostream &operator<<(ostream &out, complex &a1)
{
  cout << endl;
  cout << "_______________________________";
  cout << endl;
  cout << a1.real << " + " << a1.img<<"i";
  cout << endl;
  cout << endl;
  return out;
}

istream &operator>>(istream &in, complex &a1)
{

  cout << endl;
  cout << "Enter value for real : ";
  cin >> a1.real;
  cout << "Enter value for img : ";
  cin >> a1.img;
  return in;
}
int main()
{
  complex c1, c2, c3, c4, c5;
  cin >> c1;
  cout << c1;
  cin >> c2;
  cout << c2;
  c3 = c1 + c2;
  cout << "Addition ";
  cout << c3;
  cout << "Substraction ";
  c4 = c1 - c2;
  cout << c4;
  cout << "Multiplication ";
  c5 = c1 * c2;
  cout << c5;

  return 0;
}