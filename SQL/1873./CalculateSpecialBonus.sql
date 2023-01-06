# Write your MySQL query statement below
select employee_id, 
if(employee_id % 2 = 0 OR name LIKE 'M%', 0, salary) as bonus 
from Employees
order by employee_id;
