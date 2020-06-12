select distinct
    CITY
from
    STATION
where
    CITY regexp '^[aiueo]'
    and CITY regexp '[aiueo]$'
;
