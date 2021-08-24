/*
  ==============================================================================

    SynthVoice.cpp
    Created: 24 Aug 2021 4:31:22pm
    Author:  Josh's Macbook Air

  ==============================================================================
*/

#include "SynthVoice.h"
#include <JuceHeader.h>

bool synthVoice::canPlaySound (juce::SynthesiserSound *sound)  {
    return dynamic_cast<juce::SynthesiserSound*>(sound) !=nullptr;
}

void synthVoice::startNote (int midiNoteNumber, float velocity, juce::SynthesiserSound *sound, int currentPitchWheelPosition) {

}

void synthVoice::stopNote (float velocity, bool allowTailOff) {

}

void synthVoice::controllerMoved (int controllerNumber, int newControllerValue) {

}

void synthVoice::pitchWheelMoved (int newPitchWheelValue) {

}

void synthVoice::renderNextBlock (juce::AudioBuffer< float > &outputBuffer, int startSample, int numSamples) {

}

