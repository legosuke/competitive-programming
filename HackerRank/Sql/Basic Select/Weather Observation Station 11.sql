select distinct
    CITY
from
    STATION
where
    not CITY regexp '^[aiueo]'
    or not CITY regexp '[aiueo]$'
;
