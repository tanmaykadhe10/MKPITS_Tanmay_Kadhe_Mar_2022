using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace datagrid_veiw_21_9_22
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        SqlConnection conn = new SqlConnection("server=DESKTOP-970G4ID\\SQLEXPRESS;integrated security=true;database=mkpsample");
        DataSet ds = new DataSet();
        SqlDataAdapter da;
        SqlCommandBuilder sb=null;
        private void button1_Click(object sender, EventArgs e)
        {
            da = new SqlDataAdapter("select*from students", conn);
            sb = new SqlCommandBuilder(da);
            da.Fill(ds, "stud");
            dataGridView1.DataSource = ds.Tables["stud"];

        }

        private void button2_Click(object sender, EventArgs e)
        {
            try
            {
                da.Update(ds.Tables["stud"]);
                MessageBox.Show("record update succ");


            }
            catch(Exception ee)
            {
                MessageBox.Show(ee.Message);
            }
        }
    }
}
