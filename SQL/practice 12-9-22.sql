CREATE TABLE students( id int primary key identity ,
addmission_no varchar(50) not null ,
first_name varchar(50) not null ,
last_name varchar(50) not null,
age int ,
city varchar(50) not null )

create table fee (
      admission_no varchar(45) NOT NULL,  
      course varchar(45) NOT NULL,      
      amount_paid int,    
    );  

	    INSERT INTO Students (addmission_no , first_name, last_name, age, city)       
    VALUES (5322,'Luisa', 'Evans', 13, 'Texas'),       
    (2135, 'Paul', 'Ward', 15, 'Alaska'),       
    (4321, 'Peter', 'Bennett', 14, 'California'),    
    (4213,'Carlos', 'Patterson', 17, 'New York'),       
    (5112, 'Rose', 'Huges', 16, 'Florida'),  
    (6113, 'Marielia', 'Simmons', 15, 'Arizona'),    
    (7555,'Antonio', 'Butler', 14, 'New York'),       
    (8345, 'Diego', 'Cox', 13, 'California');  


	    INSERT INTO Fee (admission_no, course, amount_paid)       
    VALUES (3354,'Java', 20000),       
    (7555, 'Android', 22000),       
    (4321, 'Python', 18000),    
    (8345,'SQL', 15000),       
    (5112, 'Machine Learning', 30000);  

	select * from students
	select * from fee

	SELECT students.addmission_no, students.first_name, students.last_name, Fee.course, Fee.amount_paid  
    FROM students  
    INNER JOIN Fee  
    ON students.addmission_no  = Fee.admission_no;  

	SELECT students.addmission_no, students.first_name, students.last_name, Fee.course, Fee.amount_paid  
    FROM students  
    CROSS JOIN Fee  

	
	SELECT students.addmission_no, students.first_name, students.last_name, Fee.course, Fee.amount_paid  
    FROM students  
    LEFT OUTER  JOIN Fee  
    ON students.addmission_no  = Fee.admission_no;  

	SELECT students.addmission_no, students.first_name, students.last_name, Fee.course, Fee.amount_paid  
    FROM students  
    RIGHT OUTER  JOIN Fee  
    ON students.addmission_no  = Fee.admission_no;  
	
	SELECT students.addmission_no, students.first_name, students.last_name, Fee.course, Fee.amount_paid  
    FROM students  
    FULL OUTER  JOIN Fee  
    ON students.addmission_no  = Fee.admission_no;