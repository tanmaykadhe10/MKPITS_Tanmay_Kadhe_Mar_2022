using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace A1_Q1_equal_or_not_using_if_else
{
    internal class Program
    {
       
        static void Main(string[] args)
        {
            int num1;
            int num2;
            Console.WriteLine("Enter number 1");
            num1 = Convert.ToInt16(Console.ReadLine());
            Console.WriteLine("Enter number 2");
            num2 = Convert.ToInt16(Console.ReadLine());


            if (num1==num2)
            {
                Console.WriteLine("number is eqaul !");
            }
            else
            {
                Console.WriteLine("number is not eqaul !");
            }
            Console.ReadLine();
        }
    }
}
