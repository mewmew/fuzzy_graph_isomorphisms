all: fuzzy_graph_morphisms.pdf

%.pdf: %.tex
	latexrun --latex-cmd=xelatex -o $@ $<
	# NOTE: run twice, because LaTeX.
	latexrun --latex-cmd=xelatex -o $@ $<

.PHONY: clean

clean:
	$(RM) -rv latex.out
	$(RM) -v fuzzy_graph_morphisms.pdf
