select distinct
    CITY
from
    STATION
where
    not CITY regexp '^[aiueo]'
;
