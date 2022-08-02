using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace @byte
{
    internal class Program
    {
        static void Main(string[] args)
        {
             byte b1;
            Console.WriteLine("Enter the number :");
            b1 = Convert.ToByte(Console.ReadLine());

            Console.WriteLine("enter byte is :" + b1);
            Console.ReadLine();
        }
    }
}
