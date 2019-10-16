using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProjectEulerDotNet
{
    public class Euler3
    {
        public static bool isPrime(long number)
        {
            if (number <= 1)
            {
                return false;
            }

            for (int i = 2; i <= number/2; i++)
            {
                if (number % i == 0)
                {
                    return false;
                }
            }
            return true;
        }

        public static bool isFactor(long factor, long number)
        {
            if (number % factor == 0)
            {
                return true;
            }
            return false;
        }

        public static void printPrimeFactors(long number)
        {
            for (long i = 1; i <= number/2; i++)
            {
                if (isFactor(i, number) && isPrime(i))
                {
                    Console.WriteLine(i);
                }
            }
        }

    }
}
