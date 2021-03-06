// Copyright [2019] BlindGarret<lroe2930@gmail.com>
#ifndef BGMEMORY_INCLUDE_BGMEMORY_DEFAULTDELETER_HXX_
#define BGMEMORY_INCLUDE_BGMEMORY_DEFAULTDELETER_HXX_

#include "bgmemory/pointers/Deleter.hxx"

namespace bg
{
  /*
    Default Deletion function object used to delete the
    raw pointer contained inside a mutable unique pointer.
*/
  template <class T>
  class DefaultDeleter : public Deleter<T>
  {
  public:
    constexpr DefaultDeleter() noexcept {}
    /*
      Object function operator for deleting the raw pointer
      contained inside a mutable unique pointer object. Simply
      a standard delete call to the pointer.

      @param pointer The pointer to delete.
  */
    void operator()(T *pointer)
    {
      if (pointer != nullptr)
      {
        delete pointer;
      }
    }
  };

} // namespace bg

#endif // BGMEMORY_INCLUDE_BGMEMORY_DEFAULTDELETER_HXX_
