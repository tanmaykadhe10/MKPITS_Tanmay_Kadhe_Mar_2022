using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Data;


namespace datatype_console_autoincrement__1
{
    internal class Program
    {
        
        static void Main(string[] args)
        {
            try
            {

           
            DataTable dt = new DataTable("student");
            DataColumn id = new DataColumn
            {
                ColumnName = "id",
                DataType = typeof(int),
                AutoIncrement = true,
                AutoIncrementSeed = 1000,
                AutoIncrementStep = 10

            };
            dt.Columns.Add(id);

            DataColumn name = new DataColumn("name");
            name.MaxLength = 50;
            name.AllowDBNull = false;
            dt.Columns.Add(name);


            DataColumn email = new DataColumn("email");
                dt.Columns.Add(email);


            DataRow row1 = dt.NewRow();

            row1["name"] = "rahul";
            row1["email"] = "rahul@gmail.com";
            dt.Rows.Add(row1);

            dt.Rows.Add(null, "mohit", "mohit@gmail.com");

            foreach(DataRow row in dt.Rows)
            {
                Console.WriteLine(row["id"] + ", " + row["name"] + ", " + row["email"]);
            }
        }
             catch(Exception e)
            {
                Console.WriteLine("oops something went wrong.\n" + e);
            }
            Console.ReadKey();
         }
        }
}
