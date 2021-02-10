// A O(n) time and O(1) extra space solution to
// calculate the Permutation Coefficient
#include <iostream>
using namespace std;
 
int PermutationCoeff(int n, int k)
{
    int Fn = 1, Fk;
 
    // Compute n! and (n-k)!
    for (int i=1; i<=n; i++)
    {
        Fn *= i;
        if (i == n-k)
           Fk = Fn;
    }
    int coeff = Fn/Fk;
    return coeff;
}
 
// Driver program to test above function
int main()
{
    int n=10, k=2;
    cout << "Value of P(" << n << ", " << k
         << ") is " << PermutationCoeff(n, k);
 
    return 0;
}