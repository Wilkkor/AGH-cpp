//
// Created by kornel on 11.04.17.
//

#include "WordCounter.h"

//KONSTRUKTORY
Counts::Counts() {
}

Counts::Counts(int number) {
    Counter = number;
}

//DESTRUKTOR
Counts::~Counts() {
}

//OPERATORY
Counts & Counts::operator++() {
    Counter++;
    return *this;
}

bool Counts::operator<(Counts argument) const {
    return (Counter<argument.Counter);
}

bool Counts::operator>(Counts argument) const {
    return (Counter>argument.Counter);
}

bool Counts::operator==(Counts argument) const {
    return (Counter==argument.Counter);
}

Word::Word() {
}

Word::Word(string value) {
    Value = value;
}

//DESTRUKTOR
Word::~Word() {
}

//OPERATORY
bool Word::operator<(Word argument) const {
    return (Value<argument.Value);
}

bool Word::operator==(Word argument) const {
    return (Value==argument.Value);
}

WordCounter::WordCounter() {
}

WordCounter::WordCounter(initializer_list<Word> list) {

    int IsInside;

    for (auto element : list)
    {
        IsInside = 0;

        for(pair<Word, Counts> pair : Dictionary)
        {
            if (pair.first.Value == element.Value)
            {
                ++find(Dictionary.begin(), Dictionary.end(), pair)->second;
                IsInside = 1;
                break;
            }
        }

        if (IsInside == 0)
        {
            Counts new_counter{1};
            Dictionary.emplace_back(std::make_pair(element, new_counter));
        }
    }
}

//DESTRUKTORY
WordCounter::~WordCounter() {
}

//OPERATORY
int WordCounter::operator[](string searched_value) {
    for(auto element : Dictionary)
    {
        if(element.first.Value == searched_value)
            return element.second.Counter;
    }
    return 0;
}

//METODY
int WordCounter::DistinctWords() {
    return Dictionary.size();
}

int WordCounter::TotalWords() {
    int total = 0;

    for(pair<Word, Counts> pair : Dictionary) {
        total += pair.second.Counter;
    }
    return total;
}

set<Word> WordCounter::Words() {

    set<Word> output_set;

    Dictionary.sort([](const pair<Word, Counts> & a, const pair<Word, Counts> & b) { return a.second > b.second; });

    for(auto element : Dictionary) {
        output_set.emplace(element.first);
    }

    return output_set;
}