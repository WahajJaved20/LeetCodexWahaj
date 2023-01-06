# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below
DELETE p from Person p, Person q where p.Id>q.Id AND q.Email=p.Email 
