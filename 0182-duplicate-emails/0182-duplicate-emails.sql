# Write your MySQL query statement below
SELECT EMAIL FROM PERSON
group by email
HAving count(email) > 1
