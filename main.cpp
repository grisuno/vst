#include "HarmonicsKnob.h"

HarmonicsKnob::HarmonicsKnob()
{
    setSliderStyle(Slider::Rotary);
    setRange(0.0f, 1.0f);
    onValueChange = [this] { harmonicsLevel.setValueNotifyingHost(getValue()); };
    setTextBoxStyle(Slider::NoTextBox, true, 0, 0);
}

HarmonicsKnob::~HarmonicsKnob()
{
}

void HarmonicsKnob::paint(Graphics& g)
{
    auto bounds = getLocalBounds().toFloat();
    auto radius = jmin(bounds.getWidth(), bounds.getHeight()) * 0.5f;
    auto center = bounds.getCentre();
    auto angle = static_cast<float>(M_PI) * 2.0f * (getValue() - getMinimum()) / (getMaximum() - getMinimum());
    auto x = center.x + radius * std::cos(angle);
    auto y = center.y + radius * std::sin(angle);
    g.drawLine(center.x, center.y, x, y, 2.0f);
    g.drawEllipse(center.x - radius, center.y - radius, radius * 2.0f, radius * 2.0f, 2.0f);
}
