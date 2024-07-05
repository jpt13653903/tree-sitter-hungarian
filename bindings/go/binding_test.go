package tree_sitter_hungarian_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/jpt13653903/tree-sitter-hungarian"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_hungarian.Language())
	if language == nil {
		t.Errorf("Error loading Hungarian grammar")
	}
}
