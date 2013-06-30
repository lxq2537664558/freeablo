#ifndef TIL_H
#define TIL_H

#include <string>
#include <stdint.h>
#include <vector>

typedef std::vector<int16_t> TilBlock;

class TilFile
{
    public:
        TilFile(const std::string&);
        const TilBlock& operator[] (size_t index) const;
        size_t size() const;

    private:
        std::vector<TilBlock> mBlocks;
};

#endif
