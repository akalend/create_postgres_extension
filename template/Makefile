MODULES = {{ name }}

EXTENSION = {{ name }}
DATA = {{ name }}--0.1.sql
PGFILEDESC = "{{ name }} - module"


ifdef USE_PGXS
PG_CONFIG = pg_config
PGXS := $(shell $(PG_CONFIG) --pgxs)
include $(PGXS)
else
subdir = contrib/{{ name }}
top_builddir = ../..
include $(top_builddir)/src/Makefile.global
include $(top_srcdir)/contrib/contrib-global.mk
endif