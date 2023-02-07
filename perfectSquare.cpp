/*  my logic for this question:
    make a recursive function that cuts a straight line then 
    it will take in remaining non-percect sqaure dimension then
    continues this process until the function takes in two identical parameter
*/
#include <iostream>

void perfectSquare(int &N, int &M){
    if(N == M)          //if both values are same then print the dimension and end the function
    {
        std::cout << N << "X" << M << std::endl;
    }
    else
    {
        if(N > M)       //if N is bigger than M then call the function again with two parameter: smaller length and subration of larger to smaller one
        {
            std::cout << M << "X" << M << ", ";
            int rem1 = N-M;
            perfectSquare(rem1, M);
        }
        else            //does the same as above if statement
        {
            std::cout << N << "X" << N << ", ";
            int rem2 = M-N;

            perfectSquare(N, rem2);
        }
    }   
}

int main()
{
    int N = 3;
    int M = 11;
    perfectSquare(N,M);
}


