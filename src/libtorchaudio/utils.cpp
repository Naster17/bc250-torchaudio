#include <libtorchaudio/utils.h>

#if defined(USE_CUDA) && !defined(USE_ROCM)
#include <cuda.h>
#endif

namespace torchaudio {

bool is_align_available() {
#ifdef INCLUDE_ALIGN
  return true;
#else
  return false;
#endif
}

std::optional<int64_t> cuda_version() {
#if defined(USE_CUDA) && !defined(USE_ROCM)
  return CUDA_VERSION;
#else
  return {};
#endif
}

} // namespace torchaudio
