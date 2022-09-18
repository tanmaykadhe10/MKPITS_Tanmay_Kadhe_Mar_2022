create table products1(
cust_id int primary key ,
cust_name varchar(50) not null,
tel_no varchar(50) not null
);

create table orders1(
order_id int not null ,
order_date date not null ,
prod_name varchar(50) not null ,
rate int not null, 
quntity int not null
);

insert into products1 values(11,'raj','1234567890'),
(12,'raju','1234567890'),
(13,'ramesh','1234567890'),
(114,'rahul','1234567890'),
(115,'rinki','1234567890')

insert into orders1 values(22,'10-2-2022','book',5,4)
insert into orders1 values(21,'10-2-2022','pen',56,3)
insert into orders1 values(24,'10-2-2022','bag',54,46)
insert into orders1 values(26,'10-2-2022','bptle',53,48)
insert into orders1 values(29,'10-2-2022','dress',51,43)

select products1.cust_id,products1.cust_id,products1.tel_no
from products1
inner join orders1
on products1.cust_id= orders1.order_id;

select products1.cust_id,products1.cust_id,products1.tel_no
from products1
LEFT OUTER join orders1
on products1.cust_id= orders1.order_id;

select products1.cust_id,products1.cust_id,products1.tel_no
from products1
RIGHT OUTER join orders1
on products1.cust_id= orders1.order_id;