# Write your MySQL query statement below
with numbersOfUsers as (
    select count(user_id) as usersCount
     from Users
)
select contest_id , round( count(distinct user_id)/ (numbersOfUsers.usersCount) * 100, 2) as percentage 
from Register , numbersOfUsers 
group by contest_id
order by percentage desc , contest_id 