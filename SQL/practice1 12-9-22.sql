CREATE TABLE student
(rollNumber INT, 
name VARCHAR(30), 
class VARCHAR(30), 
section VARCHAR(1), 
mobile VARCHAR(10),
PRIMARY KEY (rollNumber, mobile));

insert into student values(1,'amit','dotnet','i','1234567890')
insert into student values(1,'amit','dotnet','i','1234567891')

select * from student

create table order_items (order_id int ,
item_id int  ,product_id int, quantity int,
list_price int, discount int, primary key(order_id,item_id))

insert into order_items values(1,11,101,2,20,5)
insert into order_items values(1,12,102,2,20,5)
insert into order_items values(2,11,102,2,20,5)
select * from order_items

create table teacher_details(teacher_id int primary key ,teacher_age int)
create table teacher_subject(teacher_id int , subject varchar(20),constraint t1 foreign key(teacher_id)
references teacher_details(teacher_id))
insert into teacher_subject values(111,'chemistry')
insert into teacher_details values(111,30)
insert into teacher_subject values(111,'chemistry')

create table teachers(teacher_id int primary key,teacher_name
varchar(20),country varchar(20),city varchar(20), state varchar(20))
insert into teachers values(1,'stephan','india','nagpur','mah')
insert into teachers values(2,'morris','india','nagpur','mah')
insert into teachers values(3,'daniel','india','nagpur','mah')
insert into teachers values(4,'fransis','india','mumbai','mah')
select * from teachers

