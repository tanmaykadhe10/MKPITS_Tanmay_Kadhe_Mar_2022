using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace vote_or_not_use_if_else_condition
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int age;
            Console.WriteLine("Enter the age :");
            age = Convert.ToByte(Console.ReadLine());
            if (age < 18)
            { 
                Console.WriteLine("it is not  eligiale to  vote");
            }
            else
            { 
                Console.WriteLine("it is   eligiale to  vote");
            }

            Console.ReadLine();
        }
    }
}
