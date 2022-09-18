create database product
create table product(productid int , productname varchar(20), price int , quantity int )

insert into product values(1,'mause',100,5)
insert into product values(2,'keybord',900,5)
insert into product values(3,'miniter',1000,5)

select *from product

create table costomer(costno int primary key, costname varchar(20))
insert into costomer values(1,'amit')
select * from costomer
insert into costomer values(2,'amitrao')
select * from costomer