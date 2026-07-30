void foo(const int)
{
}

void foo(const double&) // double& is a reference to a double
{
}

int main()
{
    int x { 1 };
    foo(x); // x trivially converted from int to const int

    double d { 2.3 };
    foo(d); // d trivially converted from double to const double& (non-ref to ref conversion)

    return 0;
}
