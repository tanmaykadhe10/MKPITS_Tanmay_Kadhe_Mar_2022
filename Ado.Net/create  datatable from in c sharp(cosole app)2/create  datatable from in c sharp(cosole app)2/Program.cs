using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Data;

namespace create__datatable_from_in_c_sharp_cosole_app_2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            DataTable dt = new DataTable("product");
            DataColumn col1 = new DataColumn("prod_id");
            col1.DataType = typeof(int);
            col1.Unique = true;
            col1.AllowDBNull = false;
            col1.Caption = "product id";
            dt.Columns.Add(col1);

            DataColumn col2 = new DataColumn("prod_name");
            col2.DataType = typeof(string);
            col2.Unique = true;
            col2.AllowDBNull = false;
            col2.Caption = "product name";
            dt.Columns.Add(col2);

            DataColumn col3 = new DataColumn("prod_price");
            col3.DataType = typeof(decimal);
            col3.Unique = true;
            col3.AllowDBNull = false;
            col3.Caption = "product price";
            dt.Columns.Add(col3);

            DataRow row1 = dt.NewRow();
            row1["prod_id"] = 123;
            row1["prod_name"] = "Book";
            row1["prod_price"] = 50;
            dt.Rows.Add(row1);

            DataRow row2 = dt.NewRow();
            row2["prod_id"] = 111;
            row2["prod_name"] = "Pen";
            row2["prod_price"] = 20;
            dt.Rows.Add(row2);

            DataRow row3 = dt.NewRow();
            row3["prod_id"] = 101;
            row3["prod_name"] = "Notebook";
            row3["prod_price"] = 80;
            dt.Rows.Add(row3);

            foreach(DataRow dr in dt.Rows)
            {
                Console.WriteLine("product_id = " +dr["prod_id"] + " " + "product_name = " +dr["prod_name"] + " " + "product_price = " +dr["prod_price"]);
            }
            Console.ReadLine();
        }
    }
}
