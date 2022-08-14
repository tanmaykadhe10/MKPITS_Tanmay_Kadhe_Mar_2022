using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace A1_Q3_number_posetive_or_negative
{
    internal class Program
    {
        static void Main(string[] args)
        {
			int n;

			Console.WriteLine("Enter the number");
			n = Convert.ToInt32(Console.ReadLine());



			if (0 < n)
			{

				Console.WriteLine("Enter Number is posetive number ! =" + n);
			}
			else
			{
				Console.WriteLine("Enter Number is Not nenative number ! =" + n);
			}

			Console.ReadLine();
		}
    }
}
