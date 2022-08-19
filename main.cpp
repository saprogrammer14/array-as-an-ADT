#include "array.cpp"

int main()
{
    Array<int> a(5);
    a[1]=2;
    a.display();

    Array<float> b(6);
    b.fill();
    b.display();
    return 0;
}