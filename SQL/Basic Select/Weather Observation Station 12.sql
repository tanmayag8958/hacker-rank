/*
* Contributer : github.com/shikhar-07
* Email : shikharanandg@gmail.com
*/
SELECT DISTINCT CITY
FROM STATION
WHERE (NOT(CITY  Like 'A%' OR CITY LIKE 'E%' OR CITY LIKE 'O%' OR CITY LIKE 'I%' OR CITY LIKE 'U%'))
		AND
	  (NOT (CITY LIKE '%a' OR CITY  LIKE '%e' OR CITY LIKE '%i' OR CITY LIKE '%o' OR CITY LIKE '%u'));
