CREATE OR REPLACE FUNCTION {{ name }}_1()
RETURNS integer
AS 'MODULE_PATHNAME'
LANGUAGE C IMMUTABLE STRICT PARALLEL SAFE;