SHELL = /bin/bash

.PHONY: check

check:
	make -p -f Makefile2| sed '/^[ ]*SHELL[ ]*=/!d'
	@echo ""
	echo $$0
