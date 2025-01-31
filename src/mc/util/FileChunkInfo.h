#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FileChunkInfo {
public:
    // prevent constructor by default
    FileChunkInfo& operator=(FileChunkInfo const&);
    FileChunkInfo(FileChunkInfo const&);
    FileChunkInfo();

public:
    // NOLINTBEGIN
    // symbol: ??0FileChunkInfo@@QEAA@H_K0@Z
    MCAPI FileChunkInfo(int, uint64, uint64);

    // symbol: ?isValid@FileChunkInfo@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ?size@FileChunkInfo@@QEBAHXZ
    MCAPI int size() const;

    // NOLINTEND
};
