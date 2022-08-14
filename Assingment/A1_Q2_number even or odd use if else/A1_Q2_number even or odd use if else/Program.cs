using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace A1_Q2_number_even_or_odd_use_if_else
{
    internal class Program
    {
        static void Main(string[] args)
        {
			int n;

			Console.WriteLine("Enter the number");
			n = Convert.ToInt32(Console.ReadLine());



			if (n % 2 == 0)
			{

				Console.WriteLine("Enter Number is Even number ! -" + n);
			}
			else
			{
				Console.WriteLine("Enter Number is Not Odd number ! -" + n);
			}

			Console.ReadLine();
		}
    }
}
