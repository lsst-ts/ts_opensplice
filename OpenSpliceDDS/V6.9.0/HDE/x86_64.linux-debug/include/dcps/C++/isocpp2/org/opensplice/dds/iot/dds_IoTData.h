#ifndef _dds_IoTData_H_
#define _dds_IoTData_H_

#include <dds/core/ddscore.hpp>

namespace DDS
{
    namespace IoT
    {
        typedef uint8_t IoTUI8;

        typedef uint16_t IoTUI16;

        typedef uint32_t IoTUI32;

        typedef uint64_t IoTUI64;

        typedef char IoTI8;

        typedef int16_t IoTI16;

        typedef int32_t IoTI32;

        typedef int64_t IoTI64;

        typedef float IoTF32;

        typedef double IoTF64;

        typedef bool IoTB;

        typedef std::string IoTStr;

        typedef char IoTCh;

        typedef std::vector<DDS::IoT::IoTUI8>  IoTUI8Seq;

        typedef std::vector<DDS::IoT::IoTUI16>  IoTUI16Seq;

        typedef std::vector<DDS::IoT::IoTUI32>  IoTUI32Seq;

        typedef std::vector<DDS::IoT::IoTUI64>  IoTUI64Seq;

        typedef std::vector<DDS::IoT::IoTI8>  IoTI8Seq;

        typedef std::vector<DDS::IoT::IoTI16>  IoTI16Seq;

        typedef std::vector<DDS::IoT::IoTI32>  IoTI32Seq;

        typedef std::vector<DDS::IoT::IoTI64>  IoTI64Seq;

        typedef std::vector<DDS::IoT::IoTF32>  IoTF32Seq;

        typedef std::vector<DDS::IoT::IoTF64>  IoTF64Seq;

        typedef std::vector<DDS::IoT::IoTB>  IoTBSeq;

        typedef std::vector<DDS::IoT::IoTStr>  IoTStrSeq;

        typedef std::vector<DDS::IoT::IoTCh>  IoTChSeq;

        OSPL_ENUM IoTType {
            TYPE_IoTUI8,
            TYPE_IoTUI16,
            TYPE_IoTUI32,
            TYPE_IoTUI64,
            TYPE_IoTI8,
            TYPE_IoTI16,
            TYPE_IoTI32,
            TYPE_IoTI64,
            TYPE_IoTF32,
            TYPE_IoTF64,
            TYPE_IoTB,
            TYPE_IoTStr,
            TYPE_IoTCh,
            TYPE_IoTUI8Seq,
            TYPE_IoTUI16Seq,
            TYPE_IoTUI32Seq,
            TYPE_IoTUI64Seq,
            TYPE_IoTI8Seq,
            TYPE_IoTI16Seq,
            TYPE_IoTI32Seq,
            TYPE_IoTI64Seq,
            TYPE_IoTF32Seq,
            TYPE_IoTF64Seq,
            TYPE_IoTBSeq,
            TYPE_IoTStrSeq,
            TYPE_IoTChSeq
        };

        class IoTValue OSPL_DDS_FINAL
        {
        public:
        private:
            DDS::IoT::IoTType m__d;
            union {
                DDS::IoT::IoTUI8 m_ui8;
                DDS::IoT::IoTUI16 m_ui16;
                DDS::IoT::IoTUI32 m_ui32;
                DDS::IoT::IoTUI64 m_ui64;
                DDS::IoT::IoTI8 m_i8;
                DDS::IoT::IoTI16 m_i16;
                DDS::IoT::IoTI32 m_i32;
                DDS::IoT::IoTI64 m_i64;
                DDS::IoT::IoTF32 m_f32;
                DDS::IoT::IoTF64 m_f64;
                DDS::IoT::IoTB m_b;
                DDS::IoT::IoTStr *m_str;
                DDS::IoT::IoTCh m_ch;
                DDS::IoT::IoTUI8Seq *m_ui8Seq;
                DDS::IoT::IoTUI16Seq *m_ui16Seq;
                DDS::IoT::IoTUI32Seq *m_ui32Seq;
                DDS::IoT::IoTUI64Seq *m_ui64Seq;
                DDS::IoT::IoTI8Seq *m_i8Seq;
                DDS::IoT::IoTI16Seq *m_i16Seq;
                DDS::IoT::IoTI32Seq *m_i32Seq;
                DDS::IoT::IoTI64Seq *m_i64Seq;
                DDS::IoT::IoTF32Seq *m_f32Seq;
                DDS::IoT::IoTF64Seq *m_f64Seq;
                DDS::IoT::IoTBSeq *m_bSeq;
                DDS::IoT::IoTStrSeq *m_strSeq;
                DDS::IoT::IoTChSeq *m_chSeq;
            } _union;

            void _copy(const IoTValue &that)
            {
                if (this != &that) {
                    m__d = that.m__d;
                    switch(that.m__d) {
                    case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI8):
                        _union.m_ui8 = that._union.m_ui8;
                        break;
                    case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI16):
                        _union.m_ui16 = that._union.m_ui16;
                        break;
                    case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI32):
                        _union.m_ui32 = that._union.m_ui32;
                        break;
                    case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI64):
                        _union.m_ui64 = that._union.m_ui64;
                        break;
                    case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI8):
                        _union.m_i8 = that._union.m_i8;
                        break;
                    case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI16):
                        _union.m_i16 = that._union.m_i16;
                        break;
                    case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI32):
                        _union.m_i32 = that._union.m_i32;
                        break;
                    case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI64):
                        _union.m_i64 = that._union.m_i64;
                        break;
                    case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF32):
                        _union.m_f32 = that._union.m_f32;
                        break;
                    case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF64):
                        _union.m_f64 = that._union.m_f64;
                        break;
                    case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTB):
                        _union.m_b = that._union.m_b;
                        break;
                    case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTStr):
                        _union.m_str = new DDS::IoT::IoTStr(*that._union.m_str);
                        break;
                    case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTCh):
                        _union.m_ch = that._union.m_ch;
                        break;
                    case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI8Seq):
                        _union.m_ui8Seq = new DDS::IoT::IoTUI8Seq(*that._union.m_ui8Seq);
                        break;
                    case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI16Seq):
                        _union.m_ui16Seq = new DDS::IoT::IoTUI16Seq(*that._union.m_ui16Seq);
                        break;
                    case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI32Seq):
                        _union.m_ui32Seq = new DDS::IoT::IoTUI32Seq(*that._union.m_ui32Seq);
                        break;
                    case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI64Seq):
                        _union.m_ui64Seq = new DDS::IoT::IoTUI64Seq(*that._union.m_ui64Seq);
                        break;
                    case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI8Seq):
                        _union.m_i8Seq = new DDS::IoT::IoTI8Seq(*that._union.m_i8Seq);
                        break;
                    case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI16Seq):
                        _union.m_i16Seq = new DDS::IoT::IoTI16Seq(*that._union.m_i16Seq);
                        break;
                    case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI32Seq):
                        _union.m_i32Seq = new DDS::IoT::IoTI32Seq(*that._union.m_i32Seq);
                        break;
                    case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI64Seq):
                        _union.m_i64Seq = new DDS::IoT::IoTI64Seq(*that._union.m_i64Seq);
                        break;
                    case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF32Seq):
                        _union.m_f32Seq = new DDS::IoT::IoTF32Seq(*that._union.m_f32Seq);
                        break;
                    case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF64Seq):
                        _union.m_f64Seq = new DDS::IoT::IoTF64Seq(*that._union.m_f64Seq);
                        break;
                    case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTBSeq):
                        _union.m_bSeq = new DDS::IoT::IoTBSeq(*that._union.m_bSeq);
                        break;
                    case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTStrSeq):
                        _union.m_strSeq = new DDS::IoT::IoTStrSeq(*that._union.m_strSeq);
                        break;
                    case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTChSeq):
                        _union.m_chSeq = new DDS::IoT::IoTChSeq(*that._union.m_chSeq);
                        break;
                    }
                }
            }

            void _deleteBranch()
            {
                switch(m__d) {
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI8):
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI16):
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI32):
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI64):
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI8):
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI16):
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI32):
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI64):
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF32):
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF64):
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTB):
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTStr):
                    delete _union.m_str;
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTCh):
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI8Seq):
                    delete _union.m_ui8Seq;
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI16Seq):
                    delete _union.m_ui16Seq;
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI32Seq):
                    delete _union.m_ui32Seq;
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI64Seq):
                    delete _union.m_ui64Seq;
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI8Seq):
                    delete _union.m_i8Seq;
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI16Seq):
                    delete _union.m_i16Seq;
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI32Seq):
                    delete _union.m_i32Seq;
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI64Seq):
                    delete _union.m_i64Seq;
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF32Seq):
                    delete _union.m_f32Seq;
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF64Seq):
                    delete _union.m_f64Seq;
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTBSeq):
                    delete _union.m_bSeq;
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTStrSeq):
                    delete _union.m_strSeq;
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTChSeq):
                    delete _union.m_chSeq;
                    break;
                }
            }

        public:
            IoTValue() :
                    m__d(OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI8))
            {
                _union.m_ui8 = 0;
            }

            ~IoTValue()
            {
                _deleteBranch();
            }

            IoTValue(const IoTValue &_other)
            {
                _copy(_other);
            }

#ifdef OSPL_DDS_CXX11
            IoTValue(IoTValue &&_other)
            {
                ::std::memcpy(this, &_other, sizeof(IoTValue));
                ::std::memset(&_other, 0, sizeof(IoTValue));
            }

            IoTValue& operator=(IoTValue &&_other)
            {
                if (this != &_other) {
                    ::std::memcpy(this, &_other, sizeof(IoTValue));
                    ::std::memset(&_other, 0, sizeof(IoTValue));
                }
                return *this;
            }
#endif

            IoTValue& operator=(const IoTValue &_other)
            {
                _deleteBranch();
                _copy(_other);
                return *this;
            }

            bool operator==(const IoTValue& _other) const
            {
                if (this != &_other) {
                    if (m__d != _other.m__d) {
                        return false;
                    } else {
                        switch (m__d) {
                            case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI8):
                                return (_union.m_ui8 == _other._union.m_ui8);
                                break;
                            case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI16):
                                return (_union.m_ui16 == _other._union.m_ui16);
                                break;
                            case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI32):
                                return (_union.m_ui32 == _other._union.m_ui32);
                                break;
                            case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI64):
                                return (_union.m_ui64 == _other._union.m_ui64);
                                break;
                            case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI8):
                                return (_union.m_i8 == _other._union.m_i8);
                                break;
                            case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI16):
                                return (_union.m_i16 == _other._union.m_i16);
                                break;
                            case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI32):
                                return (_union.m_i32 == _other._union.m_i32);
                                break;
                            case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI64):
                                return (_union.m_i64 == _other._union.m_i64);
                                break;
                            case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF32):
                                return (_union.m_f32 == _other._union.m_f32);
                                break;
                            case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF64):
                                return (_union.m_f64 == _other._union.m_f64);
                                break;
                            case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTB):
                                return (_union.m_b == _other._union.m_b);
                                break;
                            case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTStr):
                                return (*_union.m_str == *_other._union.m_str);
                                break;
                            case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTCh):
                                return (_union.m_ch == _other._union.m_ch);
                                break;
                            case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI8Seq):
                                return (*_union.m_ui8Seq == *_other._union.m_ui8Seq);
                                break;
                            case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI16Seq):
                                return (*_union.m_ui16Seq == *_other._union.m_ui16Seq);
                                break;
                            case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI32Seq):
                                return (*_union.m_ui32Seq == *_other._union.m_ui32Seq);
                                break;
                            case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI64Seq):
                                return (*_union.m_ui64Seq == *_other._union.m_ui64Seq);
                                break;
                            case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI8Seq):
                                return (*_union.m_i8Seq == *_other._union.m_i8Seq);
                                break;
                            case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI16Seq):
                                return (*_union.m_i16Seq == *_other._union.m_i16Seq);
                                break;
                            case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI32Seq):
                                return (*_union.m_i32Seq == *_other._union.m_i32Seq);
                                break;
                            case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI64Seq):
                                return (*_union.m_i64Seq == *_other._union.m_i64Seq);
                                break;
                            case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF32Seq):
                                return (*_union.m_f32Seq == *_other._union.m_f32Seq);
                                break;
                            case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF64Seq):
                                return (*_union.m_f64Seq == *_other._union.m_f64Seq);
                                break;
                            case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTBSeq):
                                return (*_union.m_bSeq == *_other._union.m_bSeq);
                                break;
                            case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTStrSeq):
                                return (*_union.m_strSeq == *_other._union.m_strSeq);
                                break;
                            case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTChSeq):
                                return (*_union.m_chSeq == *_other._union.m_chSeq);
                                break;
                        }
                    }
                } else {
                    return true;
                }
            }

            bool operator!=(const IoTValue& _other) const
            {
                return !(*this == _other);
            }

            DDS::IoT::IoTType _d() const
            {
                return m__d;
            }

            void _d(DDS::IoT::IoTType val)
            {
                bool valid = true;
                switch (val) {
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI8):
                    if (m__d != OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI8)) {
                        valid = false;
                    }
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI16):
                    if (m__d != OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI16)) {
                        valid = false;
                    }
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI32):
                    if (m__d != OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI32)) {
                        valid = false;
                    }
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI64):
                    if (m__d != OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI64)) {
                        valid = false;
                    }
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI8):
                    if (m__d != OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI8)) {
                        valid = false;
                    }
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI16):
                    if (m__d != OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI16)) {
                        valid = false;
                    }
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI32):
                    if (m__d != OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI32)) {
                        valid = false;
                    }
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI64):
                    if (m__d != OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI64)) {
                        valid = false;
                    }
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF32):
                    if (m__d != OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF32)) {
                        valid = false;
                    }
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF64):
                    if (m__d != OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF64)) {
                        valid = false;
                    }
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTB):
                    if (m__d != OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTB)) {
                        valid = false;
                    }
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTStr):
                    if (m__d != OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTStr)) {
                        valid = false;
                    }
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTCh):
                    if (m__d != OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTCh)) {
                        valid = false;
                    }
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI8Seq):
                    if (m__d != OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI8Seq)) {
                        valid = false;
                    }
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI16Seq):
                    if (m__d != OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI16Seq)) {
                        valid = false;
                    }
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI32Seq):
                    if (m__d != OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI32Seq)) {
                        valid = false;
                    }
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI64Seq):
                    if (m__d != OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI64Seq)) {
                        valid = false;
                    }
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI8Seq):
                    if (m__d != OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI8Seq)) {
                        valid = false;
                    }
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI16Seq):
                    if (m__d != OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI16Seq)) {
                        valid = false;
                    }
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI32Seq):
                    if (m__d != OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI32Seq)) {
                        valid = false;
                    }
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI64Seq):
                    if (m__d != OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI64Seq)) {
                        valid = false;
                    }
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF32Seq):
                    if (m__d != OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF32Seq)) {
                        valid = false;
                    }
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF64Seq):
                    if (m__d != OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF64Seq)) {
                        valid = false;
                    }
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTBSeq):
                    if (m__d != OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTBSeq)) {
                        valid = false;
                    }
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTStrSeq):
                    if (m__d != OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTStrSeq)) {
                        valid = false;
                    }
                    break;
                case OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTChSeq):
                    if (m__d != OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTChSeq)) {
                        valid = false;
                    }
                    break;
                }

                if (!valid) {
                    throw dds::core::PreconditionNotMetError("New discriminator value does not match current discriminator");
                }

                m__d = val;
            }

            DDS::IoT::IoTUI8 ui8() const
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI8)) {
                    return _union.m_ui8;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            DDS::IoT::IoTUI8& ui8()
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI8)) {
                    return _union.m_ui8;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            void ui8(DDS::IoT::IoTUI8 val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI8);
                _union.m_ui8 = val;
            }

            DDS::IoT::IoTUI16 ui16() const
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI16)) {
                    return _union.m_ui16;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            DDS::IoT::IoTUI16& ui16()
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI16)) {
                    return _union.m_ui16;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            void ui16(DDS::IoT::IoTUI16 val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI16);
                _union.m_ui16 = val;
            }

            DDS::IoT::IoTUI32 ui32() const
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI32)) {
                    return _union.m_ui32;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            DDS::IoT::IoTUI32& ui32()
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI32)) {
                    return _union.m_ui32;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            void ui32(DDS::IoT::IoTUI32 val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI32);
                _union.m_ui32 = val;
            }

            DDS::IoT::IoTUI64 ui64() const
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI64)) {
                    return _union.m_ui64;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            DDS::IoT::IoTUI64& ui64()
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI64)) {
                    return _union.m_ui64;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            void ui64(DDS::IoT::IoTUI64 val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI64);
                _union.m_ui64 = val;
            }

            DDS::IoT::IoTI8 i8() const
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI8)) {
                    return _union.m_i8;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            DDS::IoT::IoTI8& i8()
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI8)) {
                    return _union.m_i8;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            void i8(DDS::IoT::IoTI8 val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI8);
                _union.m_i8 = val;
            }

            DDS::IoT::IoTI16 i16() const
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI16)) {
                    return _union.m_i16;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            DDS::IoT::IoTI16& i16()
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI16)) {
                    return _union.m_i16;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            void i16(DDS::IoT::IoTI16 val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI16);
                _union.m_i16 = val;
            }

            DDS::IoT::IoTI32 i32() const
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI32)) {
                    return _union.m_i32;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            DDS::IoT::IoTI32& i32()
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI32)) {
                    return _union.m_i32;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            void i32(DDS::IoT::IoTI32 val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI32);
                _union.m_i32 = val;
            }

            DDS::IoT::IoTI64 i64() const
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI64)) {
                    return _union.m_i64;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            DDS::IoT::IoTI64& i64()
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI64)) {
                    return _union.m_i64;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            void i64(DDS::IoT::IoTI64 val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI64);
                _union.m_i64 = val;
            }

            DDS::IoT::IoTF32 f32() const
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF32)) {
                    return _union.m_f32;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            DDS::IoT::IoTF32& f32()
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF32)) {
                    return _union.m_f32;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            void f32(DDS::IoT::IoTF32 val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF32);
                _union.m_f32 = val;
            }

            DDS::IoT::IoTF64 f64() const
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF64)) {
                    return _union.m_f64;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            DDS::IoT::IoTF64& f64()
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF64)) {
                    return _union.m_f64;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            void f64(DDS::IoT::IoTF64 val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF64);
                _union.m_f64 = val;
            }

            DDS::IoT::IoTB b() const
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTB)) {
                    return _union.m_b;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            DDS::IoT::IoTB& b()
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTB)) {
                    return _union.m_b;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            void b(DDS::IoT::IoTB val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTB);
                _union.m_b = val;
            }

            const DDS::IoT::IoTStr& str() const
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTStr)) {
                    return *_union.m_str;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            DDS::IoT::IoTStr& str()
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTStr)) {
                    return *_union.m_str;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            void str(const DDS::IoT::IoTStr& val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTStr);
                _union.m_str = new DDS::IoT::IoTStr(val);
            }

#ifdef OSPL_DDS_CXX11
            void str(DDS::IoT::IoTStr &&val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTStr);
                _union.m_str = new DDS::IoT::IoTStr(val);
            }
#endif

            DDS::IoT::IoTCh ch() const
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTCh)) {
                    return _union.m_ch;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            DDS::IoT::IoTCh& ch()
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTCh)) {
                    return _union.m_ch;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            void ch(DDS::IoT::IoTCh val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTCh);
                _union.m_ch = val;
            }

            const DDS::IoT::IoTUI8Seq& ui8Seq() const
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI8Seq)) {
                    return *_union.m_ui8Seq;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            DDS::IoT::IoTUI8Seq& ui8Seq()
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI8Seq)) {
                    return *_union.m_ui8Seq;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            void ui8Seq(const DDS::IoT::IoTUI8Seq& val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI8Seq);
                _union.m_ui8Seq = new DDS::IoT::IoTUI8Seq(val);
            }

#ifdef OSPL_DDS_CXX11
            void ui8Seq(DDS::IoT::IoTUI8Seq &&val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI8Seq);
                _union.m_ui8Seq = new DDS::IoT::IoTUI8Seq(val);
            }
#endif

            const DDS::IoT::IoTUI16Seq& ui16Seq() const
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI16Seq)) {
                    return *_union.m_ui16Seq;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            DDS::IoT::IoTUI16Seq& ui16Seq()
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI16Seq)) {
                    return *_union.m_ui16Seq;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            void ui16Seq(const DDS::IoT::IoTUI16Seq& val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI16Seq);
                _union.m_ui16Seq = new DDS::IoT::IoTUI16Seq(val);
            }

#ifdef OSPL_DDS_CXX11
            void ui16Seq(DDS::IoT::IoTUI16Seq &&val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI16Seq);
                _union.m_ui16Seq = new DDS::IoT::IoTUI16Seq(val);
            }
#endif

            const DDS::IoT::IoTUI32Seq& ui32Seq() const
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI32Seq)) {
                    return *_union.m_ui32Seq;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            DDS::IoT::IoTUI32Seq& ui32Seq()
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI32Seq)) {
                    return *_union.m_ui32Seq;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            void ui32Seq(const DDS::IoT::IoTUI32Seq& val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI32Seq);
                _union.m_ui32Seq = new DDS::IoT::IoTUI32Seq(val);
            }

#ifdef OSPL_DDS_CXX11
            void ui32Seq(DDS::IoT::IoTUI32Seq &&val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI32Seq);
                _union.m_ui32Seq = new DDS::IoT::IoTUI32Seq(val);
            }
#endif

            const DDS::IoT::IoTUI64Seq& ui64Seq() const
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI64Seq)) {
                    return *_union.m_ui64Seq;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            DDS::IoT::IoTUI64Seq& ui64Seq()
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI64Seq)) {
                    return *_union.m_ui64Seq;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            void ui64Seq(const DDS::IoT::IoTUI64Seq& val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI64Seq);
                _union.m_ui64Seq = new DDS::IoT::IoTUI64Seq(val);
            }

#ifdef OSPL_DDS_CXX11
            void ui64Seq(DDS::IoT::IoTUI64Seq &&val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTUI64Seq);
                _union.m_ui64Seq = new DDS::IoT::IoTUI64Seq(val);
            }
#endif

            const DDS::IoT::IoTI8Seq& i8Seq() const
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI8Seq)) {
                    return *_union.m_i8Seq;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            DDS::IoT::IoTI8Seq& i8Seq()
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI8Seq)) {
                    return *_union.m_i8Seq;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            void i8Seq(const DDS::IoT::IoTI8Seq& val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI8Seq);
                _union.m_i8Seq = new DDS::IoT::IoTI8Seq(val);
            }

#ifdef OSPL_DDS_CXX11
            void i8Seq(DDS::IoT::IoTI8Seq &&val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI8Seq);
                _union.m_i8Seq = new DDS::IoT::IoTI8Seq(val);
            }
#endif

            const DDS::IoT::IoTI16Seq& i16Seq() const
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI16Seq)) {
                    return *_union.m_i16Seq;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            DDS::IoT::IoTI16Seq& i16Seq()
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI16Seq)) {
                    return *_union.m_i16Seq;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            void i16Seq(const DDS::IoT::IoTI16Seq& val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI16Seq);
                _union.m_i16Seq = new DDS::IoT::IoTI16Seq(val);
            }

#ifdef OSPL_DDS_CXX11
            void i16Seq(DDS::IoT::IoTI16Seq &&val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI16Seq);
                _union.m_i16Seq = new DDS::IoT::IoTI16Seq(val);
            }
#endif

            const DDS::IoT::IoTI32Seq& i32Seq() const
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI32Seq)) {
                    return *_union.m_i32Seq;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            DDS::IoT::IoTI32Seq& i32Seq()
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI32Seq)) {
                    return *_union.m_i32Seq;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            void i32Seq(const DDS::IoT::IoTI32Seq& val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI32Seq);
                _union.m_i32Seq = new DDS::IoT::IoTI32Seq(val);
            }

#ifdef OSPL_DDS_CXX11
            void i32Seq(DDS::IoT::IoTI32Seq &&val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI32Seq);
                _union.m_i32Seq = new DDS::IoT::IoTI32Seq(val);
            }
#endif

            const DDS::IoT::IoTI64Seq& i64Seq() const
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI64Seq)) {
                    return *_union.m_i64Seq;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            DDS::IoT::IoTI64Seq& i64Seq()
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI64Seq)) {
                    return *_union.m_i64Seq;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            void i64Seq(const DDS::IoT::IoTI64Seq& val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI64Seq);
                _union.m_i64Seq = new DDS::IoT::IoTI64Seq(val);
            }

#ifdef OSPL_DDS_CXX11
            void i64Seq(DDS::IoT::IoTI64Seq &&val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTI64Seq);
                _union.m_i64Seq = new DDS::IoT::IoTI64Seq(val);
            }
#endif

            const DDS::IoT::IoTF32Seq& f32Seq() const
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF32Seq)) {
                    return *_union.m_f32Seq;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            DDS::IoT::IoTF32Seq& f32Seq()
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF32Seq)) {
                    return *_union.m_f32Seq;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            void f32Seq(const DDS::IoT::IoTF32Seq& val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF32Seq);
                _union.m_f32Seq = new DDS::IoT::IoTF32Seq(val);
            }

#ifdef OSPL_DDS_CXX11
            void f32Seq(DDS::IoT::IoTF32Seq &&val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF32Seq);
                _union.m_f32Seq = new DDS::IoT::IoTF32Seq(val);
            }
#endif

            const DDS::IoT::IoTF64Seq& f64Seq() const
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF64Seq)) {
                    return *_union.m_f64Seq;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            DDS::IoT::IoTF64Seq& f64Seq()
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF64Seq)) {
                    return *_union.m_f64Seq;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            void f64Seq(const DDS::IoT::IoTF64Seq& val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF64Seq);
                _union.m_f64Seq = new DDS::IoT::IoTF64Seq(val);
            }

#ifdef OSPL_DDS_CXX11
            void f64Seq(DDS::IoT::IoTF64Seq &&val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTF64Seq);
                _union.m_f64Seq = new DDS::IoT::IoTF64Seq(val);
            }
#endif

            const DDS::IoT::IoTBSeq& bSeq() const
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTBSeq)) {
                    return *_union.m_bSeq;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            DDS::IoT::IoTBSeq& bSeq()
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTBSeq)) {
                    return *_union.m_bSeq;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            void bSeq(const DDS::IoT::IoTBSeq& val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTBSeq);
                _union.m_bSeq = new DDS::IoT::IoTBSeq(val);
            }

#ifdef OSPL_DDS_CXX11
            void bSeq(DDS::IoT::IoTBSeq &&val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTBSeq);
                _union.m_bSeq = new DDS::IoT::IoTBSeq(val);
            }
#endif

            const DDS::IoT::IoTStrSeq& strSeq() const
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTStrSeq)) {
                    return *_union.m_strSeq;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            DDS::IoT::IoTStrSeq& strSeq()
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTStrSeq)) {
                    return *_union.m_strSeq;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            void strSeq(const DDS::IoT::IoTStrSeq& val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTStrSeq);
                _union.m_strSeq = new DDS::IoT::IoTStrSeq(val);
            }

#ifdef OSPL_DDS_CXX11
            void strSeq(DDS::IoT::IoTStrSeq &&val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTStrSeq);
                _union.m_strSeq = new DDS::IoT::IoTStrSeq(val);
            }
#endif

            const DDS::IoT::IoTChSeq& chSeq() const
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTChSeq)) {
                    return *_union.m_chSeq;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            DDS::IoT::IoTChSeq& chSeq()
            {
                if (m__d == OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTChSeq)) {
                    return *_union.m_chSeq;
                } else {
                    throw dds::core::PreconditionNotMetError("Requested branch does not match current discriminator");
                }
            }

            void chSeq(const DDS::IoT::IoTChSeq& val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTChSeq);
                _union.m_chSeq = new DDS::IoT::IoTChSeq(val);
            }

#ifdef OSPL_DDS_CXX11
            void chSeq(DDS::IoT::IoTChSeq &&val)
            {
                _deleteBranch();
                m__d = OSPL_ENUM_LABEL(DDS::IoT,IoTType,TYPE_IoTChSeq);
                _union.m_chSeq = new DDS::IoT::IoTChSeq(val);
            }
#endif

        };

        class IoTNVP OSPL_DDS_FINAL
        {
        public:
            std::string name_;
            DDS::IoT::IoTValue value_;

        public:
            IoTNVP() {}

            explicit IoTNVP(
                const std::string& name,
                const DDS::IoT::IoTValue& value) : 
                    name_(name),
                    value_(value) {}

            IoTNVP(const IoTNVP &_other) : 
                    name_(_other.name_),
                    value_(_other.value_) {}

#ifdef OSPL_DDS_CXX11
            IoTNVP(IoTNVP &&_other) : 
                    name_(::std::move(_other.name_)),
                    value_(::std::move(_other.value_)) {}

            IoTNVP& operator=(IoTNVP &&_other)
            {
                if (this != &_other) {
                    name_ = ::std::move(_other.name_);
                    value_ = ::std::move(_other.value_);
                }
                return *this;
            }
#endif

            IoTNVP& operator=(const IoTNVP &_other)
            {
                if (this != &_other) {
                    name_ = _other.name_;
                    value_ = _other.value_;
                }
                return *this;
            }

            bool operator==(const IoTNVP& _other) const
            {
                return name_ == _other.name_ &&
                    value_ == _other.value_;
            }

            bool operator!=(const IoTNVP& _other) const
            {
                return !(*this == _other);
            }

            const std::string& name() const { return this->name_; }
            std::string& name() { return this->name_; }
            void name(const std::string& _val_) { this->name_ = _val_; }
#ifdef OSPL_DDS_CXX11
            void name(std::string&& _val_) { this->name_ = _val_; }
#endif
            const DDS::IoT::IoTValue& value() const { return this->value_; }
            DDS::IoT::IoTValue& value() { return this->value_; }
            void value(const DDS::IoT::IoTValue& _val_) { this->value_ = _val_; }
#ifdef OSPL_DDS_CXX11
            void value(DDS::IoT::IoTValue&& _val_) { this->value_ = _val_; }
#endif
        };

        typedef std::vector<DDS::IoT::IoTNVP>  IoTNVPSeq;

        class IoTData OSPL_DDS_FINAL
        {
        public:
            std::string typeName_;
            std::string instanceId_;
            DDS::IoT::IoTNVPSeq values_;

        public:
            IoTData() {}

            explicit IoTData(
                const std::string& typeName,
                const std::string& instanceId,
                const DDS::IoT::IoTNVPSeq& values) : 
                    typeName_(typeName),
                    instanceId_(instanceId),
                    values_(values) {}

            IoTData(const IoTData &_other) : 
                    typeName_(_other.typeName_),
                    instanceId_(_other.instanceId_),
                    values_(_other.values_) {}

#ifdef OSPL_DDS_CXX11
            IoTData(IoTData &&_other) : 
                    typeName_(::std::move(_other.typeName_)),
                    instanceId_(::std::move(_other.instanceId_)),
                    values_(::std::move(_other.values_)) {}

            IoTData& operator=(IoTData &&_other)
            {
                if (this != &_other) {
                    typeName_ = ::std::move(_other.typeName_);
                    instanceId_ = ::std::move(_other.instanceId_);
                    values_ = ::std::move(_other.values_);
                }
                return *this;
            }
#endif

            IoTData& operator=(const IoTData &_other)
            {
                if (this != &_other) {
                    typeName_ = _other.typeName_;
                    instanceId_ = _other.instanceId_;
                    values_ = _other.values_;
                }
                return *this;
            }

            bool operator==(const IoTData& _other) const
            {
                return typeName_ == _other.typeName_ &&
                    instanceId_ == _other.instanceId_ &&
                    values_ == _other.values_;
            }

            bool operator!=(const IoTData& _other) const
            {
                return !(*this == _other);
            }

            const std::string& typeName() const { return this->typeName_; }
            std::string& typeName() { return this->typeName_; }
            void typeName(const std::string& _val_) { this->typeName_ = _val_; }
#ifdef OSPL_DDS_CXX11
            void typeName(std::string&& _val_) { this->typeName_ = _val_; }
#endif
            const std::string& instanceId() const { return this->instanceId_; }
            std::string& instanceId() { return this->instanceId_; }
            void instanceId(const std::string& _val_) { this->instanceId_ = _val_; }
#ifdef OSPL_DDS_CXX11
            void instanceId(std::string&& _val_) { this->instanceId_ = _val_; }
#endif
            const DDS::IoT::IoTNVPSeq& values() const { return this->values_; }
            DDS::IoT::IoTNVPSeq& values() { return this->values_; }
            void values(const DDS::IoT::IoTNVPSeq& _val_) { this->values_ = _val_; }
#ifdef OSPL_DDS_CXX11
            void values(DDS::IoT::IoTNVPSeq&& _val_) { this->values_ = _val_; }
#endif
        };

    }

}

#endif /* _dds_IoTData_H_ */
