CFLAGS:=-W -Wall -pedantic -std=c11
COMPILED_PROGRAMS:=echo sortecho
INTERPRETED_PROGRAMS:=echo.pl
PROGRAMS:=$(COMPILED_PROGRAMS) $(INTERPRETED_PROGRAMS)

.PHONY: all
all:
	@$(MAKE) -s -j test

.PHONY: clean
clean::
	$(RM) $(COMPILED_PROGRAMS)

.PHONY: test
test: test(echo echo.pl sortecho)

test($(COMPILED_PROGRAMS)): $(COMPILED_PROGRAMS)

test(echo) test(echo.pl):
	test "`./$%`" = ""
	test "`./$% foo`" = "foo"
	test "`./$% foo bar`" = "foo bar"

test(sortecho):
	test "`./$%`" = ""
	test "`./$% foo`" = "foo"
	test "`./$% foo bar`" = "bar foo"

test(%):
	echo "No tests for '$*'" ; false
