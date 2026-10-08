# root

*Community 0 | 2 files | cohesion 1.00*

## Definition

This community groups 2 file(s) rooted at `root` with dominant language cpp (cohesion 1.00). Central symbols: `HarmonicsKnob`, `HarmonicsPluginEditor`, `paint`, `resized`. Core file: `HarmonicsPluginEditor.cpp` (3 symbols). Documented purpose: HarmonicsPluginEditor.cpp.

## Files

| File | Language | Layer | Symbols | Doc |
|------|----------|-------|---------|-----|
| `HarmonicsPluginEditor.cpp` | cpp | infrastructure | 3 | yes |
| `main.cpp` | cpp | utility | 2 | no |

## Key Symbols

- `HarmonicsPluginEditor` (function, `HarmonicsPluginEditor.cpp:4`) `HarmonicsPluginEditor::HarmonicsPluginEditor(HarmonicsPluginProcessor& p)     :`
- `paint` (function, `HarmonicsPluginEditor.cpp:19`) `void HarmonicsPluginEditor::paint(Graphics& g)`
- `resized` (function, `HarmonicsPluginEditor.cpp:24`) `void HarmonicsPluginEditor::resized()`
- `HarmonicsKnob` (function, `main.cpp:3`) `HarmonicsKnob::HarmonicsKnob()`
- `paint` (function, `main.cpp:15`) `void HarmonicsKnob::paint(Graphics& g)`

## Internal vs External Edges

- Internal resolved imports (EXTRACTED): 0
- Cross-boundary resolved imports (EXTRACTED): 0

## Connections

- No cross-community bridges recorded. This community is self-contained.

## Risks

- No scoped security, taint, cycle, or layer risks.

## Open Questions

- Why do 1 file(s) lack file-level docs (e.g. `main.cpp`)? What purpose do they serve?
- What would break if the most connected file in root changed?
- Should root be split, given cohesion 1.00?

## Sources

- `HarmonicsPluginEditor.cpp`
- `main.cpp`
