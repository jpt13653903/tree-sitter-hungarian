// swift-tools-version:5.3

import Foundation
import PackageDescription

var sources = ["src/parser.c"]
if FileManager.default.fileExists(atPath: "src/scanner.c") {
    sources.append("src/scanner.c")
}

let package = Package(
    name: "TreeSitterHungarian",
    products: [
        .library(name: "TreeSitterHungarian", targets: ["TreeSitterHungarian"]),
    ],
    dependencies: [
        .package(url: "https://github.com/tree-sitter/swift-tree-sitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterHungarian",
            dependencies: [],
            path: ".",
            sources: sources,
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterHungarianTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterHungarian",
            ],
            path: "bindings/swift/TreeSitterHungarianTests"
        )
    ],
    cLanguageStandard: .c11
)
