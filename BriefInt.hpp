#ifndef BRIEF_INT_HPP
#define BRIEF_INT_HPP

#include <cinttypes>
#include <cstddef>

///////////
// TYPES //
///////////

using i8 = std::int8_t;
using i16 = std::int16_t;
using i32 = std::int32_t;
using i64 = std::int64_t;

using if8 = std::int_fast8_t;
using if16 = std::int_fast16_t;
using if32 = std::int_fast32_t;
using if64 = std::int_fast64_t;

using il8 = std::int_least8_t;
using il16 = std::int_least16_t;
using il32 = std::int_least32_t;
using il64 = std::int_least64_t;

using imax = std::intmax_t;
using iptr = std::intptr_t;

using u8 = std::uint8_t;
using u16 = std::uint16_t;
using u32 = std::uint32_t;
using u64 = std::uint64_t;

using uf8 = std::uint_fast8_t;
using uf16 = std::uint_fast16_t;
using uf32 = std::uint_fast32_t;
using uf64 = std::uint_fast64_t;

using ul8 = std::uint_least8_t;
using ul16 = std::uint_least16_t;
using ul32 = std::uint_least32_t;
using ul64 = std::uint_least64_t;

using umax = std::uintmax_t;
using uptr = std::uintptr_t;

using size = std::size_t;

/////////////////////
// MACRO CONSTANTS //
/////////////////////

// Signed integers : minimum value
#define I8_MIN INT8_MIN
#define I16_MIN INT16_MIN
#define I32_MIN INT32_MIN
#define I64_MIN INT64_MIN

#define IF8_MIN INT_FAST8_MIN
#define IF16_MIN INT_FAST16_MIN
#define IF32_MIN INT_FAST32_MIN
#define IF64_MIN INT_FAST64_MIN

#define IL8_MIN INT_LEAST8_MIN
#define IL16_MIN INT_LEAST16_MIN
#define IL32_MIN INT_LEAST32_MIN
#define IL64_MIN INT_LEAST64_MIN

#define IPTR_MIN INTPTR_MIN
#define IMAX_MIN INTMAX_MIN

// Signed integers : maximum value
#define I8_MAX INT8_MAX
#define I16_MAX INT16_MAX
#define I32_MAX INT32_MAX
#define I64_MAX INT64_MAX

#define IF8_MAX INT_FAST8_MAX
#define IF16_MAX INT_FAST16_MAX
#define IF32_MAX INT_FAST32_MAX
#define IF64_MAX INT_FAST64_MAX

#define IL8_MAX INT_LEAST8_MAX
#define IL16_MAX INT_LEAST16_MAX
#define IL32_MAX INT_LEAST32_MAX
#define IL64_MAX INT_LEAST64_MAX

#define IPTR_MAX INTPTR_MAX
#define IMAX_MAX INTMAX_MAX

// Unsigned integers : maximum value
#define U8_MAX UINT8_MAX
#define U16_MAX UINT16_MAX
#define U32_MAX UINT32_MAX
#define U64_MAX UINT64_MAX

#define UF8_MAX UINT_FAST8_MAX
#define UF16_MAX UINT_FAST16_MAX
#define UF32_MAX UINT_FAST32_MAX
#define UF64_MAX UINT_FAST64_MAX

#define UL8_MAX UINT_LEAST8_MAX
#define UL16_MAX UINT_LEAST16_MAX
#define UL32_MAX UINT_LEAST32_MAX
#define UL64_MAX UINT_LEAST64_MAX

#define UPTR_MAX UINTPTR_MAX
#define UMAX_MAX UINTMAX_MAX

/////////////////////////////////////////////////////////
// FUNCTION MACROS FOR MINIMUM-WIDTH INTEGER CONSTANTS //
/////////////////////////////////////////////////////////

#define I8(n) INT8_C(n)
#define I16(n) INT16_C(n)
#define I32(n) INT32_C(n)
#define I64(n) INT64_C(n)

#define IMAX(n) INTMAX_C(n)

#define U8(n) UINT8_C(n)
#define U16(n) UINT16_C(n)
#define U32(n) UINT32_C(n)
#define U64(n) UINT64_C(n)

#define UMAX(n) UINTMAX_C(n)

////////////////////////////
// FORMAT MACRO CONSTANTS //
////////////////////////////

// Format constants for the fprintf family of functions

#define PI8 PRIi8
#define PI16 PRIi16
#define PI32 PRIi32
#define PI64 PRIi64

#define PIL8 PRIiLEAST8
#define PIL16 PRIiLEAST16
#define PIL32 PRIiLEAST32
#define PIL64 PRIiLEAST64

#define PIF8 PRIiFAST8
#define PIF16 PRIiFAST16
#define PIF32 PRIiFAST32
#define PIF64 PRIiFAST64

#define PIMAX PRIiMAX
#define PIPTR PRIiPTR

#define PD8 PRId8
#define PD16 PRId16
#define PD32 PRId32
#define PD64 PRId64

#define PDL8 PRIdLEAST8
#define PDL16 PRIdLEAST16
#define PDL32 PRIdLEAST32
#define PDL64 PRIdLEAST64

#define PDF8 PRIdFAST8
#define PDF16 PRIdFAST16
#define PDF32 PRIdFAST32
#define PDF64 PRIdFAST64

#define PDMAX PRIdMAX
#define PDPTR PRIdPTR

#define PU8 PRIu8
#define PU16 PRIu16
#define PU32 PRIu32
#define PU64 PRIu64

#define PUL8 PRIuLEAST8
#define PUL16 PRIuLEAST16
#define PUL32 PRIuLEAST32
#define PUL64 PRIuLEAST64

#define PUF8 PRIuFAST8
#define PUF16 PRIuFAST16
#define PUF32 PRIuFAST32
#define PUF64 PRIuFAST64

#define PUMAX PRIuMAX
#define PUPTR PRIuPTR

#define PO8 PRIo8
#define PO16 PRIo16
#define PO32 PRIo32
#define PO64 PRIo64

#define POL8 PRIoLEAST8
#define POL16 PRIoLEAST16
#define POL32 PRIoLEAST32
#define POL64 PRIoLEAST64

#define POF8 PRIoFAST8
#define POF16 PRIoFAST16
#define POF32 PRIoFAST32
#define POF64 PRIoFAST64

#define POMAX PRIoMAX
#define POPTR PRIoPTR

#define Px8 PRIx8
#define Px16 PRIx16
#define Px32 PRIx32
#define Px64 PRIx64

#define PxL8 PRIxLEAST8
#define PxL16 PRIxLEAST16
#define PxL32 PRIxLEAST32
#define PxL64 PRIxLEAST64

#define PxF8 PRIxFAST8
#define PxF16 PRIxFAST16
#define PxF32 PRIxFAST32
#define PxF64 PRIxFAST64

#define PxMAX PRIxMAX
#define PxPTR PRIxPTR

#define PX8 PRIX8
#define PX16 PRIX16
#define PX32 PRIX32
#define PX64 PRIX64

#define PXL8 PRIXLEAST8
#define PXL16 PRIXLEAST16
#define PXL32 PRIXLEAST32
#define PXL64 PRIXLEAST64

#define PXF8 PRIXFAST8
#define PXF16 PRIXFAST16
#define PXF32 PRIXFAST32
#define PXF64 PRIXFAST64

#define PXMAX PRIXMAX
#define PXPTR PRIXPTR

// Format constants for the fscanf family of functions

#define SI8 SCNi8
#define SI16 SCNi16
#define SI32 SCNi32
#define SI64 SCNi64

#define SIL8 SCNiLEAST8
#define SIL16 SCNiLEAST16
#define SIL32 SCNiLEAST32
#define SIL64 SCNiLEAST64

#define SIF8 SCNiFAST8
#define SIF16 SCNiFAST16
#define SIF32 SCNiFAST32
#define SIF64 SCNiFAST64

#define SIMAX SCNiMAX
#define SIPTR SCNiPTR

#define SD8 SCNd8
#define SD16 SCNd16
#define SD32 SCNd32
#define SD64 SCNd64

#define SDL8 SCNdLEAST8
#define SDL16 SCNdLEAST16
#define SDL32 SCNdLEAST32
#define SDL64 SCNdLEAST64

#define SDF8 SCNdFAST8
#define SDF16 SCNdFAST16
#define SDF32 SCNdFAST32
#define SDF64 SCNdFAST64

#define SDMAX SCNdMAX
#define SDPTR SCNdPTR

#define SU8 SCNu8
#define SU16 SCNu16
#define SU32 SCNu32
#define SU64 SCNu64

#define SUL8 SCNuLEAST8
#define SUL16 SCNuLEAST16
#define SUL32 SCNuLEAST32
#define SUL64 SCNuLEAST64

#define SUF8 SCNuFAST8
#define SUF16 SCNuFAST16
#define SUF32 SCNuFAST32
#define SUF64 SCNuFAST64

#define SUMAX SCNuMAX
#define SUPTR SCNuPTR

#define SO8 SCNo8
#define SO16 SCNo16
#define SO32 SCNo32
#define SO64 SCNo64

#define SOL8 SCNoLEAST8
#define SOL16 SCNoLEAST16
#define SOL32 SCNoLEAST32
#define SOL64 SCNoLEAST64

#define SOF8 SCNoFAST8
#define SOF16 SCNoFAST16
#define SOF32 SCNoFAST32
#define SOF64 SCNoFAST64

#define SOMAX SCNoMAX
#define SOPTR SCNoPTR

#define Sx8 SCNx8
#define Sx16 SCNx16
#define Sx32 SCNx32
#define Sx64 SCNx64

#define SxL8 SCNxLEAST8
#define SxL16 SCNxLEAST16
#define SxL32 SCNxLEAST32
#define SxL64 SCNxLEAST64

#define SxF8 SCNxFAST8
#define SxF16 SCNxFAST16
#define SxF32 SCNxFAST32
#define SxF64 SCNxFAST64

#define SxMAX SCNxMAX
#define SxPTR SCNxPTR

///////////////////////////////////
// USER DEFINED INTEGER LITERALS //
///////////////////////////////////

auto constexpr operator ""_i8(unsigned long long int n) -> i8 {
    return static_cast<i8>(n);
}

auto constexpr operator ""_i16(unsigned long long int n) -> i16 {
    return static_cast<i16>(n);
}

auto constexpr operator ""_i32(unsigned long long int n) -> i32 {
    return static_cast<i32>(n);
}

auto constexpr operator ""_i64(unsigned long long int n) -> i64 {
    return static_cast<i64>(n);
}

auto constexpr operator ""_if8(unsigned long long int n) -> if8 {
    return static_cast<if8>(n);
}

auto constexpr operator ""_if16(unsigned long long int n) -> if16 {
    return static_cast<if16>(n);
}

auto constexpr operator ""_if32(unsigned long long int n) -> if32 {
    return static_cast<if32>(n);
}

auto constexpr operator ""_if64(unsigned long long int n) -> if64 {
    return static_cast<if64>(n);
}

auto constexpr operator ""_il8(unsigned long long int n) -> il8 {
    return static_cast<il8>(n);
}

auto constexpr operator ""_il16(unsigned long long int n) -> il16 {
    return static_cast<il16>(n);
}

auto constexpr operator ""_il32(unsigned long long int n) -> il32 {
    return static_cast<il32>(n);
}

auto constexpr operator ""_il64(unsigned long long int n) -> il64 {
    return static_cast<il64>(n);
}

auto constexpr operator ""_imax(unsigned long long int n) -> imax {
    return static_cast<imax>(n);
}

auto constexpr operator ""_iptr(unsigned long long int n) -> iptr {
    return static_cast<iptr>(n);
}

auto constexpr operator ""_u8(unsigned long long int n) -> u8 {
    return static_cast<u8>(n);
}

auto constexpr operator ""_u16(unsigned long long int n) -> u16 {
    return static_cast<u16>(n);
}

auto constexpr operator ""_u32(unsigned long long int n) -> u32 {
    return static_cast<u32>(n);
}

auto constexpr operator ""_u64(unsigned long long int n) -> u64 {
    return static_cast<u64>(n);
}

auto constexpr operator ""_uf8(unsigned long long int n) -> uf8 {
    return static_cast<uf8>(n);
}

auto constexpr operator ""_uf16(unsigned long long int n) -> uf16 {
    return static_cast<uf16>(n);
}

auto constexpr operator ""_uf32(unsigned long long int n) -> uf32 {
    return static_cast<uf32>(n);
}

auto constexpr operator ""_uf64(unsigned long long int n) -> uf64 {
    return static_cast<uf64>(n);
}

auto constexpr operator ""_ul8(unsigned long long int n) -> ul8 {
    return static_cast<ul8>(n);
}

auto constexpr operator ""_ul16(unsigned long long int n) -> ul16 {
    return static_cast<ul16>(n);
}

auto constexpr operator""_ul32(unsigned long long int n) -> ul32 {
    return static_cast<ul32>(n);
}

auto constexpr operator ""_ul64(unsigned long long int n) -> ul64 {
    return static_cast<ul64>(n);
}

auto constexpr operator ""_umax(unsigned long long int n) -> umax {
    return static_cast<umax>(n);
}

auto constexpr operator ""_uptr(unsigned long long int n) -> uptr {
    return static_cast<uptr>(n);
}

auto constexpr operator ""_sz(unsigned long long int n) -> size {
    return static_cast<size>(n);
}

#endif // BRIEF_INT_HPP
