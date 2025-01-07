/* Fundamentals */
typedef uint32_t VkBool32;
#define VK_TRUE                           1U
#define VK_FALSE                          0U
// Provided by VK_VERSION_1_0
typedef uint64_t VkDeviceSize;
// Provided by VK_VERSION_1_0
typedef uint64_t VkDeviceAddress;

/* Initialization */
// Provided by VK_VERSION_1_0
PFN_vkVoidFunction vkGetInstanceProcAddr(
    VkInstance                                  instance,
    const char*                                 pName);
// Provided by VK_VERSION_1_0
PFN_vkVoidFunction vkGetDeviceProcAddr(
    VkDevice                                    device,
    const char*                                 pName);
// Provided by VK_VERSION_1_0
typedef void (VKAPI_PTR *PFN_vkVoidFunction)(void);
// Provided by VK_VERSION_1_0
VK_DEFINE_HANDLE(VkInstance)
// Provided by VK_VERSION_1_1
VkResult vkEnumerateInstanceVersion(
    uint32_t*                                   pApiVersion);
// Provided by VK_VERSION_1_0
VkResult vkCreateInstance(
    const VkInstanceCreateInfo*                 pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkInstance*                                 pInstance);
// Provided by VK_VERSION_1_0
typedef struct VkInstanceCreateInfo {
    VkStructureType             sType;
    const void*                 pNext;
    VkInstanceCreateFlags       flags;
    const VkApplicationInfo*    pApplicationInfo;
    uint32_t                    enabledLayerCount;
    const char* const*          ppEnabledLayerNames;
    uint32_t                    enabledExtensionCount;
    const char* const*          ppEnabledExtensionNames;
} VkInstanceCreateInfo;
// Provided by VK_VERSION_1_0
typedef enum VkInstanceCreateFlagBits {
  // Provided by VK_KHR_portability_enumeration
    VK_INSTANCE_CREATE_ENUMERATE_PORTABILITY_BIT_KHR = 0x00000001,
} VkInstanceCreateFlagBits;
// Provided by VK_VERSION_1_0
typedef VkFlags VkInstanceCreateFlags;
// Provided by VK_VERSION_1_0
typedef VkFlags VkInstanceCreateFlags;
// Provided by VK_EXT_validation_flags
typedef enum VkValidationCheckEXT {
    VK_VALIDATION_CHECK_ALL_EXT = 0,
    VK_VALIDATION_CHECK_SHADERS_EXT = 1,
} VkValidationCheckEXT;
// Provided by VK_EXT_validation_features
typedef struct VkValidationFeaturesEXT {
    VkStructureType                         sType;
    const void*                             pNext;
    uint32_t                                enabledValidationFeatureCount;
    const VkValidationFeatureEnableEXT*     pEnabledValidationFeatures;
    uint32_t                                disabledValidationFeatureCount;
    const VkValidationFeatureDisableEXT*    pDisabledValidationFeatures;
} VkValidationFeaturesEXT;
// Provided by VK_EXT_validation_features
typedef enum VkValidationFeatureEnableEXT {
    VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_EXT = 0,
    VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_RESERVE_BINDING_SLOT_EXT = 1,
    VK_VALIDATION_FEATURE_ENABLE_BEST_PRACTICES_EXT = 2,
    VK_VALIDATION_FEATURE_ENABLE_DEBUG_PRINTF_EXT = 3,
    VK_VALIDATION_FEATURE_ENABLE_SYNCHRONIZATION_VALIDATION_EXT = 4,
} VkValidationFeatureEnableEXT;
// Provided by VK_EXT_validation_features
typedef enum VkValidationFeatureDisableEXT {
    VK_VALIDATION_FEATURE_DISABLE_ALL_EXT = 0,
    VK_VALIDATION_FEATURE_DISABLE_SHADERS_EXT = 1,
    VK_VALIDATION_FEATURE_DISABLE_THREAD_SAFETY_EXT = 2,
    VK_VALIDATION_FEATURE_DISABLE_API_PARAMETERS_EXT = 3,
    VK_VALIDATION_FEATURE_DISABLE_OBJECT_LIFETIMES_EXT = 4,
    VK_VALIDATION_FEATURE_DISABLE_CORE_CHECKS_EXT = 5,
    VK_VALIDATION_FEATURE_DISABLE_UNIQUE_HANDLES_EXT = 6,
    VK_VALIDATION_FEATURE_DISABLE_SHADER_VALIDATION_CACHE_EXT = 7,
} VkValidationFeatureDisableEXT;
// Provided by VK_EXT_layer_settings
typedef struct VkLayerSettingsCreateInfoEXT {
    VkStructureType             sType;
    const void*                 pNext;
    uint32_t                    settingCount;
    const VkLayerSettingEXT*    pSettings;
} VkLayerSettingsCreateInfoEXT;
// Provided by VK_EXT_layer_settings
typedef struct VkLayerSettingEXT {
    const char*              pLayerName;
    const char*              pSettingName;
    VkLayerSettingTypeEXT    type;
    uint32_t                 valueCount;
    const void*              pValues;
} VkLayerSettingEXT;
// Provided by VK_EXT_layer_settings
typedef enum VkLayerSettingTypeEXT {
    VK_LAYER_SETTING_TYPE_BOOL32_EXT = 0,
    VK_LAYER_SETTING_TYPE_INT32_EXT = 1,
    VK_LAYER_SETTING_TYPE_INT64_EXT = 2,
    VK_LAYER_SETTING_TYPE_UINT32_EXT = 3,
    VK_LAYER_SETTING_TYPE_UINT64_EXT = 4,
    VK_LAYER_SETTING_TYPE_FLOAT32_EXT = 5,
    VK_LAYER_SETTING_TYPE_FLOAT64_EXT = 6,
    VK_LAYER_SETTING_TYPE_STRING_EXT = 7,
} VkLayerSettingTypeEXT;
// Provided by VK_LUNARG_direct_driver_loading
typedef struct VkDirectDriverLoadingListLUNARG {
    VkStructureType                           sType;
    const void*                               pNext;
    VkDirectDriverLoadingModeLUNARG           mode;
    uint32_t                                  driverCount;
    const VkDirectDriverLoadingInfoLUNARG*    pDrivers;
} VkDirectDriverLoadingListLUNARG;
// Provided by VK_LUNARG_direct_driver_loading
typedef struct VkDirectDriverLoadingInfoLUNARG {
    VkStructureType                     sType;
    void*                               pNext;
    VkDirectDriverLoadingFlagsLUNARG    flags;
    PFN_vkGetInstanceProcAddrLUNARG     pfnGetInstanceProcAddr;
} VkDirectDriverLoadingInfoLUNARG;
// Provided by VK_LUNARG_direct_driver_loading
typedef enum VkDirectDriverLoadingModeLUNARG {
    VK_DIRECT_DRIVER_LOADING_MODE_EXCLUSIVE_LUNARG = 0,
    VK_DIRECT_DRIVER_LOADING_MODE_INCLUSIVE_LUNARG = 1,
} VkDirectDriverLoadingModeLUNARG;
// Provided by VK_LUNARG_direct_driver_loading
typedef VkFlags VkDirectDriverLoadingFlagsLUNARG;
// Provided by VK_LUNARG_direct_driver_loading
typedef PFN_vkVoidFunction (VKAPI_PTR *PFN_vkGetInstanceProcAddrLUNARG)(
    VkInstance instance, const char* pName);
// Provided by VK_VERSION_1_0
typedef struct VkApplicationInfo {
    VkStructureType    sType;
    const void*        pNext;
    const char*        pApplicationName;
    uint32_t           applicationVersion;
    const char*        pEngineName;
    uint32_t           engineVersion;
    uint32_t           apiVersion;
} VkApplicationInfo;
// Provided by VK_VERSION_1_0
void vkDestroyInstance(
    VkInstance                                  instance,
    const VkAllocationCallbacks*                pAllocator);


/*Devices and Queues*/
// Provided by VK_VERSION_1_0
VK_DEFINE_HANDLE(VkPhysicalDevice)
// Provided by VK_VERSION_1_0
VkResult vkEnumeratePhysicalDevices(
    VkInstance                                  instance,
    uint32_t*                                   pPhysicalDeviceCount,
    VkPhysicalDevice*                           pPhysicalDevices);
// Provided by VK_VERSION_1_0
void vkGetPhysicalDeviceProperties(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceProperties*                 pProperties);
// Provided by VK_VERSION_1_0
void vkGetPhysicalDeviceProperties(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceProperties*                 pProperties);
// Provided by VK_VERSION_1_0
typedef enum VkVendorId {
    VK_VENDOR_ID_KHRONOS = 0x10000,
    VK_VENDOR_ID_VIV = 0x10001,
    VK_VENDOR_ID_VSI = 0x10002,
    VK_VENDOR_ID_KAZAN = 0x10003,
    VK_VENDOR_ID_CODEPLAY = 0x10004,
    VK_VENDOR_ID_MESA = 0x10005,
    VK_VENDOR_ID_POCL = 0x10006,
    VK_VENDOR_ID_MOBILEYE = 0x10007,
} VkVendorId;
#define VK_MAX_PHYSICAL_DEVICE_NAME_SIZE  256U
// Provided by VK_VERSION_1_0
typedef enum VkPhysicalDeviceType {
    VK_PHYSICAL_DEVICE_TYPE_OTHER = 0,
    VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU = 1,
    VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU = 2,
    VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU = 3,
    VK_PHYSICAL_DEVICE_TYPE_CPU = 4,
} VkPhysicalDeviceType;
// Provided by VK_VERSION_1_1
void vkGetPhysicalDeviceProperties2(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceProperties2*                pProperties);
// Provided by VK_KHR_get_physical_device_properties2
void vkGetPhysicalDeviceProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    VkPhysicalDeviceProperties2*                pProperties);
// Provided by VK_VERSION_1_1
typedef struct VkPhysicalDeviceProperties2 {
    VkStructureType               sType;
    void*                         pNext;
    VkPhysicalDeviceProperties    properties;
} VkPhysicalDeviceProperties2;
// Provided by VK_KHR_get_physical_device_properties2
typedef VkPhysicalDeviceProperties2 VkPhysicalDeviceProperties2KHR;
// Provided by VK_VERSION_1_2
typedef struct VkPhysicalDeviceVulkan11Properties {
    VkStructureType            sType;
    void*                      pNext;
    uint8_t                    deviceUUID[VK_UUID_SIZE];
    uint8_t                    driverUUID[VK_UUID_SIZE];
    uint8_t                    deviceLUID[VK_LUID_SIZE];
    uint32_t                   deviceNodeMask;
    VkBool32                   deviceLUIDValid;
    uint32_t                   subgroupSize;
    VkShaderStageFlags         subgroupSupportedStages;
    VkSubgroupFeatureFlags     subgroupSupportedOperations;
    VkBool32                   subgroupQuadOperationsInAllStages;
    VkPointClippingBehavior    pointClippingBehavior;
    uint32_t                   maxMultiviewViewCount;
    uint32_t                   maxMultiviewInstanceIndex;
    VkBool32                   protectedNoFault;
    uint32_t                   maxPerSetDescriptors;
    VkDeviceSize               maxMemoryAllocationSize;
} VkPhysicalDeviceVulkan11Properties;
// Provided by VK_VERSION_1_2
typedef struct VkPhysicalDeviceVulkan12Properties {
    VkStructureType                      sType;
    void*                                pNext;
    VkDriverId                           driverID;
    char                                 driverName[VK_MAX_DRIVER_NAME_SIZE];
    char                                 driverInfo[VK_MAX_DRIVER_INFO_SIZE];
    VkConformanceVersion                 conformanceVersion;
    VkShaderFloatControlsIndependence    denormBehaviorIndependence;
    VkShaderFloatControlsIndependence    roundingModeIndependence;
    VkBool32                             shaderSignedZeroInfNanPreserveFloat16;
    VkBool32                             shaderSignedZeroInfNanPreserveFloat32;
    VkBool32                             shaderSignedZeroInfNanPreserveFloat64;
    VkBool32                             shaderDenormPreserveFloat16;
    VkBool32                             shaderDenormPreserveFloat32;
    VkBool32                             shaderDenormPreserveFloat64;
    VkBool32                             shaderDenormFlushToZeroFloat16;
    VkBool32                             shaderDenormFlushToZeroFloat32;
    VkBool32                             shaderDenormFlushToZeroFloat64;
    VkBool32                             shaderRoundingModeRTEFloat16;
    VkBool32                             shaderRoundingModeRTEFloat32;
    VkBool32                             shaderRoundingModeRTEFloat64;
    VkBool32                             shaderRoundingModeRTZFloat16;
    VkBool32                             shaderRoundingModeRTZFloat32;
    VkBool32                             shaderRoundingModeRTZFloat64;
    uint32_t                             maxUpdateAfterBindDescriptorsInAllPools;
    VkBool32                             shaderUniformBufferArrayNonUniformIndexingNative;
    VkBool32                             shaderSampledImageArrayNonUniformIndexingNative;
    VkBool32                             shaderStorageBufferArrayNonUniformIndexingNative;
    VkBool32                             shaderStorageImageArrayNonUniformIndexingNative;
    VkBool32                             shaderInputAttachmentArrayNonUniformIndexingNative;
    VkBool32                             robustBufferAccessUpdateAfterBind;
    VkBool32                             quadDivergentImplicitLod;
    uint32_t                             maxPerStageDescriptorUpdateAfterBindSamplers;
    uint32_t                             maxPerStageDescriptorUpdateAfterBindUniformBuffers;
    uint32_t                             maxPerStageDescriptorUpdateAfterBindStorageBuffers;
    uint32_t                             maxPerStageDescriptorUpdateAfterBindSampledImages;
    uint32_t                             maxPerStageDescriptorUpdateAfterBindStorageImages;
    uint32_t                             maxPerStageDescriptorUpdateAfterBindInputAttachments;
    uint32_t                             maxPerStageUpdateAfterBindResources;
    uint32_t                             maxDescriptorSetUpdateAfterBindSamplers;
    uint32_t                             maxDescriptorSetUpdateAfterBindUniformBuffers;
    uint32_t                             maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
    uint32_t                             maxDescriptorSetUpdateAfterBindStorageBuffers;
    uint32_t                             maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
    uint32_t                             maxDescriptorSetUpdateAfterBindSampledImages;
    uint32_t                             maxDescriptorSetUpdateAfterBindStorageImages;
    uint32_t                             maxDescriptorSetUpdateAfterBindInputAttachments;
    VkResolveModeFlags                   supportedDepthResolveModes;
    VkResolveModeFlags                   supportedStencilResolveModes;
    VkBool32                             independentResolveNone;
    VkBool32                             independentResolve;
    VkBool32                             filterMinmaxSingleComponentFormats;
    VkBool32                             filterMinmaxImageComponentMapping;
    uint64_t                             maxTimelineSemaphoreValueDifference;
    VkSampleCountFlags                   framebufferIntegerColorSampleCounts;
} VkPhysicalDeviceVulkan12Properties;
// Provided by VK_VERSION_1_3
typedef struct VkPhysicalDeviceVulkan13Properties {
    VkStructureType       sType;
    void*                 pNext;
    uint32_t              minSubgroupSize;
    uint32_t              maxSubgroupSize;
    uint32_t              maxComputeWorkgroupSubgroups;
    VkShaderStageFlags    requiredSubgroupSizeStages;
    uint32_t              maxInlineUniformBlockSize;
    uint32_t              maxPerStageDescriptorInlineUniformBlocks;
    uint32_t              maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
    uint32_t              maxDescriptorSetInlineUniformBlocks;
    uint32_t              maxDescriptorSetUpdateAfterBindInlineUniformBlocks;
    uint32_t              maxInlineUniformTotalSize;
    VkBool32              integerDotProduct8BitUnsignedAccelerated;
    VkBool32              integerDotProduct8BitSignedAccelerated;
    VkBool32              integerDotProduct8BitMixedSignednessAccelerated;
    VkBool32              integerDotProduct4x8BitPackedUnsignedAccelerated;
    VkBool32              integerDotProduct4x8BitPackedSignedAccelerated;
    VkBool32              integerDotProduct4x8BitPackedMixedSignednessAccelerated;
    VkBool32              integerDotProduct16BitUnsignedAccelerated;
    VkBool32              integerDotProduct16BitSignedAccelerated;
    VkBool32              integerDotProduct16BitMixedSignednessAccelerated;
    VkBool32              integerDotProduct32BitUnsignedAccelerated;
    VkBool32              integerDotProduct32BitSignedAccelerated;
    VkBool32              integerDotProduct32BitMixedSignednessAccelerated;
    VkBool32              integerDotProduct64BitUnsignedAccelerated;
    VkBool32              integerDotProduct64BitSignedAccelerated;
    VkBool32              integerDotProduct64BitMixedSignednessAccelerated;
    VkBool32              integerDotProductAccumulatingSaturating8BitUnsignedAccelerated;
    VkBool32              integerDotProductAccumulatingSaturating8BitSignedAccelerated;
    VkBool32              integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated;
    VkBool32              integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated;
    VkBool32              integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated;
    VkBool32              integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated;
    VkBool32              integerDotProductAccumulatingSaturating16BitUnsignedAccelerated;
    VkBool32              integerDotProductAccumulatingSaturating16BitSignedAccelerated;
    VkBool32              integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated;
    VkBool32              integerDotProductAccumulatingSaturating32BitUnsignedAccelerated;
    VkBool32              integerDotProductAccumulatingSaturating32BitSignedAccelerated;
    VkBool32              integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated;
    VkBool32              integerDotProductAccumulatingSaturating64BitUnsignedAccelerated;
    VkBool32              integerDotProductAccumulatingSaturating64BitSignedAccelerated;
    VkBool32              integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated;
    VkDeviceSize          storageTexelBufferOffsetAlignmentBytes;
    VkBool32              storageTexelBufferOffsetSingleTexelAlignment;
    VkDeviceSize          uniformTexelBufferOffsetAlignmentBytes;
    VkBool32              uniformTexelBufferOffsetSingleTexelAlignment;
    VkDeviceSize          maxBufferSize;
} VkPhysicalDeviceVulkan13Properties;
// Provided by VK_VERSION_1_4
typedef struct VkPhysicalDeviceVulkan14Properties {
    VkStructureType                       sType;
    void*                                 pNext;
    uint32_t                              lineSubPixelPrecisionBits;
    uint32_t                              maxVertexAttribDivisor;
    VkBool32                              supportsNonZeroFirstInstance;
    uint32_t                              maxPushDescriptors;
    VkBool32                              dynamicRenderingLocalReadDepthStencilAttachments;
    VkBool32                              dynamicRenderingLocalReadMultisampledAttachments;
    VkBool32                              earlyFragmentMultisampleCoverageAfterSampleCounting;
    VkBool32                              earlyFragmentSampleMaskTestBeforeSampleCounting;
    VkBool32                              depthStencilSwizzleOneSupport;
    VkBool32                              polygonModePointSize;
    VkBool32                              nonStrictSinglePixelWideLinesUseParallelogram;
    VkBool32                              nonStrictWideLinesUseParallelogram;
    VkBool32                              blockTexelViewCompatibleMultipleLayers;
    uint32_t                              maxCombinedImageSamplerDescriptorCount;
    VkBool32                              fragmentShadingRateClampCombinerInputs;
    VkPipelineRobustnessBufferBehavior    defaultRobustnessStorageBuffers;
    VkPipelineRobustnessBufferBehavior    defaultRobustnessUniformBuffers;
    VkPipelineRobustnessBufferBehavior    defaultRobustnessVertexInputs;
    VkPipelineRobustnessImageBehavior     defaultRobustnessImages;
    uint32_t                              copySrcLayoutCount;
    VkImageLayout*                        pCopySrcLayouts;
    uint32_t                              copyDstLayoutCount;
    VkImageLayout*                        pCopyDstLayouts;
    uint8_t                               optimalTilingLayoutUUID[VK_UUID_SIZE];
    VkBool32                              identicalMemoryTypeRequirements;
} VkPhysicalDeviceVulkan14Properties;
// Provided by VK_VERSION_1_1
typedef struct VkPhysicalDeviceIDProperties {
    VkStructureType    sType;
    void*              pNext;
    uint8_t            deviceUUID[VK_UUID_SIZE];
    uint8_t            driverUUID[VK_UUID_SIZE];
    uint8_t            deviceLUID[VK_LUID_SIZE];
    uint32_t           deviceNodeMask;
    VkBool32           deviceLUIDValid;
} VkPhysicalDeviceIDProperties;
// Provided by VK_KHR_external_fence_capabilities, VK_KHR_external_memory_capabilities, VK_KHR_external_semaphore_capabilities
typedef VkPhysicalDeviceIDProperties VkPhysicalDeviceIDPropertiesKHR;
#define VK_UUID_SIZE                      16U
#define VK_LUID_SIZE                      8U
#define VK_LUID_SIZE_KHR                  VK_LUID_SIZE
// Provided by VK_VERSION_1_2
typedef struct VkPhysicalDeviceDriverProperties {
    VkStructureType         sType;
    void*                   pNext;
    VkDriverId              driverID;
    char                    driverName[VK_MAX_DRIVER_NAME_SIZE];
    char                    driverInfo[VK_MAX_DRIVER_INFO_SIZE];
    VkConformanceVersion    conformanceVersion;
} VkPhysicalDeviceDriverProperties;
// Provided by VK_KHR_driver_properties
typedef VkPhysicalDeviceDriverProperties VkPhysicalDeviceDriverPropertiesKHR;
// Provided by VK_VERSION_1_2
typedef enum VkDriverId {
    VK_DRIVER_ID_AMD_PROPRIETARY = 1,
    VK_DRIVER_ID_AMD_OPEN_SOURCE = 2,
    VK_DRIVER_ID_MESA_RADV = 3,
    VK_DRIVER_ID_NVIDIA_PROPRIETARY = 4,
    VK_DRIVER_ID_INTEL_PROPRIETARY_WINDOWS = 5,
    VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA = 6,
    VK_DRIVER_ID_IMAGINATION_PROPRIETARY = 7,
    VK_DRIVER_ID_QUALCOMM_PROPRIETARY = 8,
    VK_DRIVER_ID_ARM_PROPRIETARY = 9,
    VK_DRIVER_ID_GOOGLE_SWIFTSHADER = 10,
    VK_DRIVER_ID_GGP_PROPRIETARY = 11,
    VK_DRIVER_ID_BROADCOM_PROPRIETARY = 12,
    VK_DRIVER_ID_MESA_LLVMPIPE = 13,
    VK_DRIVER_ID_MOLTENVK = 14,
    VK_DRIVER_ID_COREAVI_PROPRIETARY = 15,
    VK_DRIVER_ID_JUICE_PROPRIETARY = 16,
    VK_DRIVER_ID_VERISILICON_PROPRIETARY = 17,
    VK_DRIVER_ID_MESA_TURNIP = 18,
    VK_DRIVER_ID_MESA_V3DV = 19,
    VK_DRIVER_ID_MESA_PANVK = 20,
    VK_DRIVER_ID_SAMSUNG_PROPRIETARY = 21,
    VK_DRIVER_ID_MESA_VENUS = 22,
    VK_DRIVER_ID_MESA_DOZEN = 23,
    VK_DRIVER_ID_MESA_NVK = 24,
    VK_DRIVER_ID_IMAGINATION_OPEN_SOURCE_MESA = 25,
    VK_DRIVER_ID_MESA_HONEYKRISP = 26,
    VK_DRIVER_ID_VULKAN_SC_EMULATION_ON_VULKAN = 27,
  // Provided by VK_KHR_driver_properties
    VK_DRIVER_ID_AMD_PROPRIETARY_KHR = VK_DRIVER_ID_AMD_PROPRIETARY,
  // Provided by VK_KHR_driver_properties
    VK_DRIVER_ID_AMD_OPEN_SOURCE_KHR = VK_DRIVER_ID_AMD_OPEN_SOURCE,
  // Provided by VK_KHR_driver_properties
    VK_DRIVER_ID_MESA_RADV_KHR = VK_DRIVER_ID_MESA_RADV,
  // Provided by VK_KHR_driver_properties
    VK_DRIVER_ID_NVIDIA_PROPRIETARY_KHR = VK_DRIVER_ID_NVIDIA_PROPRIETARY,
  // Provided by VK_KHR_driver_properties
    VK_DRIVER_ID_INTEL_PROPRIETARY_WINDOWS_KHR = VK_DRIVER_ID_INTEL_PROPRIETARY_WINDOWS,
  // Provided by VK_KHR_driver_properties
    VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA_KHR = VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA,
  // Provided by VK_KHR_driver_properties
    VK_DRIVER_ID_IMAGINATION_PROPRIETARY_KHR = VK_DRIVER_ID_IMAGINATION_PROPRIETARY,
  // Provided by VK_KHR_driver_properties
    VK_DRIVER_ID_QUALCOMM_PROPRIETARY_KHR = VK_DRIVER_ID_QUALCOMM_PROPRIETARY,
  // Provided by VK_KHR_driver_properties
    VK_DRIVER_ID_ARM_PROPRIETARY_KHR = VK_DRIVER_ID_ARM_PROPRIETARY,
  // Provided by VK_KHR_driver_properties
    VK_DRIVER_ID_GOOGLE_SWIFTSHADER_KHR = VK_DRIVER_ID_GOOGLE_SWIFTSHADER,
  // Provided by VK_KHR_driver_properties
    VK_DRIVER_ID_GGP_PROPRIETARY_KHR = VK_DRIVER_ID_GGP_PROPRIETARY,
  // Provided by VK_KHR_driver_properties
    VK_DRIVER_ID_BROADCOM_PROPRIETARY_KHR = VK_DRIVER_ID_BROADCOM_PROPRIETARY,
} VkDriverId;
// Provided by VK_KHR_driver_properties
typedef VkDriverId VkDriverIdKHR;
#define VK_MAX_DRIVER_NAME_SIZE           256U
#define VK_MAX_DRIVER_NAME_SIZE_KHR       VK_MAX_DRIVER_NAME_SIZE
#define VK_MAX_DRIVER_INFO_SIZE           256U
#define VK_MAX_DRIVER_INFO_SIZE_KHR       VK_MAX_DRIVER_INFO_SIZE
// Provided by VK_VERSION_1_2
typedef struct VkConformanceVersion {
    uint8_t    major;
    uint8_t    minor;
    uint8_t    subminor;
    uint8_t    patch;
} VkConformanceVersion;
// Provided by VK_KHR_driver_properties
typedef VkConformanceVersion VkConformanceVersionKHR;
// Provided by VK_EXT_pci_bus_info
typedef struct VkPhysicalDevicePCIBusInfoPropertiesEXT {
    VkStructureType    sType;
    void*              pNext;
    uint32_t           pciDomain;
    uint32_t           pciBus;
    uint32_t           pciDevice;
    uint32_t           pciFunction;
} VkPhysicalDevicePCIBusInfoPropertiesEXT;
// Provided by VK_EXT_physical_device_drm
typedef struct VkPhysicalDeviceDrmPropertiesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           hasPrimary;
    VkBool32           hasRender;
    int64_t            primaryMajor;
    int64_t            primaryMinor;
    int64_t            renderMajor;
    int64_t            renderMinor;
} VkPhysicalDeviceDrmPropertiesEXT;
// Provided by VK_VERSION_1_3
typedef struct VkPhysicalDeviceShaderIntegerDotProductProperties {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           integerDotProduct8BitUnsignedAccelerated;
    VkBool32           integerDotProduct8BitSignedAccelerated;
    VkBool32           integerDotProduct8BitMixedSignednessAccelerated;
    VkBool32           integerDotProduct4x8BitPackedUnsignedAccelerated;
    VkBool32           integerDotProduct4x8BitPackedSignedAccelerated;
    VkBool32           integerDotProduct4x8BitPackedMixedSignednessAccelerated;
    VkBool32           integerDotProduct16BitUnsignedAccelerated;
    VkBool32           integerDotProduct16BitSignedAccelerated;
    VkBool32           integerDotProduct16BitMixedSignednessAccelerated;
    VkBool32           integerDotProduct32BitUnsignedAccelerated;
    VkBool32           integerDotProduct32BitSignedAccelerated;
    VkBool32           integerDotProduct32BitMixedSignednessAccelerated;
    VkBool32           integerDotProduct64BitUnsignedAccelerated;
    VkBool32           integerDotProduct64BitSignedAccelerated;
    VkBool32           integerDotProduct64BitMixedSignednessAccelerated;
    VkBool32           integerDotProductAccumulatingSaturating8BitUnsignedAccelerated;
    VkBool32           integerDotProductAccumulatingSaturating8BitSignedAccelerated;
    VkBool32           integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated;
    VkBool32           integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated;
    VkBool32           integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated;
    VkBool32           integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated;
    VkBool32           integerDotProductAccumulatingSaturating16BitUnsignedAccelerated;
    VkBool32           integerDotProductAccumulatingSaturating16BitSignedAccelerated;
    VkBool32           integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated;
    VkBool32           integerDotProductAccumulatingSaturating32BitUnsignedAccelerated;
    VkBool32           integerDotProductAccumulatingSaturating32BitSignedAccelerated;
    VkBool32           integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated;
    VkBool32           integerDotProductAccumulatingSaturating64BitUnsignedAccelerated;
    VkBool32           integerDotProductAccumulatingSaturating64BitSignedAccelerated;
    VkBool32           integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated;
} VkPhysicalDeviceShaderIntegerDotProductProperties;
// Provided by VK_KHR_shader_integer_dot_product
typedef VkPhysicalDeviceShaderIntegerDotProductProperties VkPhysicalDeviceShaderIntegerDotProductPropertiesKHR;
// Provided by VK_QCOM_image_processing
typedef struct VkPhysicalDeviceImageProcessingPropertiesQCOM {
    VkStructureType    sType;
    void*              pNext;
    uint32_t           maxWeightFilterPhases;
    VkExtent2D         maxWeightFilterDimension;
    VkExtent2D         maxBlockMatchRegion;
    VkExtent2D         maxBoxFilterBlockSize;
} VkPhysicalDeviceImageProcessingPropertiesQCOM;
// Provided by VK_EXT_shader_tile_image
typedef struct VkPhysicalDeviceShaderTileImagePropertiesEXT {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           shaderTileImageCoherentReadAccelerated;
    VkBool32           shaderTileImageReadSampleFromPixelRateInvocation;
    VkBool32           shaderTileImageReadFromHelperInvocation;
} VkPhysicalDeviceShaderTileImagePropertiesEXT;
// Provided by VK_QCOM_image_processing2
typedef struct VkPhysicalDeviceImageProcessing2PropertiesQCOM {
    VkStructureType    sType;
    void*              pNext;
    VkExtent2D         maxBlockMatchWindow;
} VkPhysicalDeviceImageProcessing2PropertiesQCOM;
// Provided by VK_MSFT_layered_driver
typedef struct VkPhysicalDeviceLayeredDriverPropertiesMSFT {
    VkStructureType                     sType;
    void*                               pNext;
    VkLayeredDriverUnderlyingApiMSFT    underlyingAPI;
} VkPhysicalDeviceLayeredDriverPropertiesMSFT;
// Provided by VK_MSFT_layered_driver
typedef enum VkLayeredDriverUnderlyingApiMSFT {
    VK_LAYERED_DRIVER_UNDERLYING_API_NONE_MSFT = 0,
    VK_LAYERED_DRIVER_UNDERLYING_API_D3D12_MSFT = 1,
} VkLayeredDriverUnderlyingApiMSFT;
// Provided by VK_ARM_scheduling_controls
typedef struct VkPhysicalDeviceSchedulingControlsPropertiesARM {
    VkStructureType                               sType;
    void*                                         pNext;
    VkPhysicalDeviceSchedulingControlsFlagsARM    schedulingControlsFlags;
} VkPhysicalDeviceSchedulingControlsPropertiesARM;
// Provided by VK_ARM_scheduling_controls
// Flag bits for VkPhysicalDeviceSchedulingControlsFlagBitsARM
typedef VkFlags64 VkPhysicalDeviceSchedulingControlsFlagBitsARM;
static const VkPhysicalDeviceSchedulingControlsFlagBitsARM VK_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_SHADER_CORE_COUNT_ARM = 0x00000001ULL;
// Provided by VK_ARM_scheduling_controls
typedef VkFlags64 VkPhysicalDeviceSchedulingControlsFlagsARM;
// Provided by VK_VERSION_1_0
void vkGetPhysicalDeviceQueueFamilyProperties(
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pQueueFamilyPropertyCount,
    VkQueueFamilyProperties*                    pQueueFamilyProperties);
// Provided by VK_VERSION_1_0
typedef struct VkQueueFamilyProperties {
    VkQueueFlags    queueFlags;
    uint32_t        queueCount;
    uint32_t        timestampValidBits;
    VkExtent3D      minImageTransferGranularity;
} VkQueueFamilyProperties;
// Provided by VK_VERSION_1_0
typedef enum VkQueueFlagBits {
    VK_QUEUE_GRAPHICS_BIT = 0x00000001,
    VK_QUEUE_COMPUTE_BIT = 0x00000002,
    VK_QUEUE_TRANSFER_BIT = 0x00000004,
    VK_QUEUE_SPARSE_BINDING_BIT = 0x00000008,
  // Provided by VK_VERSION_1_1
    VK_QUEUE_PROTECTED_BIT = 0x00000010,
  // Provided by VK_KHR_video_decode_queue
    VK_QUEUE_VIDEO_DECODE_BIT_KHR = 0x00000020,
  // Provided by VK_KHR_video_encode_queue
    VK_QUEUE_VIDEO_ENCODE_BIT_KHR = 0x00000040,
  // Provided by VK_NV_optical_flow
    VK_QUEUE_OPTICAL_FLOW_BIT_NV = 0x00000100,
} VkQueueFlagBits;
// Provided by VK_VERSION_1_0
typedef VkFlags VkQueueFlags;
// Provided by VK_VERSION_1_1
void vkGetPhysicalDeviceQueueFamilyProperties2(
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pQueueFamilyPropertyCount,
    VkQueueFamilyProperties2*                   pQueueFamilyProperties);
// Provided by VK_KHR_get_physical_device_properties2
void vkGetPhysicalDeviceQueueFamilyProperties2KHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t*                                   pQueueFamilyPropertyCount,
    VkQueueFamilyProperties2*                   pQueueFamilyProperties);
// Provided by VK_VERSION_1_1
typedef struct VkQueueFamilyProperties2 {
    VkStructureType            sType;
    void*                      pNext;
    VkQueueFamilyProperties    queueFamilyProperties;
} VkQueueFamilyProperties2;
// Provided by VK_KHR_get_physical_device_properties2
typedef VkQueueFamilyProperties2 VkQueueFamilyProperties2KHR;
// Provided by VK_VERSION_1_4
typedef struct VkQueueFamilyGlobalPriorityProperties {
    VkStructureType          sType;
    void*                    pNext;
    uint32_t                 priorityCount;
    VkQueueGlobalPriority    priorities[VK_MAX_GLOBAL_PRIORITY_SIZE];
} VkQueueFamilyGlobalPriorityProperties;
// Provided by VK_KHR_global_priority
typedef VkQueueFamilyGlobalPriorityProperties VkQueueFamilyGlobalPriorityPropertiesKHR;
// Provided by VK_EXT_global_priority_query
typedef VkQueueFamilyGlobalPriorityProperties VkQueueFamilyGlobalPriorityPropertiesEXT;
#define VK_MAX_GLOBAL_PRIORITY_SIZE       16U
#define VK_MAX_GLOBAL_PRIORITY_SIZE_KHR   VK_MAX_GLOBAL_PRIORITY_SIZE
#define VK_MAX_GLOBAL_PRIORITY_SIZE_EXT   VK_MAX_GLOBAL_PRIORITY_SIZE
// Provided by VK_NV_device_diagnostic_checkpoints with VK_VERSION_1_3 or VK_KHR_synchronization2
typedef struct VkQueueFamilyCheckpointProperties2NV {
    VkStructureType          sType;
    void*                    pNext;
    VkPipelineStageFlags2    checkpointExecutionStageMask;
} VkQueueFamilyCheckpointProperties2NV;
// Provided by VK_NV_device_diagnostic_checkpoints
typedef struct VkQueueFamilyCheckpointPropertiesNV {
    VkStructureType         sType;
    void*                   pNext;
    VkPipelineStageFlags    checkpointExecutionStageMask;
} VkQueueFamilyCheckpointPropertiesNV;
// Provided by VK_KHR_video_queue
typedef struct VkQueueFamilyVideoPropertiesKHR {
    VkStructureType                  sType;
    void*                            pNext;
    VkVideoCodecOperationFlagsKHR    videoCodecOperations;
} VkQueueFamilyVideoPropertiesKHR;
// Provided by VK_KHR_video_queue
typedef struct VkQueueFamilyQueryResultStatusPropertiesKHR {
    VkStructureType    sType;
    void*              pNext;
    VkBool32           queryResultStatusSupport;
} VkQueueFamilyQueryResultStatusPropertiesKHR;
// Provided by VK_KHR_performance_query
VkResult vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    uint32_t*                                   pCounterCount,
    VkPerformanceCounterKHR*                    pCounters,
    VkPerformanceCounterDescriptionKHR*         pCounterDescriptions);
// Provided by VK_KHR_performance_query
typedef struct VkPerformanceCounterKHR {
    VkStructureType                   sType;
    void*                             pNext;
    VkPerformanceCounterUnitKHR       unit;
    VkPerformanceCounterScopeKHR      scope;
    VkPerformanceCounterStorageKHR    storage;
    uint8_t                           uuid[VK_UUID_SIZE];
} VkPerformanceCounterKHR;
// Provided by VK_KHR_performance_query
typedef enum VkPerformanceCounterUnitKHR {
    VK_PERFORMANCE_COUNTER_UNIT_GENERIC_KHR = 0,
    VK_PERFORMANCE_COUNTER_UNIT_PERCENTAGE_KHR = 1,
    VK_PERFORMANCE_COUNTER_UNIT_NANOSECONDS_KHR = 2,
    VK_PERFORMANCE_COUNTER_UNIT_BYTES_KHR = 3,
    VK_PERFORMANCE_COUNTER_UNIT_BYTES_PER_SECOND_KHR = 4,
    VK_PERFORMANCE_COUNTER_UNIT_KELVIN_KHR = 5,
    VK_PERFORMANCE_COUNTER_UNIT_WATTS_KHR = 6,
    VK_PERFORMANCE_COUNTER_UNIT_VOLTS_KHR = 7,
    VK_PERFORMANCE_COUNTER_UNIT_AMPS_KHR = 8,
    VK_PERFORMANCE_COUNTER_UNIT_HERTZ_KHR = 9,
    VK_PERFORMANCE_COUNTER_UNIT_CYCLES_KHR = 10,
} VkPerformanceCounterUnitKHR;
// Provided by VK_KHR_performance_query
typedef enum VkPerformanceCounterScopeKHR {
    VK_PERFORMANCE_COUNTER_SCOPE_COMMAND_BUFFER_KHR = 0,
    VK_PERFORMANCE_COUNTER_SCOPE_RENDER_PASS_KHR = 1,
    VK_PERFORMANCE_COUNTER_SCOPE_COMMAND_KHR = 2,
  // VK_QUERY_SCOPE_COMMAND_BUFFER_KHR is a deprecated alias
    VK_QUERY_SCOPE_COMMAND_BUFFER_KHR = VK_PERFORMANCE_COUNTER_SCOPE_COMMAND_BUFFER_KHR,
  // VK_QUERY_SCOPE_RENDER_PASS_KHR is a deprecated alias
    VK_QUERY_SCOPE_RENDER_PASS_KHR = VK_PERFORMANCE_COUNTER_SCOPE_RENDER_PASS_KHR,
  // VK_QUERY_SCOPE_COMMAND_KHR is a deprecated alias
    VK_QUERY_SCOPE_COMMAND_KHR = VK_PERFORMANCE_COUNTER_SCOPE_COMMAND_KHR,
} VkPerformanceCounterScopeKHR;
// Provided by VK_KHR_performance_query
typedef enum VkPerformanceCounterStorageKHR {
    VK_PERFORMANCE_COUNTER_STORAGE_INT32_KHR = 0,
    VK_PERFORMANCE_COUNTER_STORAGE_INT64_KHR = 1,
    VK_PERFORMANCE_COUNTER_STORAGE_UINT32_KHR = 2,
    VK_PERFORMANCE_COUNTER_STORAGE_UINT64_KHR = 3,
    VK_PERFORMANCE_COUNTER_STORAGE_FLOAT32_KHR = 4,
    VK_PERFORMANCE_COUNTER_STORAGE_FLOAT64_KHR = 5,
} VkPerformanceCounterStorageKHR;
// Provided by VK_KHR_performance_query
typedef struct VkPerformanceCounterDescriptionKHR {
    VkStructureType                            sType;
    void*                                      pNext;
    VkPerformanceCounterDescriptionFlagsKHR    flags;
    char                                       name[VK_MAX_DESCRIPTION_SIZE];
    char                                       category[VK_MAX_DESCRIPTION_SIZE];
    char                                       description[VK_MAX_DESCRIPTION_SIZE];
} VkPerformanceCounterDescriptionKHR;
// Provided by VK_KHR_performance_query
typedef enum VkPerformanceCounterDescriptionFlagBitsKHR {
    VK_PERFORMANCE_COUNTER_DESCRIPTION_PERFORMANCE_IMPACTING_BIT_KHR = 0x00000001,
    VK_PERFORMANCE_COUNTER_DESCRIPTION_CONCURRENTLY_IMPACTED_BIT_KHR = 0x00000002,
  // VK_PERFORMANCE_COUNTER_DESCRIPTION_PERFORMANCE_IMPACTING_KHR is a deprecated alias
    VK_PERFORMANCE_COUNTER_DESCRIPTION_PERFORMANCE_IMPACTING_KHR = VK_PERFORMANCE_COUNTER_DESCRIPTION_PERFORMANCE_IMPACTING_BIT_KHR,
  // VK_PERFORMANCE_COUNTER_DESCRIPTION_CONCURRENTLY_IMPACTED_KHR is a deprecated alias
    VK_PERFORMANCE_COUNTER_DESCRIPTION_CONCURRENTLY_IMPACTED_KHR = VK_PERFORMANCE_COUNTER_DESCRIPTION_CONCURRENTLY_IMPACTED_BIT_KHR,
} VkPerformanceCounterDescriptionFlagBitsKHR;
// Provided by VK_KHR_performance_query
typedef VkFlags VkPerformanceCounterDescriptionFlagsKHR;
// Provided by VK_VERSION_1_1
VkResult vkEnumeratePhysicalDeviceGroups(
    VkInstance                                  instance,
    uint32_t*                                   pPhysicalDeviceGroupCount,
    VkPhysicalDeviceGroupProperties*            pPhysicalDeviceGroupProperties);
// Provided by VK_KHR_device_group_creation
VkResult vkEnumeratePhysicalDeviceGroupsKHR(
    VkInstance                                  instance,
    uint32_t*                                   pPhysicalDeviceGroupCount,
    VkPhysicalDeviceGroupProperties*            pPhysicalDeviceGroupProperties);
// Provided by VK_VERSION_1_1
typedef struct VkPhysicalDeviceGroupProperties {
    VkStructureType     sType;
    void*               pNext;
    uint32_t            physicalDeviceCount;
    VkPhysicalDevice    physicalDevices[VK_MAX_DEVICE_GROUP_SIZE];
    VkBool32            subsetAllocation;
} VkPhysicalDeviceGroupProperties;
// Provided by VK_KHR_device_group_creation
typedef VkPhysicalDeviceGroupProperties VkPhysicalDeviceGroupPropertiesKHR;
#define VK_MAX_DEVICE_GROUP_SIZE          32U
#define VK_MAX_DEVICE_GROUP_SIZE_KHR      VK_MAX_DEVICE_GROUP_SIZE
// Provided by VK_VERSION_1_0
VK_DEFINE_HANDLE(VkDevice)
// Provided by VK_VERSION_1_0
VkResult vkCreateDevice(
    VkPhysicalDevice                            physicalDevice,
    const VkDeviceCreateInfo*                   pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkDevice*                                   pDevice);
// Provided by VK_VERSION_1_0
typedef struct VkDeviceCreateInfo {
    VkStructureType                    sType;
    const void*                        pNext;
    VkDeviceCreateFlags                flags;
    uint32_t                           queueCreateInfoCount;
    const VkDeviceQueueCreateInfo*     pQueueCreateInfos;
    // enabledLayerCount is deprecated and should not be used
    uint32_t                           enabledLayerCount;
    // ppEnabledLayerNames is deprecated and should not be used
    const char* const*                 ppEnabledLayerNames;
    uint32_t                           enabledExtensionCount;
    const char* const*                 ppEnabledExtensionNames;
    const VkPhysicalDeviceFeatures*    pEnabledFeatures;
} VkDeviceCreateInfo;
// Provided by VK_VERSION_1_0
typedef VkFlags VkDeviceCreateFlags;
// Provided by VK_VERSION_1_1
typedef struct VkDeviceGroupDeviceCreateInfo {
    VkStructureType            sType;
    const void*                pNext;
    uint32_t                   physicalDeviceCount;
    const VkPhysicalDevice*    pPhysicalDevices;
} VkDeviceGroupDeviceCreateInfo;
// Provided by VK_KHR_device_group_creation
typedef VkDeviceGroupDeviceCreateInfo VkDeviceGroupDeviceCreateInfoKHR;
// Provided by VK_AMD_memory_overallocation_behavior
typedef struct VkDeviceMemoryOverallocationCreateInfoAMD {
    VkStructureType                      sType;
    const void*                          pNext;
    VkMemoryOverallocationBehaviorAMD    overallocationBehavior;
} VkDeviceMemoryOverallocationCreateInfoAMD;
// Provided by VK_AMD_memory_overallocation_behavior
typedef enum VkMemoryOverallocationBehaviorAMD {
    VK_MEMORY_OVERALLOCATION_BEHAVIOR_DEFAULT_AMD = 0,
    VK_MEMORY_OVERALLOCATION_BEHAVIOR_ALLOWED_AMD = 1,
    VK_MEMORY_OVERALLOCATION_BEHAVIOR_DISALLOWED_AMD = 2,
} VkMemoryOverallocationBehaviorAMD;
// Provided by VK_NV_device_diagnostics_config
typedef struct VkDeviceDiagnosticsConfigCreateInfoNV {
    VkStructureType                     sType;
    const void*                         pNext;
    VkDeviceDiagnosticsConfigFlagsNV    flags;
} VkDeviceDiagnosticsConfigCreateInfoNV;
// Provided by VK_NV_device_diagnostics_config
typedef enum VkDeviceDiagnosticsConfigFlagBitsNV {
    VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_SHADER_DEBUG_INFO_BIT_NV = 0x00000001,
    VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_RESOURCE_TRACKING_BIT_NV = 0x00000002,
    VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_AUTOMATIC_CHECKPOINTS_BIT_NV = 0x00000004,
    VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_SHADER_ERROR_REPORTING_BIT_NV = 0x00000008,
} VkDeviceDiagnosticsConfigFlagBitsNV;
// Provided by VK_NV_device_diagnostics_config
typedef VkFlags VkDeviceDiagnosticsConfigFlagsNV;
// Provided by VK_EXT_device_memory_report
typedef struct VkDeviceDeviceMemoryReportCreateInfoEXT {
    VkStructureType                        sType;
    const void*                            pNext;
    VkDeviceMemoryReportFlagsEXT           flags;
    PFN_vkDeviceMemoryReportCallbackEXT    pfnUserCallback;
    void*                                  pUserData;
} VkDeviceDeviceMemoryReportCreateInfoEXT;
// Provided by VK_EXT_device_memory_report
typedef void (VKAPI_PTR *PFN_vkDeviceMemoryReportCallbackEXT)(
    const VkDeviceMemoryReportCallbackDataEXT*  pCallbackData,
    void*                                       pUserData);
// Provided by VK_EXT_device_memory_report
typedef struct VkDeviceMemoryReportCallbackDataEXT {
    VkStructureType                     sType;
    void*                               pNext;
    VkDeviceMemoryReportFlagsEXT        flags;
    VkDeviceMemoryReportEventTypeEXT    type;
    uint64_t                            memoryObjectId;
    VkDeviceSize                        size;
    VkObjectType                        objectType;
    uint64_t                            objectHandle;
    uint32_t                            heapIndex;
} VkDeviceMemoryReportCallbackDataEXT;
// Provided by VK_EXT_device_memory_report
typedef VkFlags VkDeviceMemoryReportFlagsEXT;
// Provided by VK_EXT_device_memory_report
typedef enum VkDeviceMemoryReportEventTypeEXT {
    VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_ALLOCATE_EXT = 0,
    VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_FREE_EXT = 1,
    VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_IMPORT_EXT = 2,
    VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_UNIMPORT_EXT = 3,
    VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_ALLOCATION_FAILED_EXT = 4,
} VkDeviceMemoryReportEventTypeEXT;
// Provided by VK_VERSION_1_3
typedef struct VkDevicePrivateDataCreateInfo {
    VkStructureType    sType;
    const void*        pNext;
    uint32_t           privateDataSlotRequestCount;
} VkDevicePrivateDataCreateInfo;
// Provided by VK_EXT_private_data
typedef VkDevicePrivateDataCreateInfo VkDevicePrivateDataCreateInfoEXT;
// Provided by VK_KHR_pipeline_binary
typedef struct VkDevicePipelineBinaryInternalCacheControlKHR {
    VkStructureType    sType;
    const void*        pNext;
    VkBool32           disableInternalCache;
} VkDevicePipelineBinaryInternalCacheControlKHR;
// Provided by VK_VERSION_1_0
void vkDestroyDevice(
    VkDevice                                    device,
    const VkAllocationCallbacks*                pAllocator);
// Provided by VK_VERSION_1_0
VK_DEFINE_HANDLE(VkQueue)
// Provided by VK_VERSION_1_0
typedef struct VkDeviceQueueCreateInfo {
    VkStructureType             sType;
    const void*                 pNext;
    VkDeviceQueueCreateFlags    flags;
    uint32_t                    queueFamilyIndex;
    uint32_t                    queueCount;
    const float*                pQueuePriorities;
} VkDeviceQueueCreateInfo;
// Provided by VK_VERSION_1_1
typedef enum VkDeviceQueueCreateFlagBits {
  // Provided by VK_VERSION_1_1
    VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT = 0x00000001,
} VkDeviceQueueCreateFlagBits;
// Provided by VK_VERSION_1_0
typedef VkFlags VkDeviceQueueCreateFlags;
// Provided by VK_VERSION_1_4
typedef struct VkDeviceQueueGlobalPriorityCreateInfo {
    VkStructureType          sType;
    const void*              pNext;
    VkQueueGlobalPriority    globalPriority;
} VkDeviceQueueGlobalPriorityCreateInfo;
// Provided by VK_KHR_global_priority
typedef VkDeviceQueueGlobalPriorityCreateInfo VkDeviceQueueGlobalPriorityCreateInfoKHR;
// Provided by VK_EXT_global_priority
typedef VkDeviceQueueGlobalPriorityCreateInfo VkDeviceQueueGlobalPriorityCreateInfoEXT;
// Provided by VK_VERSION_1_4
typedef enum VkQueueGlobalPriority {
    VK_QUEUE_GLOBAL_PRIORITY_LOW = 128,
    VK_QUEUE_GLOBAL_PRIORITY_MEDIUM = 256,
    VK_QUEUE_GLOBAL_PRIORITY_HIGH = 512,
    VK_QUEUE_GLOBAL_PRIORITY_REALTIME = 1024,
  // Provided by VK_EXT_global_priority
    VK_QUEUE_GLOBAL_PRIORITY_LOW_EXT = VK_QUEUE_GLOBAL_PRIORITY_LOW,
  // Provided by VK_EXT_global_priority
    VK_QUEUE_GLOBAL_PRIORITY_MEDIUM_EXT = VK_QUEUE_GLOBAL_PRIORITY_MEDIUM,
  // Provided by VK_EXT_global_priority
    VK_QUEUE_GLOBAL_PRIORITY_HIGH_EXT = VK_QUEUE_GLOBAL_PRIORITY_HIGH,
  // Provided by VK_EXT_global_priority
    VK_QUEUE_GLOBAL_PRIORITY_REALTIME_EXT = VK_QUEUE_GLOBAL_PRIORITY_REALTIME,
  // Provided by VK_KHR_global_priority
    VK_QUEUE_GLOBAL_PRIORITY_LOW_KHR = VK_QUEUE_GLOBAL_PRIORITY_LOW,
  // Provided by VK_KHR_global_priority
    VK_QUEUE_GLOBAL_PRIORITY_MEDIUM_KHR = VK_QUEUE_GLOBAL_PRIORITY_MEDIUM,
  // Provided by VK_KHR_global_priority
    VK_QUEUE_GLOBAL_PRIORITY_HIGH_KHR = VK_QUEUE_GLOBAL_PRIORITY_HIGH,
  // Provided by VK_KHR_global_priority
    VK_QUEUE_GLOBAL_PRIORITY_REALTIME_KHR = VK_QUEUE_GLOBAL_PRIORITY_REALTIME,
} VkQueueGlobalPriority;
// Provided by VK_KHR_global_priority
typedef VkQueueGlobalPriority VkQueueGlobalPriorityKHR;
// Provided by VK_EXT_global_priority
typedef VkQueueGlobalPriority VkQueueGlobalPriorityEXT;
// Provided by VK_ARM_scheduling_controls
typedef struct VkDeviceQueueShaderCoreControlCreateInfoARM {
    VkStructureType    sType;
    void*              pNext;
    uint32_t           shaderCoreCount;
} VkDeviceQueueShaderCoreControlCreateInfoARM;
// Provided by VK_VERSION_1_0
void vkGetDeviceQueue(
    VkDevice                                    device,
    uint32_t                                    queueFamilyIndex,
    uint32_t                                    queueIndex,
    VkQueue*                                    pQueue);
// Provided by VK_VERSION_1_1
void vkGetDeviceQueue2(
    VkDevice                                    device,
    const VkDeviceQueueInfo2*                   pQueueInfo,
    VkQueue*                                    pQueue);
// Provided by VK_VERSION_1_1
typedef struct VkDeviceQueueInfo2 {
    VkStructureType             sType;
    const void*                 pNext;
    VkDeviceQueueCreateFlags    flags;
    uint32_t                    queueFamilyIndex;
    uint32_t                    queueIndex;
} VkDeviceQueueInfo2;
