import XCTest
import SwiftTreeSitter
import TreeSitterHungarian

final class TreeSitterHungarianTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_hungarian())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Hungarian grammar")
    }
}
