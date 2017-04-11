//
// Created by kornel on 11.04.17.
//

#ifndef JIMP_EXERCISES_WORDCOUNTER_H
#define JIMP_EXERCISES_WORDCOUNTER_H

#include "string"
#include "iostream"
#include "list"
#include <regex>
#include <set>

using namespace std;

namespace datastructures
{
    class Counts{
    private:
        friend class WordCounter;
        int Counter;
    public:
        Counts();
        Counts(int);

        ~Counts();

        Counts & operator++();
        bool operator<(Counts) const;
        bool operator>(Counts) const;
        bool operator==(Counts) const;
    };
    class Word{
        friend class WordCounter;

        //POLA KLASY
        string Value; //zatrzymuje slowo

    public:
        //KONSTRUKTORY
        Word();
        Word(string str);

        //DESTRUKTOR
        ~Word();

        //OPERATORY
        bool operator<(Word) const;
        bool operator==(Word) const;
    };
    class WordCounter {

        //POLA KALSY
        list<pair<Word, Counts>> Dictionary;

    public:
        //KONSTRUKTORY
        WordCounter();
        WordCounter(initializer_list<Word>);

        //DESTRUKTOR
        ~WordCounter();

        //OPERATORY
        int operator[](string wanted);

        //METODY
        int DistinctWords();
        int TotalWords();
        set<Word> Words();
    };
}

using namespace datastructures;

#endif //JIMP_EXERCISES_WORDCOUNTER_H
