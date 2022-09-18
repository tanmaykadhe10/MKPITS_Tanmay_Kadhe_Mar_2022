create table student1(rno int primary key,fname varchar(20),
coursename varchar(20),email varchar(50),course_id int , city varchar(20))

insert into student1 values(1,'rohit','dotnet','abcd@gmail.com',11,'nagpur')
insert into student1 values(2,'rohite','dotnet','abcd@gmail.com',12,'nagpur')
insert into student1 values(3,'rohito','dotnet','abcd@gmail.com',13,'mumbai')
insert into student1 values(4,'rohi','java','abcd@gmail.com',14,'nagpur')
insert into student1 values(5,'rohito','dotnet','abcd@gmail.com',23,'delhi')
insert into student1 values(6,'anil','dotnet','abcd@gmail.com',43,'mumbai')

select * from student1

create table fees (
	  rno int ,
      fees_id int  NOT NULL,  
      fees_date date NOT NULL,
	  course_id int not null,
      amount_paid int,    
    );  

	insert into fees values(6,111,'1-2-2022',1432,5000)
	insert into fees values(2,111,'11-2-2022',1432,5000)
	insert into fees values(1,111,'11-2-2022',1432,5000)
	insert into fees values(3,111,'12-2-2022',1432,5000)
	insert into fees values(4,133,'1-2-2022',1333,4000)
	
	select * from student1
	select *from  fees

select rno,fees_id,fees_date,course_id,amount_paid
from fees
where rno in 
(select rno from student1 where city='nagpur' )

select rno,fees_id,fees_date,course_id,amount_paid
from fees
where rno in 
(select rno from student1 where city='mumbai' )

select rno,fees_id,fees_date,course_id,amount_paid
from fees
where rno in 
(select rno from student1 where city='delhi' )



create table student3(course_id int primary key,course_name varchar(20),
fees int , duration varchar(20))

insert into student3 values(12,'dotnet',5000,'3 month')
insert into student3 values(15,'java',8000,'4 month')
insert into student3 values(17,'dotnet',8000,'6 month')
insert into student3 values(19,'php',15000,'5 month')
insert into student3 values(16,'php',2500,'9 month')

select course_id,duration,fees from student3 where course_name='dotnet'

select course_id,duration,fees from student3 where course_name='php'

select course_id,duration,fees from student3 where course_name='java'