/* Automatically generated by configure - do not modify! */
#ifndef FFMPEG_CONFIG_H
#define FFMPEG_CONFIG_H
/* #define FFMPEG_CONFIGURATION "--disable-everything --disable-all --disable-doc --disable-htmlpages --disable-manpages --disable-podpages --disable-txtpages --disable-static --enable-avcodec --enable-avformat --enable-avutil --enable-fft --enable-rdft --enable-static --enable-libopus --disable-debug --disable-bzlib --disable-iconv --disable-network --disable-schannel --disable-sdl2 --disable-symver --disable-xlib --disable-zlib --disable-securetransport --disable-faan --disable-alsa --disable-autodetect --enable-decoder='vorbis,libopus,flac' --enable-decoder='pcm_u8,pcm_s16le,pcm_s24le,pcm_s32le,pcm_f32le,mp3' --enable-decoder='pcm_s16be,pcm_s24be,pcm_mulaw,pcm_alaw' --enable-demuxer='ogg,matroska,wav,flac,mp3,mov' --enable-parser='opus,vorbis,flac,mpegaudio,vp9' --extra-cflags=-I/usr/local/google/home/liberato/src/release_chrome/src/third_party/opus/src/include --disable-linux-perf --x86asmexe=nasm --optflags='\"-O2\"' --enable-decoder='theora,vp8' --enable-parser='vp3,vp8' --enable-cross-compile --cross-prefix=/usr/bin/aarch64-linux-gnu- --extra-cflags='--target=aarch64-linux-gnu' --extra-ldflags='--target=aarch64-linux-gnu' --target-os=linux --sysroot=/usr/local/google/home/liberato/src/release_chrome/src/build/linux/debian_bullseye_arm64-sysroot --arch=aarch64 --enable-armv8 --extra-cflags='-march=armv8-a' --enable-pic --cc=clang --cxx=clang++ --ld=clang --extra-ldflags='-fuse-ld=lld' --enable-decoder='aac,h264' --enable-demuxer=aac --enable-parser='aac,h264' --enable-decoder=mpeg4 --enable-parser='h263,mpeg4video' --enable-demuxer=avi" -- elide long configuration string from binary */
#define FFMPEG_LICENSE "LGPL version 2.1 or later"
#define CONFIG_THIS_YEAR 2023
#define FFMPEG_DATADIR "/usr/local/share/ffmpeg"
#define AVCONV_DATADIR "/usr/local/share/ffmpeg"
#define CC_IDENT "clang version 17.0.0 (https://chromium.googlesource.com/a/external/github.com/llvm/llvm-project 3da83fbafef1689de1fc45c2c3fa3d258edda09d)"
#define OS_NAME linux
#define av_restrict restrict
#define EXTERN_PREFIX ""
#define EXTERN_ASM 
#define BUILDSUF ""
#define SLIBSUF ".so"
#define HAVE_MMX2 HAVE_MMXEXT
#define SWS_MAX_FILTER_SIZE 256
#define ARCH_AARCH64 1
#define ARCH_ALPHA 0
#define ARCH_ARM 0
#define ARCH_AVR32 0
#define ARCH_AVR32_AP 0
#define ARCH_AVR32_UC 0
#define ARCH_BFIN 0
#define ARCH_IA64 0
#define ARCH_LOONGARCH 0
#define ARCH_LOONGARCH32 0
#define ARCH_LOONGARCH64 0
#define ARCH_M68K 0
#define ARCH_MIPS 0
#define ARCH_MIPS64 0
#define ARCH_PARISC 0
#define ARCH_PPC 0
#define ARCH_PPC64 0
#define ARCH_RISCV 0
#define ARCH_S390 0
#define ARCH_SH4 0
#define ARCH_SPARC 0
#define ARCH_SPARC64 0
#define ARCH_TILEGX 0
#define ARCH_TILEPRO 0
#define ARCH_TOMI 0
#define ARCH_X86 0
#define ARCH_X86_32 0
#define ARCH_X86_64 0
#define HAVE_ARMV5TE 0
#define HAVE_ARMV6 0
#define HAVE_ARMV6T2 0
#define HAVE_ARMV8 1
#define HAVE_NEON 1
#define HAVE_VFP 1
#define HAVE_VFPV3 0
#define HAVE_SETEND 0
#define HAVE_ALTIVEC 0
#define HAVE_DCBZL 0
#define HAVE_LDBRX 0
#define HAVE_POWER8 0
#define HAVE_PPC4XX 0
#define HAVE_VSX 0
#define HAVE_RVV 0
#define HAVE_AESNI 0
#define HAVE_AMD3DNOW 0
#define HAVE_AMD3DNOWEXT 0
#define HAVE_AVX 0
#define HAVE_AVX2 0
#define HAVE_AVX512 0
#define HAVE_AVX512ICL 0
#define HAVE_FMA3 0
#define HAVE_FMA4 0
#define HAVE_MMX 0
#define HAVE_MMXEXT 0
#define HAVE_SSE 0
#define HAVE_SSE2 0
#define HAVE_SSE3 0
#define HAVE_SSE4 0
#define HAVE_SSE42 0
#define HAVE_SSSE3 0
#define HAVE_XOP 0
#define HAVE_CPUNOP 0
#define HAVE_I686 0
#define HAVE_MIPSFPU 0
#define HAVE_MIPS32R2 0
#define HAVE_MIPS32R5 0
#define HAVE_MIPS64R2 0
#define HAVE_MIPS32R6 0
#define HAVE_MIPS64R6 0
#define HAVE_MIPSDSP 0
#define HAVE_MIPSDSPR2 0
#define HAVE_MSA 0
#define HAVE_LOONGSON2 0
#define HAVE_LOONGSON3 0
#define HAVE_MMI 0
#define HAVE_LSX 0
#define HAVE_LASX 0
#define HAVE_ARMV5TE_EXTERNAL 0
#define HAVE_ARMV6_EXTERNAL 0
#define HAVE_ARMV6T2_EXTERNAL 0
#define HAVE_ARMV8_EXTERNAL 1
#define HAVE_NEON_EXTERNAL 1
#define HAVE_VFP_EXTERNAL 1
#define HAVE_VFPV3_EXTERNAL 0
#define HAVE_SETEND_EXTERNAL 0
#define HAVE_ALTIVEC_EXTERNAL 0
#define HAVE_DCBZL_EXTERNAL 0
#define HAVE_LDBRX_EXTERNAL 0
#define HAVE_POWER8_EXTERNAL 0
#define HAVE_PPC4XX_EXTERNAL 0
#define HAVE_VSX_EXTERNAL 0
#define HAVE_RVV_EXTERNAL 0
#define HAVE_AESNI_EXTERNAL 0
#define HAVE_AMD3DNOW_EXTERNAL 0
#define HAVE_AMD3DNOWEXT_EXTERNAL 0
#define HAVE_AVX_EXTERNAL 0
#define HAVE_AVX2_EXTERNAL 0
#define HAVE_AVX512_EXTERNAL 0
#define HAVE_AVX512ICL_EXTERNAL 0
#define HAVE_FMA3_EXTERNAL 0
#define HAVE_FMA4_EXTERNAL 0
#define HAVE_MMX_EXTERNAL 0
#define HAVE_MMXEXT_EXTERNAL 0
#define HAVE_SSE_EXTERNAL 0
#define HAVE_SSE2_EXTERNAL 0
#define HAVE_SSE3_EXTERNAL 0
#define HAVE_SSE4_EXTERNAL 0
#define HAVE_SSE42_EXTERNAL 0
#define HAVE_SSSE3_EXTERNAL 0
#define HAVE_XOP_EXTERNAL 0
#define HAVE_CPUNOP_EXTERNAL 0
#define HAVE_I686_EXTERNAL 0
#define HAVE_MIPSFPU_EXTERNAL 0
#define HAVE_MIPS32R2_EXTERNAL 0
#define HAVE_MIPS32R5_EXTERNAL 0
#define HAVE_MIPS64R2_EXTERNAL 0
#define HAVE_MIPS32R6_EXTERNAL 0
#define HAVE_MIPS64R6_EXTERNAL 0
#define HAVE_MIPSDSP_EXTERNAL 0
#define HAVE_MIPSDSPR2_EXTERNAL 0
#define HAVE_MSA_EXTERNAL 0
#define HAVE_LOONGSON2_EXTERNAL 0
#define HAVE_LOONGSON3_EXTERNAL 0
#define HAVE_MMI_EXTERNAL 0
#define HAVE_LSX_EXTERNAL 0
#define HAVE_LASX_EXTERNAL 0
#define HAVE_ARMV5TE_INLINE 0
#define HAVE_ARMV6_INLINE 0
#define HAVE_ARMV6T2_INLINE 0
#define HAVE_ARMV8_INLINE 1
#define HAVE_NEON_INLINE 1
#define HAVE_VFP_INLINE 1
#define HAVE_VFPV3_INLINE 0
#define HAVE_SETEND_INLINE 0
#define HAVE_ALTIVEC_INLINE 0
#define HAVE_DCBZL_INLINE 0
#define HAVE_LDBRX_INLINE 0
#define HAVE_POWER8_INLINE 0
#define HAVE_PPC4XX_INLINE 0
#define HAVE_VSX_INLINE 0
#define HAVE_RVV_INLINE 0
#define HAVE_AESNI_INLINE 0
#define HAVE_AMD3DNOW_INLINE 0
#define HAVE_AMD3DNOWEXT_INLINE 0
#define HAVE_AVX_INLINE 0
#define HAVE_AVX2_INLINE 0
#define HAVE_AVX512_INLINE 0
#define HAVE_AVX512ICL_INLINE 0
#define HAVE_FMA3_INLINE 0
#define HAVE_FMA4_INLINE 0
#define HAVE_MMX_INLINE 0
#define HAVE_MMXEXT_INLINE 0
#define HAVE_SSE_INLINE 0
#define HAVE_SSE2_INLINE 0
#define HAVE_SSE3_INLINE 0
#define HAVE_SSE4_INLINE 0
#define HAVE_SSE42_INLINE 0
#define HAVE_SSSE3_INLINE 0
#define HAVE_XOP_INLINE 0
#define HAVE_CPUNOP_INLINE 0
#define HAVE_I686_INLINE 0
#define HAVE_MIPSFPU_INLINE 0
#define HAVE_MIPS32R2_INLINE 0
#define HAVE_MIPS32R5_INLINE 0
#define HAVE_MIPS64R2_INLINE 0
#define HAVE_MIPS32R6_INLINE 0
#define HAVE_MIPS64R6_INLINE 0
#define HAVE_MIPSDSP_INLINE 0
#define HAVE_MIPSDSPR2_INLINE 0
#define HAVE_MSA_INLINE 0
#define HAVE_LOONGSON2_INLINE 0
#define HAVE_LOONGSON3_INLINE 0
#define HAVE_MMI_INLINE 0
#define HAVE_LSX_INLINE 0
#define HAVE_LASX_INLINE 0
#define HAVE_ALIGNED_STACK 1
#define HAVE_FAST_64BIT 1
#define HAVE_FAST_CLZ 1
#define HAVE_FAST_CMOV 0
#define HAVE_FAST_FLOAT16 1
#define HAVE_LOCAL_ALIGNED 0
#define HAVE_SIMD_ALIGN_16 1
#define HAVE_SIMD_ALIGN_32 0
#define HAVE_SIMD_ALIGN_64 0
#define HAVE_ATOMIC_CAS_PTR 0
#define HAVE_MACHINE_RW_BARRIER 0
#define HAVE_MEMORYBARRIER 0
#define HAVE_MM_EMPTY 0
#define HAVE_RDTSC 0
#define HAVE_SEM_TIMEDWAIT 1
#define HAVE_SYNC_VAL_COMPARE_AND_SWAP 1
#define HAVE_INLINE_ASM 1
#define HAVE_SYMVER 0
#define HAVE_X86ASM 0
#define HAVE_BIGENDIAN 0
#define HAVE_FAST_UNALIGNED 1
#define HAVE_ARPA_INET_H 0
#define HAVE_ASM_TYPES_H 1
#define HAVE_CDIO_PARANOIA_H 0
#define HAVE_CDIO_PARANOIA_PARANOIA_H 0
#define HAVE_CUDA_H 0
#define HAVE_DISPATCH_DISPATCH_H 0
#define HAVE_DEV_BKTR_IOCTL_BT848_H 0
#define HAVE_DEV_BKTR_IOCTL_METEOR_H 0
#define HAVE_DEV_IC_BT8XX_H 0
#define HAVE_DEV_VIDEO_BKTR_IOCTL_BT848_H 0
#define HAVE_DEV_VIDEO_METEOR_IOCTL_METEOR_H 0
#define HAVE_DIRECT_H 0
#define HAVE_DIRENT_H 1
#define HAVE_DXGIDEBUG_H 0
#define HAVE_DXVA_H 0
#define HAVE_ES2_GL_H 0
#define HAVE_GSM_H 0
#define HAVE_IO_H 0
#define HAVE_LINUX_DMA_BUF_H 0
#define HAVE_LINUX_PERF_EVENT_H 1
#define HAVE_MACHINE_IOCTL_BT848_H 0
#define HAVE_MACHINE_IOCTL_METEOR_H 0
#define HAVE_MALLOC_H 1
#define HAVE_OPENCV2_CORE_CORE_C_H 0
#define HAVE_OPENGL_GL3_H 0
#define HAVE_POLL_H 1
#define HAVE_SYS_PARAM_H 1
#define HAVE_SYS_RESOURCE_H 1
#define HAVE_SYS_SELECT_H 1
#define HAVE_SYS_SOUNDCARD_H 1
#define HAVE_SYS_TIME_H 1
#define HAVE_SYS_UN_H 1
#define HAVE_SYS_VIDEOIO_H 0
#define HAVE_TERMIOS_H 1
#define HAVE_UDPLITE_H 0
#define HAVE_UNISTD_H 1
#define HAVE_VALGRIND_VALGRIND_H 0 /* #define HAVE_VALGRIND_VALGRIND_H 1 -- forced to 0. See https://crbug.com/590440 */
#define HAVE_WINDOWS_H 0
#define HAVE_WINSOCK2_H 0
#define HAVE_INTRINSICS_NEON 1
#define HAVE_ATANF 1
#define HAVE_ATAN2F 1
#define HAVE_CBRT 1
#define HAVE_CBRTF 1
#define HAVE_COPYSIGN 1
#define HAVE_COSF 1
#define HAVE_ERF 1
#define HAVE_EXP2 1
#define HAVE_EXP2F 1
#define HAVE_EXPF 1
#define HAVE_HYPOT 1
#define HAVE_ISFINITE 1
#define HAVE_ISINF 1
#define HAVE_ISNAN 1
#define HAVE_LDEXPF 1
#define HAVE_LLRINT 1
#define HAVE_LLRINTF 1
#define HAVE_LOG2 1
#define HAVE_LOG2F 1
#define HAVE_LOG10F 1
#define HAVE_LRINT 1
#define HAVE_LRINTF 1
#define HAVE_POWF 1
#define HAVE_RINT 1
#define HAVE_ROUND 1
#define HAVE_ROUNDF 1
#define HAVE_SINF 1
#define HAVE_TRUNC 1
#define HAVE_TRUNCF 1
#define HAVE_DOS_PATHS 0
#define HAVE_LIBC_MSVCRT 0
#define HAVE_MMAL_PARAMETER_VIDEO_MAX_NUM_CALLBACKS 0
#define HAVE_SECTION_DATA_REL_RO 1
#define HAVE_THREADS 1
#define HAVE_UWP 0
#define HAVE_WINRT 0
#define HAVE_ACCESS 1
#define HAVE_ALIGNED_MALLOC 0
#define HAVE_ARC4RANDOM 0
#define HAVE_CLOCK_GETTIME 1
#define HAVE_CLOSESOCKET 0
#define HAVE_COMMANDLINETOARGVW 0
#define HAVE_FCNTL 1
#define HAVE_GETADDRINFO 0
#define HAVE_GETAUXVAL 1
#define HAVE_GETENV 1
#define HAVE_GETHRTIME 0
#define HAVE_GETOPT 1
#define HAVE_GETMODULEHANDLE 0
#define HAVE_GETPROCESSAFFINITYMASK 0
#define HAVE_GETPROCESSMEMORYINFO 0
#define HAVE_GETPROCESSTIMES 0
#define HAVE_GETRUSAGE 1
#define HAVE_GETSTDHANDLE 0
#define HAVE_GETSYSTEMTIMEASFILETIME 0
#define HAVE_GETTIMEOFDAY 1
#define HAVE_GLOB 1
#define HAVE_GLXGETPROCADDRESS 0
#define HAVE_GMTIME_R 1
#define HAVE_INET_ATON 0
#define HAVE_ISATTY 1
#define HAVE_KBHIT 0
#define HAVE_LOCALTIME_R 1
#define HAVE_LSTAT 1
#define HAVE_LZO1X_999_COMPRESS 0
#define HAVE_MACH_ABSOLUTE_TIME 0
#define HAVE_MAPVIEWOFFILE 0
#define HAVE_MEMALIGN 1
#define HAVE_MKSTEMP 1
#define HAVE_MMAP 1
#define HAVE_MPROTECT 1
#define HAVE_NANOSLEEP 1
#define HAVE_PEEKNAMEDPIPE 0
#define HAVE_POSIX_MEMALIGN 1
#define HAVE_PRCTL 0 /* #define HAVE_PRCTL 1 -- forced to 0 for Fuchsia */
#define HAVE_PTHREAD_CANCEL 1
#define HAVE_SCHED_GETAFFINITY 1
#define HAVE_SECITEMIMPORT 0
#define HAVE_SETCONSOLETEXTATTRIBUTE 0
#define HAVE_SETCONSOLECTRLHANDLER 0
#define HAVE_SETDLLDIRECTORY 0
#define HAVE_SETMODE 0
#define HAVE_SETRLIMIT 1
#define HAVE_SLEEP 0
#define HAVE_STRERROR_R 1
#define HAVE_SYSCONF 1
#define HAVE_SYSCTL 0 /* #define HAVE_SYSCTL 1 -- forced to 0 for Fuchsia */
#define HAVE_USLEEP 1
#define HAVE_UTGETOSTYPEFROMSTRING 0
#define HAVE_VIRTUALALLOC 0
#define HAVE_WGLGETPROCADDRESS 0
#define HAVE_BCRYPT 0
#define HAVE_VAAPI_DRM 0
#define HAVE_VAAPI_X11 0
#define HAVE_VAAPI_WIN32 0
#define HAVE_VDPAU_X11 0
#define HAVE_PTHREADS 1
#define HAVE_OS2THREADS 0
#define HAVE_W32THREADS 0
#define HAVE_AS_ARCH_DIRECTIVE 0
#define HAVE_AS_DN_DIRECTIVE 0
#define HAVE_AS_FPU_DIRECTIVE 0
#define HAVE_AS_FUNC 0
#define HAVE_AS_OBJECT_ARCH 0
#define HAVE_ASM_MOD_Q 0
#define HAVE_BLOCKS_EXTENSION 0
#define HAVE_EBP_AVAILABLE 0
#define HAVE_EBX_AVAILABLE 0
#define HAVE_GNU_AS 0
#define HAVE_GNU_WINDRES 0
#define HAVE_IBM_ASM 0
#define HAVE_INLINE_ASM_DIRECT_SYMBOL_REFS 0
#define HAVE_INLINE_ASM_LABELS 1
#define HAVE_INLINE_ASM_NONLOCAL_LABELS 1
#define HAVE_PRAGMA_DEPRECATED 1
#define HAVE_RSYNC_CONTIMEOUT 1
#define HAVE_SYMVER_ASM_LABEL 1
#define HAVE_SYMVER_GNU_ASM 1
/* #define HAVE_VFP_ARGS 0 -- softfp/hardfp selection is done by the chrome build */
#define HAVE_XFORM_ASM 0
#define HAVE_XMM_CLOBBERS 0
#define HAVE_DPI_AWARENESS_CONTEXT 0
#define HAVE_IDXGIOUTPUT5 0
#define HAVE_KCMVIDEOCODECTYPE_HEVC 0
#define HAVE_KCMVIDEOCODECTYPE_HEVCWITHALPHA 0
#define HAVE_KCMVIDEOCODECTYPE_VP9 0
#define HAVE_KCVPIXELFORMATTYPE_420YPCBCR10BIPLANARVIDEORANGE 0
#define HAVE_KCVPIXELFORMATTYPE_422YPCBCR8BIPLANARVIDEORANGE 0
#define HAVE_KCVPIXELFORMATTYPE_422YPCBCR10BIPLANARVIDEORANGE 0
#define HAVE_KCVPIXELFORMATTYPE_422YPCBCR16BIPLANARVIDEORANGE 0
#define HAVE_KCVPIXELFORMATTYPE_444YPCBCR8BIPLANARVIDEORANGE 0
#define HAVE_KCVPIXELFORMATTYPE_444YPCBCR10BIPLANARVIDEORANGE 0
#define HAVE_KCVPIXELFORMATTYPE_444YPCBCR16BIPLANARVIDEORANGE 0
#define HAVE_KCVIMAGEBUFFERTRANSFERFUNCTION_SMPTE_ST_2084_PQ 0
#define HAVE_KCVIMAGEBUFFERTRANSFERFUNCTION_ITU_R_2100_HLG 0
#define HAVE_KCVIMAGEBUFFERTRANSFERFUNCTION_LINEAR 0
#define HAVE_KCVIMAGEBUFFERYCBCRMATRIX_ITU_R_2020 0
#define HAVE_KCVIMAGEBUFFERCOLORPRIMARIES_ITU_R_2020 0
#define HAVE_KCVIMAGEBUFFERTRANSFERFUNCTION_ITU_R_2020 0
#define HAVE_KCVIMAGEBUFFERTRANSFERFUNCTION_SMPTE_ST_428_1 0
#define HAVE_SOCKLEN_T 0
#define HAVE_STRUCT_ADDRINFO 0
#define HAVE_STRUCT_GROUP_SOURCE_REQ 0
#define HAVE_STRUCT_IP_MREQ_SOURCE 0
#define HAVE_STRUCT_IPV6_MREQ 0
#define HAVE_STRUCT_MSGHDR_MSG_FLAGS 0
#define HAVE_STRUCT_POLLFD 0
#define HAVE_STRUCT_RUSAGE_RU_MAXRSS 1
#define HAVE_STRUCT_SCTP_EVENT_SUBSCRIBE 0
#define HAVE_STRUCT_SOCKADDR_IN6 0
#define HAVE_STRUCT_SOCKADDR_SA_LEN 0
#define HAVE_STRUCT_SOCKADDR_STORAGE 0
#define HAVE_STRUCT_STAT_ST_MTIM_TV_NSEC 1
#define HAVE_STRUCT_V4L2_FRMIVALENUM_DISCRETE 0
#define HAVE_GZIP 1
#define HAVE_LIBDRM_GETFB2 0
#define HAVE_MAKEINFO 0
#define HAVE_MAKEINFO_HTML 0
#define HAVE_OPENCL_D3D11 0
#define HAVE_OPENCL_DRM_ARM 0
#define HAVE_OPENCL_DRM_BEIGNET 0
#define HAVE_OPENCL_DXVA2 0
#define HAVE_OPENCL_VAAPI_BEIGNET 0
#define HAVE_OPENCL_VAAPI_INTEL_MEDIA 0
#define HAVE_PERL 1
#define HAVE_POD2MAN 1
#define HAVE_TEXI2HTML 0
#define HAVE_XMLLINT 1
#define HAVE_ZLIB_GZIP 0
#define CONFIG_DOC 0
#define CONFIG_HTMLPAGES 0
#define CONFIG_MANPAGES 0
#define CONFIG_PODPAGES 0
#define CONFIG_TXTPAGES 0
#define CONFIG_AVIO_HTTP_SERVE_FILES_EXAMPLE 1
#define CONFIG_AVIO_LIST_DIR_EXAMPLE 1
#define CONFIG_AVIO_READ_CALLBACK_EXAMPLE 1
#define CONFIG_DECODE_AUDIO_EXAMPLE 1
#define CONFIG_DECODE_FILTER_AUDIO_EXAMPLE 0
#define CONFIG_DECODE_FILTER_VIDEO_EXAMPLE 0
#define CONFIG_DECODE_VIDEO_EXAMPLE 1
#define CONFIG_DEMUX_DECODE_EXAMPLE 1
#define CONFIG_ENCODE_AUDIO_EXAMPLE 1
#define CONFIG_ENCODE_VIDEO_EXAMPLE 1
#define CONFIG_EXTRACT_MVS_EXAMPLE 1
#define CONFIG_FILTER_AUDIO_EXAMPLE 0
#define CONFIG_HW_DECODE_EXAMPLE 1
#define CONFIG_MUX_EXAMPLE 0
#define CONFIG_QSV_DECODE_EXAMPLE 0
#define CONFIG_REMUX_EXAMPLE 1
#define CONFIG_RESAMPLE_AUDIO_EXAMPLE 0
#define CONFIG_SCALE_VIDEO_EXAMPLE 0
#define CONFIG_SHOW_METADATA_EXAMPLE 1
#define CONFIG_TRANSCODE_AAC_EXAMPLE 0
#define CONFIG_TRANSCODE_EXAMPLE 0
#define CONFIG_VAAPI_ENCODE_EXAMPLE 0
#define CONFIG_VAAPI_TRANSCODE_EXAMPLE 0
#define CONFIG_QSV_TRANSCODE_EXAMPLE 0
#define CONFIG_AVISYNTH 0
#define CONFIG_FREI0R 0
#define CONFIG_LIBCDIO 0
#define CONFIG_LIBDAVS2 0
#define CONFIG_LIBRUBBERBAND 0
#define CONFIG_LIBVIDSTAB 0
#define CONFIG_LIBX264 0
#define CONFIG_LIBX265 0
#define CONFIG_LIBXAVS 0
#define CONFIG_LIBXAVS2 0
#define CONFIG_LIBXVID 0
#define CONFIG_DECKLINK 0
#define CONFIG_LIBFDK_AAC 0
#define CONFIG_LIBTLS 0
#define CONFIG_GMP 0
#define CONFIG_LIBARIBB24 0
#define CONFIG_LIBLENSFUN 0
#define CONFIG_LIBOPENCORE_AMRNB 0
#define CONFIG_LIBOPENCORE_AMRWB 0
#define CONFIG_LIBVO_AMRWBENC 0
#define CONFIG_MBEDTLS 0
#define CONFIG_RKMPP 0
#define CONFIG_LIBSMBCLIENT 0
#define CONFIG_CHROMAPRINT 0
#define CONFIG_GCRYPT 0
#define CONFIG_GNUTLS 0
#define CONFIG_JNI 0
#define CONFIG_LADSPA 0
#define CONFIG_LCMS2 0
#define CONFIG_LIBAOM 0
#define CONFIG_LIBARIBCAPTION 0
#define CONFIG_LIBASS 0
#define CONFIG_LIBBLURAY 0
#define CONFIG_LIBBS2B 0
#define CONFIG_LIBCACA 0
#define CONFIG_LIBCELT 0
#define CONFIG_LIBCODEC2 0
#define CONFIG_LIBDAV1D 0
#define CONFIG_LIBDC1394 0
#define CONFIG_LIBDRM 0
#define CONFIG_LIBFLITE 0
#define CONFIG_LIBFONTCONFIG 0
#define CONFIG_LIBFREETYPE 0
#define CONFIG_LIBFRIBIDI 0
#define CONFIG_LIBGLSLANG 0
#define CONFIG_LIBGME 0
#define CONFIG_LIBGSM 0
#define CONFIG_LIBIEC61883 0
#define CONFIG_LIBILBC 0
#define CONFIG_LIBJACK 0
#define CONFIG_LIBJXL 0
#define CONFIG_LIBKLVANC 0
#define CONFIG_LIBKVAZAAR 0
#define CONFIG_LIBMODPLUG 0
#define CONFIG_LIBMP3LAME 0
#define CONFIG_LIBMYSOFA 0
#define CONFIG_LIBOPENCV 0
#define CONFIG_LIBOPENH264 0
#define CONFIG_LIBOPENJPEG 0
#define CONFIG_LIBOPENMPT 0
#define CONFIG_LIBOPENVINO 0
#define CONFIG_LIBOPUS 1
#define CONFIG_LIBPLACEBO 0
#define CONFIG_LIBPULSE 0
#define CONFIG_LIBRABBITMQ 0
#define CONFIG_LIBRAV1E 0
#define CONFIG_LIBRIST 0
#define CONFIG_LIBRSVG 0
#define CONFIG_LIBRTMP 0
#define CONFIG_LIBSHADERC 0
#define CONFIG_LIBSHINE 0
#define CONFIG_LIBSMBCLIENT 0
#define CONFIG_LIBSNAPPY 0
#define CONFIG_LIBSOXR 0
#define CONFIG_LIBSPEEX 0
#define CONFIG_LIBSRT 0
#define CONFIG_LIBSSH 0
#define CONFIG_LIBSVTAV1 0
#define CONFIG_LIBTENSORFLOW 0
#define CONFIG_LIBTESSERACT 0
#define CONFIG_LIBTHEORA 0
#define CONFIG_LIBTWOLAME 0
#define CONFIG_LIBUAVS3D 0
#define CONFIG_LIBV4L2 0
#define CONFIG_LIBVMAF 0
#define CONFIG_LIBVORBIS 0
#define CONFIG_LIBVPX 0
#define CONFIG_LIBWEBP 0
#define CONFIG_LIBXML2 0
#define CONFIG_LIBZIMG 0
#define CONFIG_LIBZMQ 0
#define CONFIG_LIBZVBI 0
#define CONFIG_LV2 0
#define CONFIG_MEDIACODEC 0
#define CONFIG_OPENAL 0
#define CONFIG_OPENGL 0
#define CONFIG_OPENSSL 0
#define CONFIG_POCKETSPHINX 0
#define CONFIG_VAPOURSYNTH 0
#define CONFIG_ALSA 0
#define CONFIG_APPKIT 0
#define CONFIG_AVFOUNDATION 0
#define CONFIG_BZLIB 0
#define CONFIG_COREIMAGE 0
#define CONFIG_ICONV 0
#define CONFIG_LIBXCB 0
#define CONFIG_LIBXCB_SHM 0
#define CONFIG_LIBXCB_SHAPE 0
#define CONFIG_LIBXCB_XFIXES 0
#define CONFIG_LZMA 0
#define CONFIG_MEDIAFOUNDATION 0
#define CONFIG_METAL 0
#define CONFIG_SCHANNEL 0
#define CONFIG_SDL2 0
#define CONFIG_SECURETRANSPORT 0
#define CONFIG_SNDIO 0
#define CONFIG_XLIB 0
#define CONFIG_ZLIB 0
#define CONFIG_CUDA_NVCC 0
#define CONFIG_CUDA_SDK 0
#define CONFIG_LIBNPP 0
#define CONFIG_LIBMFX 0
#define CONFIG_LIBVPL 0
#define CONFIG_MMAL 0
#define CONFIG_OMX 0
#define CONFIG_OPENCL 0
#define CONFIG_AMF 0
#define CONFIG_AUDIOTOOLBOX 0
#define CONFIG_CRYSTALHD 0
#define CONFIG_CUDA 0
#define CONFIG_CUDA_LLVM 0
#define CONFIG_CUVID 0
#define CONFIG_D3D11VA 0
#define CONFIG_DXVA2 0
#define CONFIG_FFNVCODEC 0
#define CONFIG_NVDEC 0
#define CONFIG_NVENC 0
#define CONFIG_VAAPI 0
#define CONFIG_VDPAU 0
#define CONFIG_VIDEOTOOLBOX 0
#define CONFIG_VULKAN 0
#define CONFIG_V4L2_M2M 0
#define CONFIG_FTRAPV 0
#define CONFIG_GRAY 0
#define CONFIG_HARDCODED_TABLES 0
#define CONFIG_OMX_RPI 0
#define CONFIG_RUNTIME_CPUDETECT 1
#define CONFIG_SAFE_BITSTREAM_READER 1
#define CONFIG_SHARED 0
#define CONFIG_SMALL 0
#define CONFIG_STATIC 1
#define CONFIG_SWSCALE_ALPHA 1
#define CONFIG_GPL 0
#define CONFIG_NONFREE 0
#define CONFIG_VERSION3 0
#define CONFIG_AVDEVICE 0
#define CONFIG_AVFILTER 0
#define CONFIG_SWSCALE 0
#define CONFIG_POSTPROC 0
#define CONFIG_AVFORMAT 1
#define CONFIG_AVCODEC 1
#define CONFIG_SWRESAMPLE 0
#define CONFIG_AVUTIL 1
#define CONFIG_FFPLAY 0
#define CONFIG_FFPROBE 0
#define CONFIG_FFMPEG 0
#define CONFIG_DCT 1
#define CONFIG_DWT 0
#define CONFIG_ERROR_RESILIENCE 1
#define CONFIG_FAAN 0
#define CONFIG_FAST_UNALIGNED 1
#define CONFIG_FFT 1
#define CONFIG_LSP 0
#define CONFIG_MDCT 0
#define CONFIG_PIXELUTILS 0
#define CONFIG_NETWORK 0
#define CONFIG_RDFT 1
#define CONFIG_AUTODETECT 0
#define CONFIG_FONTCONFIG 0
#define CONFIG_LARGE_TESTS 1
#define CONFIG_LINUX_PERF 0
#define CONFIG_MACOS_KPERF 0
#define CONFIG_MEMORY_POISONING 0
#define CONFIG_NEON_CLOBBER_TEST 0
#define CONFIG_OSSFUZZ 0
#define CONFIG_PIC 1
#define CONFIG_PTX_COMPRESSION 0
#define CONFIG_THUMB 0
#define CONFIG_VALGRIND_BACKTRACE 0
#define CONFIG_XMM_CLOBBER_TEST 0
#define CONFIG_BSFS 0
#define CONFIG_DECODERS 1
#define CONFIG_ENCODERS 0
#define CONFIG_HWACCELS 0
#define CONFIG_PARSERS 1
#define CONFIG_INDEVS 0
#define CONFIG_OUTDEVS 0
#define CONFIG_FILTERS 0
#define CONFIG_DEMUXERS 1
#define CONFIG_MUXERS 0
#define CONFIG_PROTOCOLS 0
#define CONFIG_AANDCTTABLES 0
#define CONFIG_AC3DSP 0
#define CONFIG_ADTS_HEADER 1
#define CONFIG_ATSC_A53 1
#define CONFIG_AUDIO_FRAME_QUEUE 0
#define CONFIG_AUDIODSP 0
#define CONFIG_BLOCKDSP 1
#define CONFIG_BSWAPDSP 0
#define CONFIG_CABAC 1
#define CONFIG_CBS 0
#define CONFIG_CBS_AV1 0
#define CONFIG_CBS_H264 0
#define CONFIG_CBS_H265 0
#define CONFIG_CBS_JPEG 0
#define CONFIG_CBS_MPEG2 0
#define CONFIG_CBS_VP9 0
#define CONFIG_DEFLATE_WRAPPER 0
#define CONFIG_DIRAC_PARSE 1
#define CONFIG_DNN 0
#define CONFIG_DOVI_RPU 0
#define CONFIG_DVPROFILE 0
#define CONFIG_EXIF 1
#define CONFIG_FAANDCT 0
#define CONFIG_FAANIDCT 0
#define CONFIG_FDCTDSP 0
#define CONFIG_FMTCONVERT 0
#define CONFIG_FRAME_THREAD_ENCODER 0
#define CONFIG_G722DSP 0
#define CONFIG_GOLOMB 1
#define CONFIG_GPLV3 0
#define CONFIG_H263DSP 1
#define CONFIG_H264CHROMA 1
#define CONFIG_H264DSP 1
#define CONFIG_H264PARSE 1
#define CONFIG_H264PRED 1
#define CONFIG_H264QPEL 1
#define CONFIG_H264_SEI 1
#define CONFIG_HEVCPARSE 0
#define CONFIG_HEVC_SEI 0
#define CONFIG_HPELDSP 1
#define CONFIG_HUFFMAN 0
#define CONFIG_HUFFYUVDSP 0
#define CONFIG_HUFFYUVENCDSP 0
#define CONFIG_IDCTDSP 1
#define CONFIG_IIRFILTER 0
#define CONFIG_INFLATE_WRAPPER 0
#define CONFIG_INTRAX8 0
#define CONFIG_ISO_MEDIA 1
#define CONFIG_IVIDSP 0
#define CONFIG_JPEGTABLES 0
#define CONFIG_LGPLV3 0
#define CONFIG_LIBX262 0
#define CONFIG_LLAUDDSP 0
#define CONFIG_LLVIDDSP 0
#define CONFIG_LLVIDENCDSP 0
#define CONFIG_LPC 0
#define CONFIG_LZF 0
#define CONFIG_ME_CMP 1
#define CONFIG_MPEG_ER 1
#define CONFIG_MPEGAUDIO 1
#define CONFIG_MPEGAUDIODSP 1
#define CONFIG_MPEGAUDIOHEADER 1
#define CONFIG_MPEG4AUDIO 1
#define CONFIG_MPEGVIDEO 1
#define CONFIG_MPEGVIDEODEC 1
#define CONFIG_MPEGVIDEOENC 0
#define CONFIG_MSMPEG4DEC 0
#define CONFIG_MSMPEG4ENC 0
#define CONFIG_MSS34DSP 0
#define CONFIG_PIXBLOCKDSP 0
#define CONFIG_QPELDSP 1
#define CONFIG_QSV 0
#define CONFIG_QSVDEC 0
#define CONFIG_QSVENC 0
#define CONFIG_QSVVPP 0
#define CONFIG_RANGECODER 0
#define CONFIG_RIFFDEC 1
#define CONFIG_RIFFENC 0
#define CONFIG_RTPDEC 0
#define CONFIG_RTPENC_CHAIN 0
#define CONFIG_RV34DSP 0
#define CONFIG_SCENE_SAD 0
#define CONFIG_SINEWIN 1
#define CONFIG_SNAPPY 0
#define CONFIG_SRTP 0
#define CONFIG_STARTCODE 1
#define CONFIG_TEXTUREDSP 0
#define CONFIG_TEXTUREDSPENC 0
#define CONFIG_TPELDSP 0
#define CONFIG_VAAPI_1 0
#define CONFIG_VAAPI_ENCODE 0
#define CONFIG_VC1DSP 0
#define CONFIG_VIDEODSP 1
#define CONFIG_VP3DSP 1
#define CONFIG_VP56DSP 0
#define CONFIG_VP8DSP 1
#define CONFIG_WMA_FREQS 0
#define CONFIG_WMV2DSP 0
#endif /* FFMPEG_CONFIG_H */
