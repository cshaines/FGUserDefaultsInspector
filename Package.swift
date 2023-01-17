// swift-tools-version:5.3

import PackageDescription

let package = Package(
    name: "FGUserDefaultsInspector",
    platforms: [
        .iOS(.v9)
    ],
    products: [
        .library(
            name: "FGUserDefaultsInspector",
            targets: ["FGUserDefaultsInspector"]),
    ],
    dependencies: [],
    targets: [
        .target(
            name: "FGUserDefaultsInspector",
            path: "Pod/Classes")
    ]
)
