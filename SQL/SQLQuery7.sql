CREATE TABLE person (
    person_id INT IDENTITY(1,1) PRIMARY KEY,
    first_name VARCHAR(50) NOT NULL,
    last_name VARCHAR(50) NOT NULL,
    gender CHAR(1) NOT NULL
);
INSERT INTO person(first_name, last_name, gender)
OUTPUT inserted.person_id
VALUES('John','Doe', 'M');
