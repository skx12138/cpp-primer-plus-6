#include <iostream>

const int Max = 5;

// function prototypes
double *fill_array(double ar[], double *end);
void show_array(const double *begin, const double *end);
void revalue(double r, double *begin, double *end);

int main()
{
    using namespace std;
    double properties[Max];

    double *end = fill_array(properties, properties + Max);
    show_array(properties, end);
    if (end > properties)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor)) // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, end);
        show_array(properties, end);
    }
    cout << "Done.\n";
    return 0;
}

double *fill_array(double ar[], double *end)
{
    using namespace std;
    double temp;
    double *ptr;
    for (ptr = ar; ptr < end; ++ptr)
    {
        cout << "Enter value #" << (ptr - ar + 1) << ": ";
        cin >> temp;
        if (!cin) // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0) // signal to terminate
            break;
        *ptr = temp;
    }
    return ptr;
}

void show_array(const double *begin, const double *end)
{
    using namespace std;
    const double *ptr;
    for (ptr = begin; ptr < end; ++ptr)
    {
        cout << "Property #" << (ptr - begin + 1) << ": $";
        cout << *ptr << endl;
    }
}

void revalue(double r, double *begin, double *end)
{
    double *ptr;
    for (ptr = begin; ptr < end; ++ptr)
        *ptr *= r;
}
