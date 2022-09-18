create table peractice1(id int , fname varchar(20))

insert into peractice1 values(12,'anilet')
insert into peractice1 values(15,'dhananjay')
insert into peractice1 values(17,'amit')
insert into peractice1 values(14,'shubham')

select * from peractice1

create table employee (empid int primary key, empname varchar(20))
CREATE TABLE EmpLog (
	LogID int IDENTITY(1,1) NOT NULL,
	EmpID int NOT NULL,
	Operation nvarchar(10) NOT NULL,
	UpdatedDate Datetime NOT NULL	
)
create trigger empt
on employee
for insert
as
insert into EmpLog(EmpID,Operation,UpdatedDate)
select empid,'insert',GETDATE() from inserted; 

insert into employee values(11,'amit')
select * from employee
select * from emplog


insert into employee values(12,'amita')
select * from employee
select * from emplog

create trigger empu
on employee
after update
as
insert into EmpLog(EmpID,Operation,UpdatedDate)
select empid,'update',GETDATE() from deleted

select * from employee
update employee set empname='amitabh' where empid=11

select * from employee
select * from EmpLog

select *from costomr

create function f1()
returns table
as 
return (select * from product)

select * from f1()

select*from employee1

