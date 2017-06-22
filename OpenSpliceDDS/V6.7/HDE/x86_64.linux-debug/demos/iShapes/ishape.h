#ifndef _ISHAPE_H_
#define _ISHAPE_H_

#include <dds/core/ddscore.hpp>

class ShapeType OSPL_DDS_FINAL
{
public:
    std::string color_;
    int32_t x_;
    int32_t y_;
    int32_t shapesize_;

public:
    ShapeType() :
            x_(0),
            y_(0),
            shapesize_(0) {}

    explicit ShapeType(
        const std::string& color,
        int32_t x,
        int32_t y,
        int32_t shapesize) : 
            color_(color),
            x_(x),
            y_(y),
            shapesize_(shapesize) {}

    ShapeType(const ShapeType &_other) : 
            color_(_other.color_),
            x_(_other.x_),
            y_(_other.y_),
            shapesize_(_other.shapesize_) {}

#ifdef OSPL_DDS_CXX11
    ShapeType(ShapeType &&_other) : 
            color_(::std::move(_other.color_)),
            x_(::std::move(_other.x_)),
            y_(::std::move(_other.y_)),
            shapesize_(::std::move(_other.shapesize_)) {}

    ShapeType& operator=(ShapeType &&_other)
    {
        if (this != &_other) {
            color_ = ::std::move(_other.color_);
            x_ = ::std::move(_other.x_);
            y_ = ::std::move(_other.y_);
            shapesize_ = ::std::move(_other.shapesize_);
        }
        return *this;
    }
#endif

    ShapeType& operator=(const ShapeType &_other)
    {
        if (this != &_other) {
            color_ = _other.color_;
            x_ = _other.x_;
            y_ = _other.y_;
            shapesize_ = _other.shapesize_;
        }
        return *this;
    }

    bool operator==(const ShapeType& _other) const
    {
        return color_ == _other.color_ &&
            x_ == _other.x_ &&
            y_ == _other.y_ &&
            shapesize_ == _other.shapesize_;
    }

    bool operator!=(const ShapeType& _other) const
    {
        return !(*this == _other);
    }

    const std::string& color() const { return this->color_; }
    std::string& color() { return this->color_; }
    void color(const std::string& _val_) { this->color_ = _val_; }
#ifdef OSPL_DDS_CXX11
    void color(std::string&& _val_) { this->color_ = _val_; }
#endif
    int32_t x() const { return this->x_; }
    int32_t& x() { return this->x_; }
    void x(int32_t _val_) { this->x_ = _val_; }
    int32_t y() const { return this->y_; }
    int32_t& y() { return this->y_; }
    void y(int32_t _val_) { this->y_ = _val_; }
    int32_t shapesize() const { return this->shapesize_; }
    int32_t& shapesize() { return this->shapesize_; }
    void shapesize(int32_t _val_) { this->shapesize_ = _val_; }
};

#endif /* _ISHAPE_H_ */
