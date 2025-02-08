package tree_sitter_csv_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_csv "github.com/arnau/tree-sitter-csv/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_csv.Language())
	if language == nil {
		t.Errorf("Error loading csv grammar")
	}
}
