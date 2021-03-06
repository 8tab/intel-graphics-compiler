/*===================== begin_copyright_notice ==================================

Copyright (c) 2017 Intel Corporation

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be included
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


======================= end_copyright_notice ==================================*/
#ifndef IGA_BXML_OPS_HPP
#define IGA_BXML_OPS_HPP

// ******************** DO NOT MODIFY DIRECTLY ********************
// Auto-generated by IGA project tools

namespace iga
{
    enum class Op
    {
        INVALID = 0,
        FIRST_OP = 1,

        ADD          = FIRST_OP +   0,
        ADDC         = FIRST_OP +   2,
        AND          = FIRST_OP +   3,
        ASR          = FIRST_OP +   4,
        AVG          = FIRST_OP +   5,
        BFE          = FIRST_OP +   6,
        BFI1         = FIRST_OP +   7,
        BFI2         = FIRST_OP +   8,
        BFREV        = FIRST_OP + 266,
        BRC          = FIRST_OP + 267,
        BRD          = FIRST_OP + 268,
        BREAK        = FIRST_OP + 269,
        CALL         = FIRST_OP + 270,
        CALLA        = FIRST_OP + 271,
        CBIT         = FIRST_OP + 272,
        CMP          = FIRST_OP + 273,
        CMPN         = FIRST_OP + 274,
        CONT         = FIRST_OP + 275,
        CSEL         = FIRST_OP + 276,
        DIM          = FIRST_OP + 277,
        DP2          = FIRST_OP + 278,
        DP3          = FIRST_OP + 279,
        DP4          = FIRST_OP + 280,
        DP4A         = FIRST_OP + 281,
        DPH          = FIRST_OP + 348,
        ELSE         = FIRST_OP + 349,
        ENDIF        = FIRST_OP + 350,
        F16TO32      = FIRST_OP + 351,
        F32TO16      = FIRST_OP + 352,
        FBH          = FIRST_OP + 353,
        FBL          = FIRST_OP + 354,
        FRC          = FIRST_OP + 355,
        GOTO         = FIRST_OP + 358,
        HALT         = FIRST_OP + 359,
        IF           = FIRST_OP + 360,
        ILLEGAL      = FIRST_OP + 361,
        JMPI         = FIRST_OP + 362,
        JOIN         = FIRST_OP + 363,
        LINE         = FIRST_OP + 364,
        LRP          = FIRST_OP + 365,
        LZD          = FIRST_OP + 366,
        MAC          = FIRST_OP + 367,
        MACH         = FIRST_OP + 368,
        MAD          = FIRST_OP + 370,
        MADM         = FIRST_OP + 371,
        MATH         = FIRST_OP + 390,
        MATH_COS     = FIRST_OP + 391,
        MATH_EXP     = FIRST_OP + 392,
        MATH_FDIV    = FIRST_OP + 393,
        MATH_IDIV    = FIRST_OP + 394,
        MATH_INV     = FIRST_OP + 395,
        MATH_INVM    = FIRST_OP + 396,
        MATH_IQOT    = FIRST_OP + 397,
        MATH_IREM    = FIRST_OP + 398,
        MATH_LOG     = FIRST_OP + 399,
        MATH_POW     = FIRST_OP + 400,
        MATH_RSQT    = FIRST_OP + 401,
        MATH_RSQTM   = FIRST_OP + 402,
        MATH_SIN     = FIRST_OP + 404,
        MATH_SQT     = FIRST_OP + 405,
        MOV          = FIRST_OP + 407,
        MOVI         = FIRST_OP + 408,
        MUL          = FIRST_OP + 409,
        NOP          = FIRST_OP + 410,
        NOT          = FIRST_OP + 411,
        OR           = FIRST_OP + 412,
        PLN          = FIRST_OP + 413,
        RET          = FIRST_OP + 414,
        RNDD         = FIRST_OP + 415,
        RNDE         = FIRST_OP + 416,
        RNDU         = FIRST_OP + 417,
        RNDZ         = FIRST_OP + 418,
        ROL          = FIRST_OP + 419,
        ROR          = FIRST_OP + 420,
        SAD2         = FIRST_OP + 421,
        SADA2        = FIRST_OP + 422,
        SEL          = FIRST_OP + 424,
        SEND         = FIRST_OP + 425,
        SENDC        = FIRST_OP + 426,
        SENDC_CRE    = FIRST_OP + 428,
        SENDC_DC0    = FIRST_OP + 429,
        SENDC_DC1    = FIRST_OP + 430,
        SENDC_DC2    = FIRST_OP + 431,
        SENDC_DCRO   = FIRST_OP + 432,
        SENDC_GTWY   = FIRST_OP + 433,
        SENDC_NULL   = FIRST_OP + 434,
        SENDC_PIXI   = FIRST_OP + 435,
        SENDC_RC     = FIRST_OP + 436,
        SENDC_SMPL   = FIRST_OP + 439,
        SENDC_TS     = FIRST_OP + 441,
        SENDC_URB    = FIRST_OP + 444,
        SENDC_VME    = FIRST_OP + 445,
        SENDS        = FIRST_OP + 446,
        SENDSC       = FIRST_OP + 447,
        SEND_CRE     = FIRST_OP + 449,
        SEND_DC0     = FIRST_OP + 450,
        SEND_DC1     = FIRST_OP + 451,
        SEND_DC2     = FIRST_OP + 452,
        SEND_DCRO    = FIRST_OP + 453,
        SEND_GTWY    = FIRST_OP + 454,
        SEND_NULL    = FIRST_OP + 455,
        SEND_PIXI    = FIRST_OP + 456,
        SEND_RC      = FIRST_OP + 457,
        SEND_SMPL    = FIRST_OP + 460,
        SEND_TS      = FIRST_OP + 462,
        SEND_URB     = FIRST_OP + 465,
        SEND_VME     = FIRST_OP + 466,
        SHL          = FIRST_OP + 474,
        SHR          = FIRST_OP + 475,
        SMOV         = FIRST_OP + 476,
        SUBB         = FIRST_OP + 477,
        SYNC         = FIRST_OP + 478,
        SYNC_ALLRD   = FIRST_OP + 479,
        SYNC_ALLWR   = FIRST_OP + 480,
        SYNC_BAR     = FIRST_OP + 481,
        SYNC_HOST    = FIRST_OP + 483,
        SYNC_NOP     = FIRST_OP + 484,
        WAIT         = FIRST_OP + 485,
        WHILE        = FIRST_OP + 486,
        XOR          = FIRST_OP + 487,

        LAST_OP   = FIRST_OP + 487,
        TOTAL_OPS = LAST_OP
    };
}
#endif // IGA_BXML_OPS_HPP
