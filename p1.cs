using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProjectEulerDotNet
{
    public class Euler1
    {
        // Problem 1
        public int SumOfMultiplesOf_3and5(int limit)
        {
            int sum = 0;
            for(int i = 0; i < limit; i++)
            {
                if (IsMultipleOf_3or5(i))
                {
                    sum += i;
                }
            }
            return sum;
        }

        public bool IsMultipleOf_5(int number)
        {
            if (number % 5 == 0 && number != 0)
            {
                return true;
            }
            return false;
        }

        public bool IsMultipleOf_3(int number)
        {
            if (number % 3 == 0 && number != 0)
            {
                return true;
            }
            return false;
        }

        public bool IsMultipleOf_3and5(int number)
        {
            if(IsMultipleOf_3(number) && IsMultipleOf_5(number))
            {
                return true;
            }
            return false;
        }

        public bool IsMultipleOf_3or5(int number)
        {
            if(IsMultipleOf_3(number) || IsMultipleOf_5(number))
            {
                return true;
            }
            return false;
        }
    }
}
