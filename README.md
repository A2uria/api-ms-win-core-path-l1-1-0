# api-ms-win-core-path-l1-1-0

A minimal implementation of `api-ms-win-core-path-l1-1-0.dll` for Windows 7.

## Build Instructions

```bash
clang-cl -Brepro -LD -O2 -Zl -fuse-ld=lld api-ms-win-core-path-l1-1-0.c -link -def:api-ms-win-core-path-l1-1-0.def -noimplib shlwapi.lib
```

## Compatibility

- Python 3.9+
- [ZeroBraneStudio](https://github.com/OneLuaPro)

## Implementation Details

| Function                     | Implementation         |
| ---------------------------- | ---------------------- |
| `PathAllocCanonicalize`      | *not implemented*      |
| `PathAllocCombine`           | *not implemented*      |
| `PathCchAddBackslash[Ex]`    | `PathAddBackslashW`    |
| `PathCchAddExtension`        | `PathAddExtensionW`    |
| `PathCchAppend[Ex]`          | `PathAppendW`          |
| `PathCchCanonicalize[Ex]`    | `PathCanonicalizeW`    |
| `PathCchCombine[Ex]`         | `PathCombineW`         |
| `PathCchFindExtension`       | `PathFindExtensionW`   |
| `PathCchIsRoot`              | `PathIsRootW`          |
| `PathCchRemoveBackslash[Ex]` | `PathRemoveBackslashW` |
| `PathCchRemoveExtension`     | `PathRemoveExtensionW` |
| `PathCchRemoveFileSpec`      | `PathRemoveFileSpecW`  |
| `PathCchRenameExtension`     | `PathRenameExtensionW` |
| `PathCchSkipRoot`            | `PathSkipRootW`        |
| `PathCchStripPrefix`         | *not implemented*      |
| `PathCchStripToRoot`         | `PathStripToRootW`     |
| `PathIsUNCEx`                | `PathIsUNCW`           |
