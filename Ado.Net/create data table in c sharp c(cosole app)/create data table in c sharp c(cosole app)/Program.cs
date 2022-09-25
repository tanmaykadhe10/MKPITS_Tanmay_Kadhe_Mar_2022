using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Data;
     

namespace create_data_table_in_c_sharp_c_cosole_app_
{
    internal class Program
    {
        static void Main(string[] args)
        {
            DataTable dt = new DataTable("student");
            DataColumn col1 = new DataColumn("id");
            col1.DataType = typeof(int);
            col1.Unique = true;
            col1.AllowDBNull = false;
            col1.Caption = "student id";
            dt.Columns.Add(col1);

            DataColumn col2 = new DataColumn("sname");
            col2.DataType = typeof(string);
            col2.Unique = true;
            col2.AllowDBNull = false;
            col2.Caption = "student name";
            dt.Columns.Add(col2);

            DataColumn col3 = new DataColumn("course");
            col3.DataType = typeof(string);
            col3.Unique = true;
            col3.AllowDBNull = false;
            col3.Caption = "course name";
            dt.Columns.Add(col3);

            DataRow dr = dt.NewRow();
            dr["id"] = 11;
            dr["sname"] ="Amar";
            dr["course"] = "java";
            dt.Rows.Add(dr);


            foreach(DataRow dr1 in dt.Rows)
            {
                Console.WriteLine("id = " + dr1["id"] );
                Console.WriteLine("sname = " + dr1["sname"]);
                Console.WriteLine("course = " + dr1["course"]);

                
            }

            Console.ReadLine();
        }
    }
}
