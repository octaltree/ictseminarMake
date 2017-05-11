.PHONY: all
.SUFFIXES: .tex .dvi .pdf
all: ictseminar.pdf
.tex.dvi:
	platex $^
	platex $^
.dvi.pdf:
	dvipdfmx $^
