package tree_sitter_hungarian_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_hungarian "github.com/tree-sitter/tree-sitter-hungarian/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_hungarian.Language())
	if language == nil {
		t.Errorf("Error loading Hungarian grammar")
	}
}
