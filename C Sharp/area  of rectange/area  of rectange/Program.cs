using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace area__of_rectange
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int length, breath;
            Console.WriteLine("Enter the length :");
            length = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter the breath :");
            breath = Convert.ToInt32(Console.ReadLine());
            int rectangle = length * breath;
            Console.WriteLine("area of rectangle is :" + rectangle);
            Console.ReadLine();

        }
    }
}
