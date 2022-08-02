using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace area_of_circle
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int rad;
            Console.WriteLine("Enter the radius of circle :");
            rad = Convert.ToInt32(Console.ReadLine());
            float area = 3.14f * rad * rad;
            Console.WriteLine("area of circle is :" + area);
            float circumferance = 2*3.14f * rad;
            Console.WriteLine("area of circle is :" + circumferance);
            Console.ReadLine();
        }
    }
}
