package tree_sitter_xresources_test

import (
	"testing"

	tree_sitter "github.com/ValdezFOmar/tree-sitter-xresources"
	tree_sitter_xresources "github.com/ValdezFOmar/tree-sitter-xresources"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_xresources.Language())
	if language == nil {
		t.Errorf("Error loading Xresources grammar")
	}
}
