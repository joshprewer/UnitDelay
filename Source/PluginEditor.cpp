/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"


//==============================================================================
UnitDelayAudioProcessorEditor::UnitDelayAudioProcessorEditor (UnitDelayAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (400, 300);
    
    filterSlider.setSliderStyle(Slider::LinearHorizontal);
    filterSlider.setRange(0, 1000, 1);
    filterSlider.setTextBoxStyle(Slider::NoTextBox, false, 90, 0);
    filterSlider.setPopupDisplayEnabled(true, this);
    filterSlider.setTextValueSuffix("filter");
    filterSlider.setValue(100);
    
    addAndMakeVisible(&filterSlider);
}

UnitDelayAudioProcessorEditor::~UnitDelayAudioProcessorEditor()
{
}

//==============================================================================
void UnitDelayAudioProcessorEditor::paint (Graphics& g)
{
    g.fillAll (Colours::white);

    g.setColour (Colours::black);
    g.setFont (15.0f);
    g.drawFittedText ("Hello World, This is a test!", getLocalBounds(), Justification::centred, 1);
}

void UnitDelayAudioProcessorEditor::resized()
{
    filterSlider.setBounds((getWidth() / 2) - 100, 1, 200, getHeight() - 60);
    
    
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
