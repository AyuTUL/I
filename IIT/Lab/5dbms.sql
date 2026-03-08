CREATE DATABASE CSITA;

USE CSITA;
CREATE TABLE student (
	ROll INT PRIMARY KEY,
	Sname VARCHAR(30),
	Address VARCHAR(30),
	Contact BIGINT(10)
);
DESC student;

ALTER TABLE student ADD COLUMN email VARCHAR(30);
DESC student;

ALTER TABLE student DROP COLUMN email;
DESC student;

CREATE TABLE Dummy (
	fname VARCHAR(10)
);
DESC Dummy;
DROP TABLE Dummy;
DESC dummy;

INSERT INTO student (Roll,Sname,Address,Contact) VALUES
	(1, "Abhilekh Subedi", "Gulmi", 9808908090),
	(2, "Alisha Manandhar", "Nhyokhya", 1234567890),
	(3, "Ansu Hada", "Jamal", 2345123445),
	(4, "Anush Shrestha", "Kotha", 5612341234),
	(5, "Aslesha Shrestha", "Swoyambhu", 67123451);
SELECT * FROM student;

SELECT * FROM student WHERE Roll=3;

SELECT Roll,Sname FROM student WHERE Roll=2;

SELECT Sname,Address FROM student WHERE Sname="Ashlesha Shrestha";

SELECT Sname,Address FROM student WHERE Sname LIKE 'A%a';

INSERT INTO student (Roll,Sname,Address,Contact) VALUES
	(6, "Ayush Rauniyar", "Bangemuda", 9208908090),
	(7, "Ayush Tuladhar", "Chagal", 1234567890),
	(8, "Barsha Pandet", "Kathmandu", 534512345),
	(9, "Diya Gartaula", "Bridge", 5612341234),
	(10, "Gaurav Thapa", "Side", 67123451);
SELECT * FROM student;


SELECT * FROM student WHERE Sname LIKE '_y%r';

UPDATE student SET Address="Lalitpur" WHERE Roll=2;
SELECT * FROM student;

DELETE FROM student WHERE Address="Lalitpur";
SELECT * FROM student;

DROP DATABASE CSITA;
DESC CSITA;