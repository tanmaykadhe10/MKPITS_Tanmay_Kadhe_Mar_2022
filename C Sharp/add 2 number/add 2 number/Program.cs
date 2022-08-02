using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace add_2_number
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int num1;
            Console.WriteLine("Enter number1 :");
            num1 = Convert.ToInt32(Console.ReadLine());
            int num2;
            Console.WriteLine("Enter number2 :");
            num2 = Convert.ToInt32(Console.ReadLine());
            int add = num1 + num2;
            Console.WriteLine("addition of two number :" + add);
            Console.ReadLine();
        }
    }
}
