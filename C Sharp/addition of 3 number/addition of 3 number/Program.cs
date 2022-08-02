using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace addition_of_3_number
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int num1,num2,num3;
            Console.WriteLine("Enter the num1 :");
            num1 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter the num2 :");
            num2 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter the num3 :");
            num3 = Convert.ToInt32(Console.ReadLine());
            int add = num1+num2+num3;
            Console.WriteLine("area of rectangle is :" +add);
            Console.ReadLine();
        }
    }
}
