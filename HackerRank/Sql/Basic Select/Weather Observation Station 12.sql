select distinct
    CITY
from
    STATION
where
    not CITY regexp '^[aiueo]'
    and not CITY regexp '[aiueo]$'
;
