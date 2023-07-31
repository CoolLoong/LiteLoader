#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ProfilerLite {
public:
    // ProfilerLite inner types declare
    // clang-format off
    struct ScopedData;
    // clang-format on

    // ProfilerLite inner types define
    struct ScopedData {

    public:
        // prevent constructor by default
        ScopedData& operator=(ScopedData const&) = delete;
        ScopedData(ScopedData const&)            = delete;
        ScopedData()                             = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??1ScopedData\@ProfilerLite\@\@QEAA\@XZ
         */
        MCAPI ~ScopedData();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    ProfilerLite& operator=(ProfilerLite const&) = delete;
    ProfilerLite(ProfilerLite const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ProfilerLite\@\@QEAA\@XZ
     */
    MCAPI ProfilerLite();
    /**
     * @symbol
     * ?calculateAndSetServerNetworkTime\@ProfilerLite\@\@QEAAXV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI void calculateAndSetServerNetworkTime(std::chrono::time_point<std::chrono::steady_clock>);
    /**
     * @symbol
     * ?calculateAndSetServerTickTimes\@ProfilerLite\@\@QEAAXV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI void calculateAndSetServerTickTimes(std::chrono::time_point<std::chrono::steady_clock>);
    /**
     * @symbol
     * ?getServerTickTime\@ProfilerLite\@\@QEBA?AV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@XZ
     */
    MCAPI std::chrono::nanoseconds getServerTickTime() const;
    /**
     * @symbol ??1ProfilerLite\@\@QEAA\@XZ
     */
    MCAPI ~ProfilerLite();
    /**
     * @symbol ?sEmptyThreadID\@ProfilerLite\@\@2Vid\@thread\@std\@\@A
     */
    MCAPI static std::thread::id sEmptyThreadID;
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol ?gProfilerLiteInstance\@ProfilerLite\@\@0V1\@A
     */
    MCAPI static class ProfilerLite gProfilerLiteInstance;
    // NOLINTEND
};
