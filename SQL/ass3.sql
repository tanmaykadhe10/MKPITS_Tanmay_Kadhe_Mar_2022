create table ordercost1
( order_no int not null,
 purch_amt float not null,
 order_date date not null,
 costomer_id int not null,
 salesman_id int not null
 primary key (order_no)
 );
 insert into ordercost1 values (70001,150.5,'2012-10-05',3005,5002)
 insert into ordercost1 values (70009,270.65,'2012-9-10',3001,5001)
 insert into ordercost1 values (70002,65.26,'2012-10-05',3002,5005)
 insert into ordercost1 values (70004,110.5,'2012-08-17',3009,5001)
 insert into ordercost1 values (70007,948.5,'2012-09-10',3005,5003)
 insert into ordercost1 values (70005,2400.6,'2012-07-26',3007,5002)
 insert into ordercost1 values (70008,5760,'2012-09-10',3002,5001)
 select*from ordercost1

 select salesman_id,order_date,max(purch_amt)  from  ordercost1
 group by salesman_id,order_date
  order by salesman_id,order_date;

  SELECT DISTINCT salesman_id FROM ordercost1

  select order_no, order_date, purch_amt from ordercost1 where salesman_id=5001;