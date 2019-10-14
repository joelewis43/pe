using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProjectEulerDotNet
{
    public class Euler2
    {
        // Problem 2
        public static bool IsEven(uint number)
        {
            if(number % 2 == 0)
            {
                return true;
            }
            return false;
        }

        public static uint sumEven(uint number, uint sum)
        {
            if (IsEven(number))
            {
                return sum += number;
            }
            return sum;
        }

        public static void printNumbers(bool printIsTrue, uint data)
        {
            if (printIsTrue)
            {
                Console.WriteLine(data);
            }
        }

        public static uint Fibonacci(uint limit=100, bool print=true)
        {
            uint counter = 0;
            uint first = 1, next = 2, sum = 0, placeholder = 0;

            while (first < limit)
            {
                printNumbers(print, first);
                sum = sumEven(first, sum);
                placeholder = next + first;
                first = next;
                next = placeholder;
                
                counter++;
            }
            return sum;
        }
    }
}
