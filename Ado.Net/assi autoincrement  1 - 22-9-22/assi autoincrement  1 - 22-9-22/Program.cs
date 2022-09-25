using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Data;

namespace assi_autoincrement__1___22_9_22
{
    internal class Program
    {
        static void Main(string[] args)
        {
            try
            {
                DataTable dt = new DataTable("costomers");

                DataColumn cost_id = new DataColumn
                {
                    ColumnName = "cost_id",
                    DataType = System.Type.GetType("System.Int32")


                };
                dt.Columns.Add(cost_id);


                DataColumn cost_name = new DataColumn("cost_name");
                cost_name.MaxLength = 50;
                cost_name.AllowDBNull = false;
                dt.Columns.Add(cost_name);

                
                DataColumn cost_add = new DataColumn("cost_add");
                cost_add.MaxLength = 50;
                cost_add.AllowDBNull = false;
                dt.Columns.Add(cost_add);

                DataColumn cost_mob = new DataColumn
                {
                    ColumnName = "cost_mob",
                    DataType = System.Type.GetType("System.Int64")


                };
                dt.Columns.Add(cost_mob);


                dt.Rows.Add(11, "Mohan", "Mohan123@gmail.com",1234567890);
                dt.Rows.Add(12, "raman", "raman111@gmail.com", 9898989898);
                dt.Rows.Add(13, "sai", "sai222@gmail.com", 8888888888);
                dt.Rows.Add(14, "guru", "guru123@gmail.com",7777777777);
                dt.Rows.Add(15, "dewa", "dewa123@gmail.com", 97654432134);

                foreach(DataRow row in dt.Rows)
                {
                    Console.WriteLine(row["cost_id"] + " " + row["cost_name"] + " " + row["cost_add"] + " " + row["cost_mob"] + "\n");
                }
               
        }
            catch (Exception e)
            {
                Console.WriteLine("OOPs, something went wrong.\n" + e);
            }
            Console.ReadKey();

        }
    }
}
