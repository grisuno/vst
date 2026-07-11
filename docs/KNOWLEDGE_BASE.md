# Polyglot Codebase Knowledge Graph

> Generated offline by **readmenator**. Supports C, C++, Python, Go, Rust, JS/TS, Java, C#, Shell, PHP, Dart, GDScript, Nim, ASM.
> No LLMs. No tokens. Pure static analysis. See more [here](https://github.com/grisuno/ReadMenator)

**Total Files Parsed:** 2 | **Total Symbols Extracted:** 5 | **Total Imports:** 2

## Structural Knowledge Map
```mermaid
graph TD
    classDef mod fill:#1e1e1e,stroke:#ff6666,stroke-width:2px,color:#fff;
    classDef cls fill:#2d2d2d,stroke:#4ec9b0,stroke-width:2px,color:#fff;
    classDef fn fill:#333,stroke:#dcdcaa,stroke-width:1px,color:#dcdcaa;
    classDef ext fill:#111,stroke:#666,stroke-dasharray:5 5,color:#aaa;
    HarmonicsPluginEditor_cpp["HarmonicsPluginEditor.cpp (cpp)"]
    class HarmonicsPluginEditor_cpp mod;
    HarmonicsPluginEditor_cpp_HarmonicsPluginEditor["HarmonicsPluginEditor"]
    class HarmonicsPluginEditor_cpp_HarmonicsPluginEditor fn;
    HarmonicsPluginEditor_cpp --> HarmonicsPluginEditor_cpp_HarmonicsPluginEditor
    HarmonicsPluginEditor_cpp_paint["paint"]
    class HarmonicsPluginEditor_cpp_paint fn;
    HarmonicsPluginEditor_cpp --> HarmonicsPluginEditor_cpp_paint
    HarmonicsPluginEditor_cpp_resized["resized"]
    class HarmonicsPluginEditor_cpp_resized fn;
    HarmonicsPluginEditor_cpp --> HarmonicsPluginEditor_cpp_resized
    main_cpp["main.cpp (cpp)"]
    class main_cpp mod;
    main_cpp_HarmonicsKnob["HarmonicsKnob"]
    class main_cpp_HarmonicsKnob fn;
    main_cpp --> main_cpp_HarmonicsKnob
    main_cpp_paint["paint"]
    class main_cpp_paint fn;
    main_cpp --> main_cpp_paint
    ext_HarmonicsPluginEditor_h["HarmonicsPluginEditor.h"]
    class ext_HarmonicsPluginEditor_h ext;
    HarmonicsPluginEditor_cpp -.->|imports| ext_HarmonicsPluginEditor_h
    ext_HarmonicsKnob_h["HarmonicsKnob.h"]
    class ext_HarmonicsKnob_h ext;
    main_cpp -.->|imports| ext_HarmonicsKnob_h
```

---

## Architecture Reference

### CPP (2 files)

#### `HarmonicsPluginEditor.cpp`
**Path:** `HarmonicsPluginEditor.cpp`

**Functions:**
- `HarmonicsPluginEditor` (line 3) `HarmonicsPluginEditor::HarmonicsPluginEditor(HarmonicsPluginProcessor& p)
    : AudioProcessorEdi...` - *HarmonicsPluginEditor.cpp include "HarmonicsPluginEditor.h"*
- `paint` (line 18) `void HarmonicsPluginEditor::paint(Graphics& g)`
- `resized` (line 23) `void HarmonicsPluginEditor::resized()`

#### `main.cpp`
**Path:** `main.cpp`

**Functions:**
- `HarmonicsKnob` (line 2) `HarmonicsKnob::HarmonicsKnob()` - *include "HarmonicsKnob.h"*
- `paint` (line 14) `void HarmonicsKnob::paint(Graphics& g)`
