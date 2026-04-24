# Write your MySQL query statement below
select r.unique_id as unique_id , e.name as name 
from employees as e
left join EmployeeUNI as r
on  e.id = r.id