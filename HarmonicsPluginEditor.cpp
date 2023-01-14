//HarmonicsPluginEditor.cpp
#include "HarmonicsPluginEditor.h"

HarmonicsPluginEditor::HarmonicsPluginEditor(HarmonicsPluginProcessor& p)
    : AudioProcessorEditor(&p), processor(p), harmonicsKnob(p.harmonicsLevel)
{
    addAndMakeVisible(harmonicsKnob);
    harmonicsKnob.setSliderStyle(Slider::Rotary);
    harmonicsKnob.setRange(0.0f, 1.0f);
    harmonicsKnob.setValue(harmonicsLevel.getValue());
    harmonicsKnob.onValueChange = [this] { harmonicsLevel.setValueNotifyingHost(harmonicsKnob.getValue()); };
    harmonicsKnob.setTextBoxStyle(Slider::NoTextBox, true, 0, 0);
}

HarmonicsPluginEditor::~HarmonicsPluginEditor()
{
}

void HarmonicsPluginEditor::paint(Graphics& g)
{
    g.fillAll(getLookAndFeel().findColour(ResizableWindow::backgroundColourId));
}

void HarmonicsPluginEditor::resized()
{
    auto bounds = getLocalBounds();
    harmonicsKnob.setBounds(bounds.reduced(40));
}
