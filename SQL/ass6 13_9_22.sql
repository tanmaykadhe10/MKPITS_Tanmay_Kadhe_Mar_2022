select * from student1

create procedure sb
	as begin
	select*from student1
	end;
exec sb

create procedure sb1
as begin 
select *from student1
where city ='nagpur'
end;
exec sb1

create proc sb2(@minp as decimal,@maxp as decimal)
as
begin
select * from student1
where rno > @minp and rno < @maxp
order by rno
end;
exec sb2 3,20


select*from costomr
select *from orders1

create proc sb4
as begin
select costomr.id,costomr.coname,costomr.addr,
orders1.order_id,orders1.order_date,orders1.prod_name
from costomr
inner join orders1
on costomr.id = orders1.order_id
end;
exec sb4

select *from ordercost1

create proc sb3(@minp as decimal,@maxp as decimal)
as
begin
select * from ordercost1
where costomer_id > @minp and costomer_id < @maxp
order by costomer_id
end;
exec sb3 3001,3009

