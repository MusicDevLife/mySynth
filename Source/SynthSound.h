/*
  ==============================================================================

    SynthSound.h
    Created: 24 Aug 2021 4:31:34pm
    Author:  Josh's Macbook Air

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>

class synthSound : public juce::SynthesiserSound {
public:
    bool appliesToNote (int midiNoteNumber) override {return true;};
    bool appliesToChannel (int midiChanel) override {return true;};
    
};


