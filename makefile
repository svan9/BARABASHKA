# test all
MAKE = mingw32-make

FILES 	= $(wildcard ./*/makefile)
FOLDERS = $(subst makefile,,$(FILES)) 

$(shell echo "" > log.txt)

test: $(FOLDERS)

$(FOLDERS):
	$(MAKE) -C $@ run >> log.txt 
