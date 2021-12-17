
/**
 * Copyright (c) 2021-2022 LunarG, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License")
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * DO NOT EDIT: This file is generated.
 */

#include <vulkan/vulkan_profiles.h>
#include <stddef.h>
#include <string.h>
#include <assert.h>
#include <stdint.h>
#include <vector>
#include <algorithm>

#define _vpArraySize(arr) static_cast<uint32_t>(sizeof(arr) / sizeof(arr[0]))

#ifdef VK_USE_PLATFORM_ANDROID_KHR
static const VkExtensionProperties _VP_ANDROID_BASELINE_2021_EXTENSIONS[] = {
    VkExtensionProperties{ VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_EXTENSION_NAME, 1 },
    VkExtensionProperties{ VK_KHR_SURFACE_EXTENSION_NAME, 1 },
    VkExtensionProperties{ VK_KHR_GET_SURFACE_CAPABILITIES_2_EXTENSION_NAME, 1 },
    VkExtensionProperties{ VK_KHR_ANDROID_SURFACE_EXTENSION_NAME, 1 },
    VkExtensionProperties{ VK_EXT_SWAPCHAIN_COLOR_SPACE_EXTENSION_NAME, 1 },
    VkExtensionProperties{ VK_KHR_EXTERNAL_SEMAPHORE_CAPABILITIES_EXTENSION_NAME, 1 },
    VkExtensionProperties{ VK_KHR_EXTERNAL_MEMORY_CAPABILITIES_EXTENSION_NAME, 1 },
    VkExtensionProperties{ VK_KHR_EXTERNAL_FENCE_CAPABILITIES_EXTENSION_NAME, 1 },
    VkExtensionProperties{ VK_KHR_SWAPCHAIN_EXTENSION_NAME, 1 },
    VkExtensionProperties{ VK_KHR_MAINTENANCE_1_EXTENSION_NAME, 1 },
    VkExtensionProperties{ VK_KHR_INCREMENTAL_PRESENT_EXTENSION_NAME, 1 },
    VkExtensionProperties{ VK_GOOGLE_DISPLAY_TIMING_EXTENSION_NAME, 1 },
    VkExtensionProperties{ VK_KHR_SHADER_DRAW_PARAMETERS_EXTENSION_NAME, 1 },
    VkExtensionProperties{ VK_KHR_DESCRIPTOR_UPDATE_TEMPLATE_EXTENSION_NAME, 1 },
    VkExtensionProperties{ VK_KHR_GET_MEMORY_REQUIREMENTS_2_EXTENSION_NAME, 1 },
    VkExtensionProperties{ VK_KHR_DEDICATED_ALLOCATION_EXTENSION_NAME, 1 },
    VkExtensionProperties{ VK_KHR_STORAGE_BUFFER_STORAGE_CLASS_EXTENSION_NAME, 1 },
    VkExtensionProperties{ VK_KHR_EXTERNAL_SEMAPHORE_EXTENSION_NAME, 1 },
    VkExtensionProperties{ VK_KHR_EXTERNAL_MEMORY_EXTENSION_NAME, 1 },
    VkExtensionProperties{ VK_KHR_EXTERNAL_SEMAPHORE_FD_EXTENSION_NAME, 1 },
    VkExtensionProperties{ VK_KHR_EXTERNAL_FENCE_EXTENSION_NAME, 1 },
    VkExtensionProperties{ VK_KHR_EXTERNAL_FENCE_FD_EXTENSION_NAME, 1 },
    VkExtensionProperties{ VK_KHR_VARIABLE_POINTERS_EXTENSION_NAME, 1 },
    VkExtensionProperties{ VK_KHR_MAINTENANCE_2_EXTENSION_NAME, 1 },
};
#endif

static const VkExtensionProperties _VP_KHR_ROADMAP_2022_EXTENSIONS[] = {
    VkExtensionProperties{ VK_EXT_GLOBAL_PRIORITY_EXTENSION_NAME, 1 },
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
static const VkExtensionProperties _VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_EXTENSIONS[] = {
    VkExtensionProperties{ VK_KHR_IMAGE_FORMAT_LIST_EXTENSION_NAME, 1 },
    VkExtensionProperties{ VK_KHR_SWAPCHAIN_EXTENSION_NAME, 70 },
    VkExtensionProperties{ VK_KHR_SWAPCHAIN_MUTABLE_FORMAT_EXTENSION_NAME, 1 },
    VkExtensionProperties{ VK_KHR_PORTABILITY_SUBSET_EXTENSION_NAME, 1 },
};
#endif

static const VkExtensionProperties _VP_LUNARG_DESKTOP_PORTABILITY_2021_EXTENSIONS[] = {
    VkExtensionProperties{ VK_KHR_IMAGE_FORMAT_LIST_EXTENSION_NAME, 1 },
    VkExtensionProperties{ VK_KHR_SWAPCHAIN_EXTENSION_NAME, 70 },
    VkExtensionProperties{ VK_KHR_SWAPCHAIN_MUTABLE_FORMAT_EXTENSION_NAME, 1 },
};

#ifdef VK_USE_PLATFORM_ANDROID_KHR
static const VpStructureProperties _VP_ANDROID_BASELINE_2021_STRUCTURE_PROPERTIES[] = {
    { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2, VP_STRUCTURE_FEATURES },
    { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2, VP_STRUCTURE_PROPERTIES },
};
#endif

static const VpStructureProperties _VP_KHR_ROADMAP_2022_STRUCTURE_PROPERTIES[] = {
    { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2, VP_STRUCTURE_FEATURES },
    { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES, VP_STRUCTURE_FEATURES },
    { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES, VP_STRUCTURE_FEATURES },
    { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES, VP_STRUCTURE_FEATURES },
    { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES, VP_STRUCTURE_PROPERTIES },
    { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES, VP_STRUCTURE_PROPERTIES },
    { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_PROPERTIES, VP_STRUCTURE_PROPERTIES },
    { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2, VP_STRUCTURE_PROPERTIES },
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
static const VpStructureProperties _VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_STRUCTURE_PROPERTIES[] = {
    { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2, VP_STRUCTURE_FEATURES },
    { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_FEATURES_KHR, VP_STRUCTURE_FEATURES },
    { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2, VP_STRUCTURE_PROPERTIES },
    { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_PROPERTIES_KHR, VP_STRUCTURE_PROPERTIES },
};
#endif

static const VpStructureProperties _VP_LUNARG_DESKTOP_PORTABILITY_2021_STRUCTURE_PROPERTIES[] = {
    { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2, VP_STRUCTURE_FEATURES },
    { VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2, VP_STRUCTURE_PROPERTIES },
};

struct VpFormatProperties {
    VkFormat format;
    VkFlags64 linearTilingFeatures;
    VkFlags64 optimalTilingFeatures;
    VkFlags64 bufferFeatures;
};

#ifdef VK_USE_PLATFORM_ANDROID_KHR
static const VpFormatProperties _VP_ANDROID_BASELINE_2021_FORMATS[] = {
    {
        VK_FORMAT_R8G8B8_UNORM,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_X8_D24_UNORM_PACK32,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ASTC_4x4_UNORM_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ASTC_4x4_SRGB_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ASTC_5x4_UNORM_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ASTC_5x4_SRGB_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ASTC_5x5_UNORM_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ASTC_5x5_SRGB_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ASTC_6x5_UNORM_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ASTC_6x5_SRGB_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ASTC_6x6_UNORM_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ASTC_6x6_SRGB_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ASTC_8x5_UNORM_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ASTC_8x5_SRGB_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ASTC_8x6_UNORM_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ASTC_8x6_SRGB_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ASTC_8x8_UNORM_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ASTC_8x8_SRGB_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ASTC_10x5_UNORM_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ASTC_10x5_SRGB_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ASTC_10x6_UNORM_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ASTC_10x6_SRGB_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ASTC_10x8_UNORM_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ASTC_10x8_SRGB_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ASTC_10x10_UNORM_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ASTC_10x10_SRGB_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ASTC_12x10_UNORM_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ASTC_12x10_SRGB_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ASTC_12x12_UNORM_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ASTC_12x12_SRGB_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_D24_UNORM_S8_UINT,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_B4G4R4A4_UNORM_PACK16,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R5G6B5_UNORM_PACK16,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_A1R5G5B5_UNORM_PACK16,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R8_UNORM,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R8_SNORM,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R8_UINT,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R8_SINT,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R8G8_UNORM,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R8G8_SNORM,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R8G8_UINT,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R8G8_SINT,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R8G8B8A8_UNORM,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R8G8B8A8_SNORM,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R8G8B8A8_UINT,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R8G8B8A8_SINT,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R8G8B8A8_SRGB,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_B8G8R8A8_UNORM,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_B8G8R8A8_SRGB,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_A8B8G8R8_UNORM_PACK32,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_A8B8G8R8_SNORM_PACK32,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_A8B8G8R8_UINT_PACK32,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_A8B8G8R8_SINT_PACK32,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_A8B8G8R8_SRGB_PACK32,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_A2B10G10R10_UNORM_PACK32,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_A2B10G10R10_UINT_PACK32,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R16_UNORM,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R16_SNORM,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R16_UINT,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R16_SINT,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R16_SFLOAT,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R16G16_UNORM,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R16G16_SNORM,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R16G16_UINT,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R16G16_SINT,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R16G16_SFLOAT,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R16G16B16A16_UNORM,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R16G16B16A16_SNORM,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R16G16B16A16_UINT,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R16G16B16A16_SINT,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R16G16B16A16_SFLOAT,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R32_UINT,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R32_SINT,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R32_SFLOAT,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R32G32_UINT,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R32G32_SINT,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R32G32_SFLOAT,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R32G32B32_UINT,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R32G32B32_SINT,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R32G32B32_SFLOAT,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R32G32B32A32_UINT,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R32G32B32A32_SINT,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_R32G32B32A32_SFLOAT,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_B10G11R11_UFLOAT_PACK32,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_E5B9G9R9_UFLOAT_PACK32,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_D16_UNORM,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_D32_SFLOAT,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_EAC_R11_UNORM_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_EAC_R11_SNORM_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_EAC_R11G11_UNORM_BLOCK,
        0,
        0,
        0,
    },
    {
        VK_FORMAT_EAC_R11G11_SNORM_BLOCK,
        0,
        0,
        0,
    },
};
#endif

#ifdef VK_ENABLE_BETA_EXTENSIONS
static const VpFormatProperties _VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_FORMATS[] = {
    {
        VK_FORMAT_R8_UNORM,
        VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT | VK_FORMAT_FEATURE_BLIT_SRC_BIT | VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT | VK_FORMAT_FEATURE_TRANSFER_SRC_BIT | VK_FORMAT_FEATURE_TRANSFER_DST_BIT,
        VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT | VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT | VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT | VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT | VK_FORMAT_FEATURE_BLIT_SRC_BIT | VK_FORMAT_FEATURE_BLIT_DST_BIT | VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT | VK_FORMAT_FEATURE_TRANSFER_SRC_BIT | VK_FORMAT_FEATURE_TRANSFER_DST_BIT,
        VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT | VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT | VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT,
    },
    {
        VK_FORMAT_R8_SNORM,
        VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT | VK_FORMAT_FEATURE_BLIT_SRC_BIT | VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT | VK_FORMAT_FEATURE_TRANSFER_SRC_BIT | VK_FORMAT_FEATURE_TRANSFER_DST_BIT,
        VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT | VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT | VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT | VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT | VK_FORMAT_FEATURE_BLIT_SRC_BIT | VK_FORMAT_FEATURE_BLIT_DST_BIT | VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT | VK_FORMAT_FEATURE_TRANSFER_SRC_BIT | VK_FORMAT_FEATURE_TRANSFER_DST_BIT,
        VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT | VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT | VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT,
    },
};
#endif

static const VpFormatProperties _VP_LUNARG_DESKTOP_PORTABILITY_2021_FORMATS[] = {
    {
        VK_FORMAT_R8_UNORM,
        VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT | VK_FORMAT_FEATURE_BLIT_SRC_BIT | VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT | VK_FORMAT_FEATURE_TRANSFER_SRC_BIT | VK_FORMAT_FEATURE_TRANSFER_DST_BIT,
        VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT | VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT | VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT | VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT | VK_FORMAT_FEATURE_BLIT_SRC_BIT | VK_FORMAT_FEATURE_BLIT_DST_BIT | VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT | VK_FORMAT_FEATURE_TRANSFER_SRC_BIT | VK_FORMAT_FEATURE_TRANSFER_DST_BIT,
        VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT | VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT | VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT,
    },
    {
        VK_FORMAT_R8_SNORM,
        VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT | VK_FORMAT_FEATURE_BLIT_SRC_BIT | VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT | VK_FORMAT_FEATURE_TRANSFER_SRC_BIT | VK_FORMAT_FEATURE_TRANSFER_DST_BIT,
        VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT | VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT | VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT | VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT | VK_FORMAT_FEATURE_BLIT_SRC_BIT | VK_FORMAT_FEATURE_BLIT_DST_BIT | VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT | VK_FORMAT_FEATURE_TRANSFER_SRC_BIT | VK_FORMAT_FEATURE_TRANSFER_DST_BIT,
        VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT | VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT | VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT,
    },
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
static const VkQueueFamilyProperties _VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_QUEUE_FAMILY_PROPERTIES[] = {
    { VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT | VK_QUEUE_TRANSFER_BIT | VK_QUEUE_SPARSE_BINDING_BIT, 1, 36, { 1, 1, 1 } },
};
#endif

static const VkQueueFamilyProperties _VP_LUNARG_DESKTOP_PORTABILITY_2021_QUEUE_FAMILY_PROPERTIES[] = {
    { VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT | VK_QUEUE_TRANSFER_BIT | VK_QUEUE_SPARSE_BINDING_BIT, 1, 36, { 1, 1, 1 } },
};

VP_INLINE bool _vpCheckExtension(const VkExtensionProperties *supportedProperties, size_t supportedSize,
                              const char *requestedExtension) {
    for (size_t i = 0, n = supportedSize; i < n; ++i) {
        if (strcmp(supportedProperties[i].extensionName, requestedExtension) == 0) {
            return true;
        }
    }

    return false;
}

VP_INLINE bool _vpCheckMemoryProperty(const VkPhysicalDeviceMemoryProperties &memoryProperties,
                                      const VkMemoryPropertyFlags &memoryPropertyFlags) {
    assert(&memoryProperties != nullptr);

    for (uint32_t i = 0, n = memoryProperties.memoryTypeCount; i < n; ++i) {
        if ((memoryProperties.memoryTypes[i].propertyFlags & memoryPropertyFlags) == memoryPropertyFlags) return true;
    }

    return false;
}

VP_INLINE bool _vpCheckFormatProperty(const VkFormatProperties2 *deviceProps, const VpFormatProperties &profileProps) {
    if ((deviceProps->formatProperties.linearTilingFeatures & profileProps.linearTilingFeatures) !=
        profileProps.linearTilingFeatures) {
        return false;
    } else if ((deviceProps->formatProperties.optimalTilingFeatures & profileProps.optimalTilingFeatures) !=
               profileProps.optimalTilingFeatures) {
        return false;
    } else if ((deviceProps->formatProperties.bufferFeatures & profileProps.bufferFeatures) != profileProps.bufferFeatures) {
        return false;
    }

    return true;
}

VP_INLINE bool _vpCheckQueueFamilyProperty(const VkQueueFamilyProperties *queueFamilyProperties,
                                           uint32_t queueFamilyPropertiesCount,
                                           const VkQueueFamilyProperties &profileQueueFamilyPropertie) {
    assert(queueFamilyProperties != nullptr);

    for (uint32_t i = 0, n = queueFamilyPropertiesCount; i < n; ++i) {
        if (queueFamilyProperties[i].queueCount < profileQueueFamilyPropertie.queueCount) {
            continue;
        } else if (queueFamilyProperties[i].timestampValidBits < profileQueueFamilyPropertie.timestampValidBits) {
            continue;
        } else if (queueFamilyProperties[i].minImageTransferGranularity.width >
                   profileQueueFamilyPropertie.minImageTransferGranularity.width) {
            continue;
        } else if (queueFamilyProperties[i].minImageTransferGranularity.height >
                   profileQueueFamilyPropertie.minImageTransferGranularity.height) {
            continue;
        } else if (queueFamilyProperties[i].minImageTransferGranularity.depth >
                   profileQueueFamilyPropertie.minImageTransferGranularity.depth) {
            continue;
        } else if ((queueFamilyProperties[i].queueFlags & profileQueueFamilyPropertie.queueFlags) !=
                   profileQueueFamilyPropertie.queueFlags) {
            continue;
        }

        return true;
    }

    return false;
}

VP_INLINE void _vpGetExtensions(const VpDeviceCreateInfo *pCreateInfo, uint32_t propertyCount,
                             const VkExtensionProperties *pProperties, std::vector<const char *> &extensions) {
    if (pCreateInfo->flags & VP_DEVICE_CREATE_MERGE_EXTENSIONS_BIT) {
        for (int i = 0, n = propertyCount; i < n; ++i) {
            extensions.push_back(pProperties[i].extensionName);
        }

        for (uint32_t i = 0; i < pCreateInfo->pCreateInfo->enabledExtensionCount; ++i) {
            if (_vpCheckExtension(pProperties, propertyCount, pCreateInfo->pCreateInfo->ppEnabledExtensionNames[i])) {
                continue;
            }
            extensions.push_back(pCreateInfo->pCreateInfo->ppEnabledExtensionNames[i]);
        }
    } else {  // or VP_DEVICE_CREATE_OVERRIDE_EXTENSIONS_BIT
        for (int i = 0, n = pCreateInfo->pCreateInfo->enabledExtensionCount; i < n; ++i) {
            extensions.push_back(pCreateInfo->pCreateInfo->ppEnabledExtensionNames[i]);
        }
    }
}

VP_INLINE bool _vpHasStructure(const void* pNext, VkStructureType type) {
    const VkBaseOutStructure *p = static_cast<const VkBaseOutStructure*>(pNext);
    while (p != nullptr) {
        if (p->sType == type) return true;
        p = p->pNext;
    }
    return false;
}

VP_INLINE VkResult vpGetProfiles(uint32_t *pPropertyCount, VpProfileProperties *pProperties) {
    VkResult result = VK_SUCCESS;
    static const VpProfileProperties profiles[] = {
#ifdef VK_USE_PLATFORM_ANDROID_KHR
        { VP_ANDROID_BASELINE_2021_NAME, VP_ANDROID_BASELINE_2021_SPEC_VERSION },
#endif
        { VP_KHR_ROADMAP_2022_NAME, VP_KHR_ROADMAP_2022_SPEC_VERSION },
#ifdef VK_ENABLE_BETA_EXTENSIONS
        { VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_NAME, VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_SPEC_VERSION },
#endif
        { VP_LUNARG_DESKTOP_PORTABILITY_2021_NAME, VP_LUNARG_DESKTOP_PORTABILITY_2021_SPEC_VERSION },
    };

    if (pProperties == nullptr) {
        *pPropertyCount = _vpArraySize(profiles);
    } else {
        if (*pPropertyCount < _vpArraySize(profiles)) {
            result = VK_INCOMPLETE;
        } else {
            *pPropertyCount = _vpArraySize(profiles);
        }
        for (uint32_t i = 0; i < *pPropertyCount; ++i) {
            pProperties[i] = profiles[i];
        }
    }
    return result;
}

VP_INLINE VkResult vpGetProfileFallbacks(const VpProfileProperties *pProfile, uint32_t *pPropertyCount, VpProfileProperties *pProperties) {
    VkResult result = VK_SUCCESS;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (strcmp(pProfile->profileName, VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_NAME) == 0) {
        static const VpProfileProperties VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_fallbacks[] = {
            { VP_LUNARG_DESKTOP_PORTABILITY_2021_NAME, VP_LUNARG_DESKTOP_PORTABILITY_2021_SPEC_VERSION },
        };

        if (pProperties == nullptr) {
            *pPropertyCount = _vpArraySize(VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_fallbacks);
        } else {
            if (*pPropertyCount < _vpArraySize(VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_fallbacks)) {
                result = VK_INCOMPLETE;
            } else {
                *pPropertyCount = _vpArraySize(VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_fallbacks);
            }
            for (uint32_t i = 0; i < *pPropertyCount; ++i) {
                pProperties[i] = VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_fallbacks[i];
            }
        }
    } else
#endif
    {
        *pPropertyCount = 0;
    }
    return result;
}

VP_INLINE VkResult vpGetDeviceProfileSupport(VkPhysicalDevice physicalDevice, const char *pLayerName,
                                             const VpProfileProperties *pProfile, VkBool32 *pSupported) {
    assert(pProfile != nullptr);
    assert(pSupported != nullptr);
    assert(physicalDevice != VK_NULL_HANDLE);

    VkResult result = VK_SUCCESS;

    uint32_t instanceExtensionCount;
    result = vkEnumerateInstanceExtensionProperties(pLayerName, &instanceExtensionCount, nullptr);
    if (result != VK_SUCCESS) return result;
    std::vector<VkExtensionProperties> instanceExtensions(instanceExtensionCount);
    result = vkEnumerateInstanceExtensionProperties(pLayerName, &instanceExtensionCount, instanceExtensions.data());
    if (result != VK_SUCCESS) return result;

    uint32_t deviceExtensionCount;
    result = vkEnumerateDeviceExtensionProperties(physicalDevice, nullptr, &deviceExtensionCount, nullptr);
    if (result != VK_SUCCESS) return result;
    std::vector<VkExtensionProperties> deviceExtensions(deviceExtensionCount);
    result = vkEnumerateDeviceExtensionProperties(physicalDevice, nullptr, &deviceExtensionCount, deviceExtensions.data());
    if (result != VK_SUCCESS) return result;

    *pSupported = VK_FALSE;

#ifdef VK_USE_PLATFORM_ANDROID_KHR
    if (strcmp(pProfile->profileName, VP_ANDROID_BASELINE_2021_NAME) == 0) {
        if (VP_ANDROID_BASELINE_2021_SPEC_VERSION < pProfile->specVersion) return result;

        VkPhysicalDeviceProperties devProps;
        vkGetPhysicalDeviceProperties(physicalDevice, &devProps);
        if (VK_VERSION_PATCH(devProps.apiVersion) < VK_VERSION_PATCH(VP_ANDROID_BASELINE_2021_MIN_API_VERSION)) return result;

        bool extensionsSupported = true;
        for (uint32_t i = 0; i < _vpArraySize(_VP_ANDROID_BASELINE_2021_EXTENSIONS); ++i) {
            const bool supportedInstanceExt = _vpCheckExtension(instanceExtensions.data(), instanceExtensions.size(),
                                                                _VP_ANDROID_BASELINE_2021_EXTENSIONS[i].extensionName);
            const bool supportedDeviceExt = _vpCheckExtension(deviceExtensions.data(), deviceExtensions.size(),
                                                              _VP_ANDROID_BASELINE_2021_EXTENSIONS[i].extensionName);
            if (!supportedInstanceExt && !supportedDeviceExt) {
                extensionsSupported = false;
                break;
            }
        }
        if (!extensionsSupported) return result;

        VkPhysicalDeviceFeatures2 devicePhysicalDeviceFeatures2{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2 };
        VkPhysicalDeviceFeatures2 profilePhysicalDeviceFeatures2{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2 };
        vkGetPhysicalDeviceFeatures2(physicalDevice, &devicePhysicalDeviceFeatures2);
        vpGetProfileStructures(pProfile, &profilePhysicalDeviceFeatures2);
        bool featuresSupported = true
            && (devicePhysicalDeviceFeatures2.features.robustBufferAccess == profilePhysicalDeviceFeatures2.features.robustBufferAccess)
            && (devicePhysicalDeviceFeatures2.features.depthBiasClamp == profilePhysicalDeviceFeatures2.features.depthBiasClamp)
            && (devicePhysicalDeviceFeatures2.features.fragmentStoresAndAtomics == profilePhysicalDeviceFeatures2.features.fragmentStoresAndAtomics)
            && (devicePhysicalDeviceFeatures2.features.fullDrawIndexUint32 == profilePhysicalDeviceFeatures2.features.fullDrawIndexUint32)
            && (devicePhysicalDeviceFeatures2.features.imageCubeArray == profilePhysicalDeviceFeatures2.features.imageCubeArray)
            && (devicePhysicalDeviceFeatures2.features.independentBlend == profilePhysicalDeviceFeatures2.features.independentBlend)
            && (devicePhysicalDeviceFeatures2.features.largePoints == profilePhysicalDeviceFeatures2.features.largePoints)
            && (devicePhysicalDeviceFeatures2.features.shaderImageGatherExtended == profilePhysicalDeviceFeatures2.features.shaderImageGatherExtended)
            && (devicePhysicalDeviceFeatures2.features.shaderInt16 == profilePhysicalDeviceFeatures2.features.shaderInt16)
            && (devicePhysicalDeviceFeatures2.features.shaderSampledImageArrayDynamicIndexing == profilePhysicalDeviceFeatures2.features.shaderSampledImageArrayDynamicIndexing)
            && (devicePhysicalDeviceFeatures2.features.shaderStorageBufferArrayDynamicIndexing == profilePhysicalDeviceFeatures2.features.shaderStorageBufferArrayDynamicIndexing)
            && (devicePhysicalDeviceFeatures2.features.shaderStorageImageArrayDynamicIndexing == profilePhysicalDeviceFeatures2.features.shaderStorageImageArrayDynamicIndexing)
            && (devicePhysicalDeviceFeatures2.features.shaderStorageImageWriteWithoutFormat == profilePhysicalDeviceFeatures2.features.shaderStorageImageWriteWithoutFormat)
            && (devicePhysicalDeviceFeatures2.features.shaderUniformBufferArrayDynamicIndexing == profilePhysicalDeviceFeatures2.features.shaderUniformBufferArrayDynamicIndexing)
            && (devicePhysicalDeviceFeatures2.features.textureCompressionASTC_LDR == profilePhysicalDeviceFeatures2.features.textureCompressionASTC_LDR)
            && (devicePhysicalDeviceFeatures2.features.textureCompressionETC2 == profilePhysicalDeviceFeatures2.features.textureCompressionETC2);
        if (!featuresSupported) return result;

        VkPhysicalDeviceProperties2 devicePhysicalDeviceProperties2{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2 };
        VkPhysicalDeviceProperties2 profilePhysicalDeviceProperties2{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2 };
        vkGetPhysicalDeviceProperties2(physicalDevice, &devicePhysicalDeviceProperties2);
        vpGetProfileStructures(pProfile, &profilePhysicalDeviceProperties2);
        bool propertiesSupported = true
            && (devicePhysicalDeviceProperties2.properties.limits.maxImageDimension1D >= profilePhysicalDeviceProperties2.properties.limits.maxImageDimension1D)
            && (devicePhysicalDeviceProperties2.properties.limits.maxImageDimension2D >= profilePhysicalDeviceProperties2.properties.limits.maxImageDimension2D)
            && (devicePhysicalDeviceProperties2.properties.limits.maxImageDimension3D >= profilePhysicalDeviceProperties2.properties.limits.maxImageDimension3D)
            && (devicePhysicalDeviceProperties2.properties.limits.maxImageDimensionCube >= profilePhysicalDeviceProperties2.properties.limits.maxImageDimensionCube)
            && (devicePhysicalDeviceProperties2.properties.limits.maxImageArrayLayers >= profilePhysicalDeviceProperties2.properties.limits.maxImageArrayLayers)
            && (devicePhysicalDeviceProperties2.properties.limits.maxTexelBufferElements >= profilePhysicalDeviceProperties2.properties.limits.maxTexelBufferElements)
            && (devicePhysicalDeviceProperties2.properties.limits.maxUniformBufferRange >= profilePhysicalDeviceProperties2.properties.limits.maxUniformBufferRange)
            && (devicePhysicalDeviceProperties2.properties.limits.maxStorageBufferRange >= profilePhysicalDeviceProperties2.properties.limits.maxStorageBufferRange)
            && (devicePhysicalDeviceProperties2.properties.limits.maxPushConstantsSize >= profilePhysicalDeviceProperties2.properties.limits.maxPushConstantsSize)
            && (devicePhysicalDeviceProperties2.properties.limits.maxMemoryAllocationCount >= profilePhysicalDeviceProperties2.properties.limits.maxMemoryAllocationCount)
            && (devicePhysicalDeviceProperties2.properties.limits.maxSamplerAllocationCount >= profilePhysicalDeviceProperties2.properties.limits.maxSamplerAllocationCount)
            && (devicePhysicalDeviceProperties2.properties.limits.bufferImageGranularity == profilePhysicalDeviceProperties2.properties.limits.bufferImageGranularity)
            && (devicePhysicalDeviceProperties2.properties.limits.maxBoundDescriptorSets >= profilePhysicalDeviceProperties2.properties.limits.maxBoundDescriptorSets)
            && (devicePhysicalDeviceProperties2.properties.limits.maxPerStageDescriptorSamplers >= profilePhysicalDeviceProperties2.properties.limits.maxPerStageDescriptorSamplers)
            && (devicePhysicalDeviceProperties2.properties.limits.maxPerStageDescriptorUniformBuffers >= profilePhysicalDeviceProperties2.properties.limits.maxPerStageDescriptorUniformBuffers)
            && (devicePhysicalDeviceProperties2.properties.limits.maxPerStageDescriptorStorageBuffers >= profilePhysicalDeviceProperties2.properties.limits.maxPerStageDescriptorStorageBuffers)
            && (devicePhysicalDeviceProperties2.properties.limits.maxPerStageDescriptorSampledImages >= profilePhysicalDeviceProperties2.properties.limits.maxPerStageDescriptorSampledImages)
            && (devicePhysicalDeviceProperties2.properties.limits.maxPerStageDescriptorStorageImages >= profilePhysicalDeviceProperties2.properties.limits.maxPerStageDescriptorStorageImages)
            && (devicePhysicalDeviceProperties2.properties.limits.maxPerStageDescriptorInputAttachments >= profilePhysicalDeviceProperties2.properties.limits.maxPerStageDescriptorInputAttachments)
            && (devicePhysicalDeviceProperties2.properties.limits.maxPerStageResources >= profilePhysicalDeviceProperties2.properties.limits.maxPerStageResources)
            && (devicePhysicalDeviceProperties2.properties.limits.maxDescriptorSetSamplers >= profilePhysicalDeviceProperties2.properties.limits.maxDescriptorSetSamplers)
            && (devicePhysicalDeviceProperties2.properties.limits.maxDescriptorSetUniformBuffers >= profilePhysicalDeviceProperties2.properties.limits.maxDescriptorSetUniformBuffers)
            && (devicePhysicalDeviceProperties2.properties.limits.maxDescriptorSetUniformBuffersDynamic >= profilePhysicalDeviceProperties2.properties.limits.maxDescriptorSetUniformBuffersDynamic)
            && (devicePhysicalDeviceProperties2.properties.limits.maxDescriptorSetStorageBuffers >= profilePhysicalDeviceProperties2.properties.limits.maxDescriptorSetStorageBuffers)
            && (devicePhysicalDeviceProperties2.properties.limits.maxDescriptorSetStorageBuffersDynamic >= profilePhysicalDeviceProperties2.properties.limits.maxDescriptorSetStorageBuffersDynamic)
            && (devicePhysicalDeviceProperties2.properties.limits.maxDescriptorSetSampledImages >= profilePhysicalDeviceProperties2.properties.limits.maxDescriptorSetSampledImages)
            && (devicePhysicalDeviceProperties2.properties.limits.maxDescriptorSetStorageImages >= profilePhysicalDeviceProperties2.properties.limits.maxDescriptorSetStorageImages)
            && (devicePhysicalDeviceProperties2.properties.limits.maxDescriptorSetInputAttachments >= profilePhysicalDeviceProperties2.properties.limits.maxDescriptorSetInputAttachments)
            && (devicePhysicalDeviceProperties2.properties.limits.maxVertexInputAttributes >= profilePhysicalDeviceProperties2.properties.limits.maxVertexInputAttributes)
            && (devicePhysicalDeviceProperties2.properties.limits.maxVertexInputBindings >= profilePhysicalDeviceProperties2.properties.limits.maxVertexInputBindings)
            && (devicePhysicalDeviceProperties2.properties.limits.maxVertexInputAttributeOffset >= profilePhysicalDeviceProperties2.properties.limits.maxVertexInputAttributeOffset)
            && (devicePhysicalDeviceProperties2.properties.limits.maxVertexInputBindingStride >= profilePhysicalDeviceProperties2.properties.limits.maxVertexInputBindingStride)
            && (devicePhysicalDeviceProperties2.properties.limits.maxVertexOutputComponents >= profilePhysicalDeviceProperties2.properties.limits.maxVertexOutputComponents)
            && (devicePhysicalDeviceProperties2.properties.limits.maxTessellationGenerationLevel >= profilePhysicalDeviceProperties2.properties.limits.maxTessellationGenerationLevel)
            && (devicePhysicalDeviceProperties2.properties.limits.maxTessellationPatchSize >= profilePhysicalDeviceProperties2.properties.limits.maxTessellationPatchSize)
            && (devicePhysicalDeviceProperties2.properties.limits.maxTessellationControlPerVertexInputComponents >= profilePhysicalDeviceProperties2.properties.limits.maxTessellationControlPerVertexInputComponents)
            && (devicePhysicalDeviceProperties2.properties.limits.maxTessellationControlPerVertexOutputComponents >= profilePhysicalDeviceProperties2.properties.limits.maxTessellationControlPerVertexOutputComponents)
            && (devicePhysicalDeviceProperties2.properties.limits.maxTessellationControlPerPatchOutputComponents >= profilePhysicalDeviceProperties2.properties.limits.maxTessellationControlPerPatchOutputComponents)
            && (devicePhysicalDeviceProperties2.properties.limits.maxTessellationControlTotalOutputComponents >= profilePhysicalDeviceProperties2.properties.limits.maxTessellationControlTotalOutputComponents)
            && (devicePhysicalDeviceProperties2.properties.limits.maxTessellationEvaluationInputComponents >= profilePhysicalDeviceProperties2.properties.limits.maxTessellationEvaluationInputComponents)
            && (devicePhysicalDeviceProperties2.properties.limits.maxTessellationEvaluationOutputComponents >= profilePhysicalDeviceProperties2.properties.limits.maxTessellationEvaluationOutputComponents)
            && (devicePhysicalDeviceProperties2.properties.limits.maxFragmentInputComponents >= profilePhysicalDeviceProperties2.properties.limits.maxFragmentInputComponents)
            && (devicePhysicalDeviceProperties2.properties.limits.maxFragmentOutputAttachments >= profilePhysicalDeviceProperties2.properties.limits.maxFragmentOutputAttachments)
            && (devicePhysicalDeviceProperties2.properties.limits.maxFragmentDualSrcAttachments >= profilePhysicalDeviceProperties2.properties.limits.maxFragmentDualSrcAttachments)
            && (devicePhysicalDeviceProperties2.properties.limits.maxFragmentCombinedOutputResources >= profilePhysicalDeviceProperties2.properties.limits.maxFragmentCombinedOutputResources)
            && (devicePhysicalDeviceProperties2.properties.limits.maxComputeSharedMemorySize >= profilePhysicalDeviceProperties2.properties.limits.maxComputeSharedMemorySize)
            && (devicePhysicalDeviceProperties2.properties.limits.maxComputeWorkGroupCount[0] >= profilePhysicalDeviceProperties2.properties.limits.maxComputeWorkGroupCount[0])
            && (devicePhysicalDeviceProperties2.properties.limits.maxComputeWorkGroupCount[1] >= profilePhysicalDeviceProperties2.properties.limits.maxComputeWorkGroupCount[1])
            && (devicePhysicalDeviceProperties2.properties.limits.maxComputeWorkGroupCount[2] >= profilePhysicalDeviceProperties2.properties.limits.maxComputeWorkGroupCount[2])
            && (devicePhysicalDeviceProperties2.properties.limits.maxComputeWorkGroupInvocations >= profilePhysicalDeviceProperties2.properties.limits.maxComputeWorkGroupInvocations)
            && (devicePhysicalDeviceProperties2.properties.limits.maxComputeWorkGroupSize[0] >= profilePhysicalDeviceProperties2.properties.limits.maxComputeWorkGroupSize[0])
            && (devicePhysicalDeviceProperties2.properties.limits.maxComputeWorkGroupSize[1] >= profilePhysicalDeviceProperties2.properties.limits.maxComputeWorkGroupSize[1])
            && (devicePhysicalDeviceProperties2.properties.limits.maxComputeWorkGroupSize[2] >= profilePhysicalDeviceProperties2.properties.limits.maxComputeWorkGroupSize[2])
            && (devicePhysicalDeviceProperties2.properties.limits.subPixelPrecisionBits == profilePhysicalDeviceProperties2.properties.limits.subPixelPrecisionBits)
            && (devicePhysicalDeviceProperties2.properties.limits.subTexelPrecisionBits == profilePhysicalDeviceProperties2.properties.limits.subTexelPrecisionBits)
            && (devicePhysicalDeviceProperties2.properties.limits.mipmapPrecisionBits == profilePhysicalDeviceProperties2.properties.limits.mipmapPrecisionBits)
            && (devicePhysicalDeviceProperties2.properties.limits.maxDrawIndexedIndexValue >= profilePhysicalDeviceProperties2.properties.limits.maxDrawIndexedIndexValue)
            && (devicePhysicalDeviceProperties2.properties.limits.maxDrawIndirectCount >= profilePhysicalDeviceProperties2.properties.limits.maxDrawIndirectCount)
            && (devicePhysicalDeviceProperties2.properties.limits.maxSamplerLodBias >= profilePhysicalDeviceProperties2.properties.limits.maxSamplerLodBias)
            && (devicePhysicalDeviceProperties2.properties.limits.maxSamplerAnisotropy >= profilePhysicalDeviceProperties2.properties.limits.maxSamplerAnisotropy)
            && (devicePhysicalDeviceProperties2.properties.limits.maxViewports >= profilePhysicalDeviceProperties2.properties.limits.maxViewports)
            && (devicePhysicalDeviceProperties2.properties.limits.maxViewportDimensions[0] >= profilePhysicalDeviceProperties2.properties.limits.maxViewportDimensions[0])
            && (devicePhysicalDeviceProperties2.properties.limits.maxViewportDimensions[1] >= profilePhysicalDeviceProperties2.properties.limits.maxViewportDimensions[1])
            && (devicePhysicalDeviceProperties2.properties.limits.viewportBoundsRange[0] <= profilePhysicalDeviceProperties2.properties.limits.viewportBoundsRange[0])
            && (devicePhysicalDeviceProperties2.properties.limits.viewportBoundsRange[1] >= profilePhysicalDeviceProperties2.properties.limits.viewportBoundsRange[1])
            && (devicePhysicalDeviceProperties2.properties.limits.viewportSubPixelBits == profilePhysicalDeviceProperties2.properties.limits.viewportSubPixelBits)
            && (devicePhysicalDeviceProperties2.properties.limits.minMemoryMapAlignment == profilePhysicalDeviceProperties2.properties.limits.minMemoryMapAlignment)
            && (devicePhysicalDeviceProperties2.properties.limits.minTexelBufferOffsetAlignment == profilePhysicalDeviceProperties2.properties.limits.minTexelBufferOffsetAlignment)
            && (devicePhysicalDeviceProperties2.properties.limits.minUniformBufferOffsetAlignment == profilePhysicalDeviceProperties2.properties.limits.minUniformBufferOffsetAlignment)
            && (devicePhysicalDeviceProperties2.properties.limits.minStorageBufferOffsetAlignment == profilePhysicalDeviceProperties2.properties.limits.minStorageBufferOffsetAlignment)
            && (devicePhysicalDeviceProperties2.properties.limits.minTexelOffset <= profilePhysicalDeviceProperties2.properties.limits.minTexelOffset)
            && (devicePhysicalDeviceProperties2.properties.limits.maxTexelOffset >= profilePhysicalDeviceProperties2.properties.limits.maxTexelOffset)
            && (devicePhysicalDeviceProperties2.properties.limits.minTexelGatherOffset <= profilePhysicalDeviceProperties2.properties.limits.minTexelGatherOffset)
            && (devicePhysicalDeviceProperties2.properties.limits.maxTexelGatherOffset >= profilePhysicalDeviceProperties2.properties.limits.maxTexelGatherOffset)
            && (devicePhysicalDeviceProperties2.properties.limits.minInterpolationOffset <= profilePhysicalDeviceProperties2.properties.limits.minInterpolationOffset)
            && (devicePhysicalDeviceProperties2.properties.limits.maxInterpolationOffset >= profilePhysicalDeviceProperties2.properties.limits.maxInterpolationOffset)
            && (devicePhysicalDeviceProperties2.properties.limits.subPixelInterpolationOffsetBits == profilePhysicalDeviceProperties2.properties.limits.subPixelInterpolationOffsetBits)
            && (devicePhysicalDeviceProperties2.properties.limits.maxFramebufferWidth >= profilePhysicalDeviceProperties2.properties.limits.maxFramebufferWidth)
            && (devicePhysicalDeviceProperties2.properties.limits.maxFramebufferHeight >= profilePhysicalDeviceProperties2.properties.limits.maxFramebufferHeight)
            && (devicePhysicalDeviceProperties2.properties.limits.maxFramebufferLayers >= profilePhysicalDeviceProperties2.properties.limits.maxFramebufferLayers)
            && ((devicePhysicalDeviceProperties2.properties.limits.framebufferColorSampleCounts & profilePhysicalDeviceProperties2.properties.limits.framebufferColorSampleCounts) == profilePhysicalDeviceProperties2.properties.limits.framebufferColorSampleCounts)
            && ((devicePhysicalDeviceProperties2.properties.limits.framebufferDepthSampleCounts & profilePhysicalDeviceProperties2.properties.limits.framebufferDepthSampleCounts) == profilePhysicalDeviceProperties2.properties.limits.framebufferDepthSampleCounts)
            && ((devicePhysicalDeviceProperties2.properties.limits.framebufferStencilSampleCounts & profilePhysicalDeviceProperties2.properties.limits.framebufferStencilSampleCounts) == profilePhysicalDeviceProperties2.properties.limits.framebufferStencilSampleCounts)
            && ((devicePhysicalDeviceProperties2.properties.limits.framebufferNoAttachmentsSampleCounts & profilePhysicalDeviceProperties2.properties.limits.framebufferNoAttachmentsSampleCounts) == profilePhysicalDeviceProperties2.properties.limits.framebufferNoAttachmentsSampleCounts)
            && ((devicePhysicalDeviceProperties2.properties.limits.maxColorAttachments & profilePhysicalDeviceProperties2.properties.limits.maxColorAttachments) == profilePhysicalDeviceProperties2.properties.limits.maxColorAttachments)
            && ((devicePhysicalDeviceProperties2.properties.limits.sampledImageColorSampleCounts & profilePhysicalDeviceProperties2.properties.limits.sampledImageColorSampleCounts) == profilePhysicalDeviceProperties2.properties.limits.sampledImageColorSampleCounts)
            && ((devicePhysicalDeviceProperties2.properties.limits.sampledImageIntegerSampleCounts & profilePhysicalDeviceProperties2.properties.limits.sampledImageIntegerSampleCounts) == profilePhysicalDeviceProperties2.properties.limits.sampledImageIntegerSampleCounts)
            && ((devicePhysicalDeviceProperties2.properties.limits.sampledImageDepthSampleCounts & profilePhysicalDeviceProperties2.properties.limits.sampledImageDepthSampleCounts) == profilePhysicalDeviceProperties2.properties.limits.sampledImageDepthSampleCounts)
            && ((devicePhysicalDeviceProperties2.properties.limits.sampledImageStencilSampleCounts & profilePhysicalDeviceProperties2.properties.limits.sampledImageStencilSampleCounts) == profilePhysicalDeviceProperties2.properties.limits.sampledImageStencilSampleCounts)
            && ((devicePhysicalDeviceProperties2.properties.limits.storageImageSampleCounts & profilePhysicalDeviceProperties2.properties.limits.storageImageSampleCounts) == profilePhysicalDeviceProperties2.properties.limits.storageImageSampleCounts)
            && (devicePhysicalDeviceProperties2.properties.limits.maxSampleMaskWords >= profilePhysicalDeviceProperties2.properties.limits.maxSampleMaskWords)
            && ((devicePhysicalDeviceProperties2.properties.limits.timestampComputeAndGraphics & profilePhysicalDeviceProperties2.properties.limits.timestampComputeAndGraphics) == profilePhysicalDeviceProperties2.properties.limits.timestampComputeAndGraphics)
            && (devicePhysicalDeviceProperties2.properties.limits.timestampPeriod == profilePhysicalDeviceProperties2.properties.limits.timestampPeriod)
            && (devicePhysicalDeviceProperties2.properties.limits.maxClipDistances >= profilePhysicalDeviceProperties2.properties.limits.maxClipDistances)
            && (devicePhysicalDeviceProperties2.properties.limits.maxCullDistances >= profilePhysicalDeviceProperties2.properties.limits.maxCullDistances)
            && (devicePhysicalDeviceProperties2.properties.limits.maxCombinedClipAndCullDistances >= profilePhysicalDeviceProperties2.properties.limits.maxCombinedClipAndCullDistances)
            && (devicePhysicalDeviceProperties2.properties.limits.discreteQueuePriorities >= profilePhysicalDeviceProperties2.properties.limits.discreteQueuePriorities)
            && (devicePhysicalDeviceProperties2.properties.limits.pointSizeRange[0] <= profilePhysicalDeviceProperties2.properties.limits.pointSizeRange[0])
            && (devicePhysicalDeviceProperties2.properties.limits.pointSizeRange[1] >= profilePhysicalDeviceProperties2.properties.limits.pointSizeRange[1])
            && (devicePhysicalDeviceProperties2.properties.limits.lineWidthRange[0] <= profilePhysicalDeviceProperties2.properties.limits.lineWidthRange[0])
            && (devicePhysicalDeviceProperties2.properties.limits.lineWidthRange[1] >= profilePhysicalDeviceProperties2.properties.limits.lineWidthRange[1])
            && (devicePhysicalDeviceProperties2.properties.limits.pointSizeGranularity >= profilePhysicalDeviceProperties2.properties.limits.pointSizeGranularity)
            && (devicePhysicalDeviceProperties2.properties.limits.strictLines == profilePhysicalDeviceProperties2.properties.limits.strictLines)
            && (devicePhysicalDeviceProperties2.properties.limits.nonCoherentAtomSize == profilePhysicalDeviceProperties2.properties.limits.nonCoherentAtomSize);
        if (!propertiesSupported) return result;
    } else
#endif
    if (strcmp(pProfile->profileName, VP_KHR_ROADMAP_2022_NAME) == 0) {
        if (VP_KHR_ROADMAP_2022_SPEC_VERSION < pProfile->specVersion) return result;

        VkPhysicalDeviceProperties devProps;
        vkGetPhysicalDeviceProperties(physicalDevice, &devProps);
        if (VK_VERSION_PATCH(devProps.apiVersion) < VK_VERSION_PATCH(VP_KHR_ROADMAP_2022_MIN_API_VERSION)) return result;

        bool extensionsSupported = true;
        for (uint32_t i = 0; i < _vpArraySize(_VP_KHR_ROADMAP_2022_EXTENSIONS); ++i) {
            const bool supportedInstanceExt = _vpCheckExtension(instanceExtensions.data(), instanceExtensions.size(),
                                                                _VP_KHR_ROADMAP_2022_EXTENSIONS[i].extensionName);
            const bool supportedDeviceExt = _vpCheckExtension(deviceExtensions.data(), deviceExtensions.size(),
                                                              _VP_KHR_ROADMAP_2022_EXTENSIONS[i].extensionName);
            if (!supportedInstanceExt && !supportedDeviceExt) {
                extensionsSupported = false;
                break;
            }
        }
        if (!extensionsSupported) return result;

        VkPhysicalDeviceFeatures2 devicePhysicalDeviceFeatures2{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2 };
        VkPhysicalDeviceFeatures2 profilePhysicalDeviceFeatures2{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2 };
        VkPhysicalDeviceVulkan11Features devicePhysicalDeviceVulkan11Features{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES };
        VkPhysicalDeviceVulkan11Features profilePhysicalDeviceVulkan11Features{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES };
        profilePhysicalDeviceVulkan11Features.pNext = &profilePhysicalDeviceFeatures2;
        VkPhysicalDeviceVulkan12Features devicePhysicalDeviceVulkan12Features{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES };
        devicePhysicalDeviceVulkan12Features.pNext = &devicePhysicalDeviceVulkan11Features;
        VkPhysicalDeviceVulkan12Features profilePhysicalDeviceVulkan12Features{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES };
        profilePhysicalDeviceVulkan12Features.pNext = &profilePhysicalDeviceVulkan11Features;
        VkPhysicalDeviceVulkan13Features devicePhysicalDeviceVulkan13Features{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES };
        devicePhysicalDeviceVulkan13Features.pNext = &devicePhysicalDeviceVulkan12Features;
        VkPhysicalDeviceVulkan13Features profilePhysicalDeviceVulkan13Features{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES };
        profilePhysicalDeviceVulkan13Features.pNext = &profilePhysicalDeviceVulkan12Features;
        devicePhysicalDeviceFeatures2.pNext = &devicePhysicalDeviceVulkan13Features;
        vkGetPhysicalDeviceFeatures2(physicalDevice, &devicePhysicalDeviceFeatures2);
        vpGetProfileStructures(pProfile, &profilePhysicalDeviceVulkan13Features);
        bool featuresSupported = true
            && (devicePhysicalDeviceFeatures2.features.robustBufferAccess == profilePhysicalDeviceFeatures2.features.robustBufferAccess)
            && (devicePhysicalDeviceFeatures2.features.fullDrawIndexUint32 == profilePhysicalDeviceFeatures2.features.fullDrawIndexUint32)
            && (devicePhysicalDeviceFeatures2.features.imageCubeArray == profilePhysicalDeviceFeatures2.features.imageCubeArray)
            && (devicePhysicalDeviceFeatures2.features.independentBlend == profilePhysicalDeviceFeatures2.features.independentBlend)
            && (devicePhysicalDeviceFeatures2.features.sampleRateShading == profilePhysicalDeviceFeatures2.features.sampleRateShading)
            && (devicePhysicalDeviceFeatures2.features.drawIndirectFirstInstance == profilePhysicalDeviceFeatures2.features.drawIndirectFirstInstance)
            && (devicePhysicalDeviceFeatures2.features.depthClamp == profilePhysicalDeviceFeatures2.features.depthClamp)
            && (devicePhysicalDeviceFeatures2.features.depthBiasClamp == profilePhysicalDeviceFeatures2.features.depthBiasClamp)
            && (devicePhysicalDeviceFeatures2.features.samplerAnisotropy == profilePhysicalDeviceFeatures2.features.samplerAnisotropy)
            && (devicePhysicalDeviceFeatures2.features.occlusionQueryPrecise == profilePhysicalDeviceFeatures2.features.occlusionQueryPrecise)
            && (devicePhysicalDeviceFeatures2.features.fragmentStoresAndAtomics == profilePhysicalDeviceFeatures2.features.fragmentStoresAndAtomics)
            && (devicePhysicalDeviceFeatures2.features.shaderStorageImageExtendedFormats == profilePhysicalDeviceFeatures2.features.shaderStorageImageExtendedFormats)
            && (devicePhysicalDeviceFeatures2.features.shaderUniformBufferArrayDynamicIndexing == profilePhysicalDeviceFeatures2.features.shaderUniformBufferArrayDynamicIndexing)
            && (devicePhysicalDeviceFeatures2.features.shaderSampledImageArrayDynamicIndexing == profilePhysicalDeviceFeatures2.features.shaderSampledImageArrayDynamicIndexing)
            && (devicePhysicalDeviceFeatures2.features.shaderStorageBufferArrayDynamicIndexing == profilePhysicalDeviceFeatures2.features.shaderStorageBufferArrayDynamicIndexing)
            && (devicePhysicalDeviceFeatures2.features.shaderStorageImageArrayDynamicIndexing == profilePhysicalDeviceFeatures2.features.shaderStorageImageArrayDynamicIndexing)
            && (devicePhysicalDeviceVulkan11Features.multiview == profilePhysicalDeviceVulkan11Features.multiview)
            && (devicePhysicalDeviceVulkan11Features.samplerYcbcrConversion == profilePhysicalDeviceVulkan11Features.samplerYcbcrConversion)
            && (devicePhysicalDeviceVulkan12Features.uniformBufferStandardLayout == profilePhysicalDeviceVulkan12Features.uniformBufferStandardLayout)
            && (devicePhysicalDeviceVulkan12Features.subgroupBroadcastDynamicId == profilePhysicalDeviceVulkan12Features.subgroupBroadcastDynamicId)
            && (devicePhysicalDeviceVulkan12Features.imagelessFramebuffer == profilePhysicalDeviceVulkan12Features.imagelessFramebuffer)
            && (devicePhysicalDeviceVulkan12Features.separateDepthStencilLayouts == profilePhysicalDeviceVulkan12Features.separateDepthStencilLayouts)
            && (devicePhysicalDeviceVulkan12Features.hostQueryReset == profilePhysicalDeviceVulkan12Features.hostQueryReset)
            && (devicePhysicalDeviceVulkan12Features.timelineSemaphore == profilePhysicalDeviceVulkan12Features.timelineSemaphore)
            && (devicePhysicalDeviceVulkan12Features.shaderSubgroupExtendedTypes == profilePhysicalDeviceVulkan12Features.shaderSubgroupExtendedTypes)
            && (devicePhysicalDeviceVulkan12Features.vulkanMemoryModel == profilePhysicalDeviceVulkan12Features.vulkanMemoryModel)
            && (devicePhysicalDeviceVulkan12Features.vulkanMemoryModelDeviceScope == profilePhysicalDeviceVulkan12Features.vulkanMemoryModelDeviceScope)
            && (devicePhysicalDeviceVulkan12Features.vulkanMemoryModelAvailabilityVisibilityChains == profilePhysicalDeviceVulkan12Features.vulkanMemoryModelAvailabilityVisibilityChains)
            && (devicePhysicalDeviceVulkan12Features.bufferDeviceAddress == profilePhysicalDeviceVulkan12Features.bufferDeviceAddress)
            && (devicePhysicalDeviceVulkan12Features.samplerMirrorClampToEdge == profilePhysicalDeviceVulkan12Features.samplerMirrorClampToEdge)
            && (devicePhysicalDeviceVulkan12Features.descriptorIndexing == profilePhysicalDeviceVulkan12Features.descriptorIndexing)
            && (devicePhysicalDeviceVulkan12Features.shaderUniformTexelBufferArrayDynamicIndexing == profilePhysicalDeviceVulkan12Features.shaderUniformTexelBufferArrayDynamicIndexing)
            && (devicePhysicalDeviceVulkan12Features.shaderStorageTexelBufferArrayDynamicIndexing == profilePhysicalDeviceVulkan12Features.shaderStorageTexelBufferArrayDynamicIndexing)
            && (devicePhysicalDeviceVulkan12Features.shaderUniformBufferArrayNonUniformIndexing == profilePhysicalDeviceVulkan12Features.shaderUniformBufferArrayNonUniformIndexing)
            && (devicePhysicalDeviceVulkan12Features.shaderSampledImageArrayNonUniformIndexing == profilePhysicalDeviceVulkan12Features.shaderSampledImageArrayNonUniformIndexing)
            && (devicePhysicalDeviceVulkan12Features.shaderStorageBufferArrayNonUniformIndexing == profilePhysicalDeviceVulkan12Features.shaderStorageBufferArrayNonUniformIndexing)
            && (devicePhysicalDeviceVulkan12Features.shaderStorageImageArrayNonUniformIndexing == profilePhysicalDeviceVulkan12Features.shaderStorageImageArrayNonUniformIndexing)
            && (devicePhysicalDeviceVulkan12Features.shaderUniformTexelBufferArrayNonUniformIndexing == profilePhysicalDeviceVulkan12Features.shaderUniformTexelBufferArrayNonUniformIndexing)
            && (devicePhysicalDeviceVulkan12Features.shaderStorageTexelBufferArrayNonUniformIndexing == profilePhysicalDeviceVulkan12Features.shaderStorageTexelBufferArrayNonUniformIndexing)
            && (devicePhysicalDeviceVulkan12Features.descriptorBindingUniformBufferUpdateAfterBind == profilePhysicalDeviceVulkan12Features.descriptorBindingUniformBufferUpdateAfterBind)
            && (devicePhysicalDeviceVulkan12Features.descriptorBindingSampledImageUpdateAfterBind == profilePhysicalDeviceVulkan12Features.descriptorBindingSampledImageUpdateAfterBind)
            && (devicePhysicalDeviceVulkan12Features.descriptorBindingStorageImageUpdateAfterBind == profilePhysicalDeviceVulkan12Features.descriptorBindingStorageImageUpdateAfterBind)
            && (devicePhysicalDeviceVulkan12Features.descriptorBindingStorageBufferUpdateAfterBind == profilePhysicalDeviceVulkan12Features.descriptorBindingStorageBufferUpdateAfterBind)
            && (devicePhysicalDeviceVulkan12Features.descriptorBindingUniformTexelBufferUpdateAfterBind == profilePhysicalDeviceVulkan12Features.descriptorBindingUniformTexelBufferUpdateAfterBind)
            && (devicePhysicalDeviceVulkan12Features.descriptorBindingStorageTexelBufferUpdateAfterBind == profilePhysicalDeviceVulkan12Features.descriptorBindingStorageTexelBufferUpdateAfterBind)
            && (devicePhysicalDeviceVulkan12Features.descriptorBindingUpdateUnusedWhilePending == profilePhysicalDeviceVulkan12Features.descriptorBindingUpdateUnusedWhilePending)
            && (devicePhysicalDeviceVulkan12Features.descriptorBindingPartiallyBound == profilePhysicalDeviceVulkan12Features.descriptorBindingPartiallyBound)
            && (devicePhysicalDeviceVulkan12Features.descriptorBindingVariableDescriptorCount == profilePhysicalDeviceVulkan12Features.descriptorBindingVariableDescriptorCount)
            && (devicePhysicalDeviceVulkan12Features.runtimeDescriptorArray == profilePhysicalDeviceVulkan12Features.runtimeDescriptorArray)
            && (devicePhysicalDeviceVulkan12Features.scalarBlockLayout == profilePhysicalDeviceVulkan12Features.scalarBlockLayout)
            && (devicePhysicalDeviceVulkan13Features.robustImageAccess == profilePhysicalDeviceVulkan13Features.robustImageAccess)
            && (devicePhysicalDeviceVulkan13Features.shaderTerminateInvocation == profilePhysicalDeviceVulkan13Features.shaderTerminateInvocation)
            && (devicePhysicalDeviceVulkan13Features.shaderZeroInitializeWorkgroupMemory == profilePhysicalDeviceVulkan13Features.shaderZeroInitializeWorkgroupMemory)
            && (devicePhysicalDeviceVulkan13Features.synchronization2 == profilePhysicalDeviceVulkan13Features.synchronization2)
            && (devicePhysicalDeviceVulkan13Features.shaderIntegerDotProduct == profilePhysicalDeviceVulkan13Features.shaderIntegerDotProduct)
            && (devicePhysicalDeviceVulkan13Features.maintenance4 == profilePhysicalDeviceVulkan13Features.maintenance4)
            && (devicePhysicalDeviceVulkan13Features.pipelineCreationCacheControl == profilePhysicalDeviceVulkan13Features.pipelineCreationCacheControl)
            && (devicePhysicalDeviceVulkan13Features.subgroupSizeControl == profilePhysicalDeviceVulkan13Features.subgroupSizeControl)
            && (devicePhysicalDeviceVulkan13Features.computeFullSubgroups == profilePhysicalDeviceVulkan13Features.computeFullSubgroups)
            && (devicePhysicalDeviceVulkan13Features.shaderDemoteToHelperInvocation == profilePhysicalDeviceVulkan13Features.shaderDemoteToHelperInvocation)
            && (devicePhysicalDeviceVulkan13Features.inlineUniformBlock == profilePhysicalDeviceVulkan13Features.inlineUniformBlock)
            && (devicePhysicalDeviceVulkan13Features.descriptorBindingInlineUniformBlockUpdateAfterBind == profilePhysicalDeviceVulkan13Features.descriptorBindingInlineUniformBlockUpdateAfterBind);
        if (!featuresSupported) return result;

        VkPhysicalDeviceVulkan11Properties devicePhysicalDeviceVulkan11Properties{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES };
        VkPhysicalDeviceVulkan11Properties profilePhysicalDeviceVulkan11Properties{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES };
        VkPhysicalDeviceVulkan12Properties devicePhysicalDeviceVulkan12Properties{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES };
        devicePhysicalDeviceVulkan12Properties.pNext = &devicePhysicalDeviceVulkan11Properties;
        VkPhysicalDeviceVulkan12Properties profilePhysicalDeviceVulkan12Properties{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES };
        profilePhysicalDeviceVulkan12Properties.pNext = &profilePhysicalDeviceVulkan11Properties;
        VkPhysicalDeviceVulkan13Properties devicePhysicalDeviceVulkan13Properties{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_PROPERTIES };
        devicePhysicalDeviceVulkan13Properties.pNext = &devicePhysicalDeviceVulkan12Properties;
        VkPhysicalDeviceVulkan13Properties profilePhysicalDeviceVulkan13Properties{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_PROPERTIES };
        profilePhysicalDeviceVulkan13Properties.pNext = &profilePhysicalDeviceVulkan12Properties;
        VkPhysicalDeviceProperties2 devicePhysicalDeviceProperties2{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2 };
        VkPhysicalDeviceProperties2 profilePhysicalDeviceProperties2{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2 };
        profilePhysicalDeviceProperties2.pNext = &profilePhysicalDeviceVulkan13Properties;
        devicePhysicalDeviceProperties2.pNext = &devicePhysicalDeviceVulkan13Properties;
        vkGetPhysicalDeviceProperties2(physicalDevice, &devicePhysicalDeviceProperties2);
        vpGetProfileStructures(pProfile, &profilePhysicalDeviceProperties2);
        bool propertiesSupported = true
            && (devicePhysicalDeviceVulkan11Properties.maxMultiviewViewCount >= profilePhysicalDeviceVulkan11Properties.maxMultiviewViewCount)
            && (devicePhysicalDeviceVulkan11Properties.maxMultiviewInstanceIndex >= profilePhysicalDeviceVulkan11Properties.maxMultiviewInstanceIndex)
            && (devicePhysicalDeviceVulkan11Properties.subgroupSize == profilePhysicalDeviceVulkan11Properties.subgroupSize)
            && ((devicePhysicalDeviceVulkan11Properties.subgroupSupportedStages & profilePhysicalDeviceVulkan11Properties.subgroupSupportedStages) == profilePhysicalDeviceVulkan11Properties.subgroupSupportedStages)
            && ((devicePhysicalDeviceVulkan11Properties.subgroupSupportedOperations & profilePhysicalDeviceVulkan11Properties.subgroupSupportedOperations) == profilePhysicalDeviceVulkan11Properties.subgroupSupportedOperations)
            && (devicePhysicalDeviceVulkan12Properties.maxTimelineSemaphoreValueDifference >= profilePhysicalDeviceVulkan12Properties.maxTimelineSemaphoreValueDifference)
            && ((devicePhysicalDeviceVulkan12Properties.shaderSignedZeroInfNanPreserveFloat16 & profilePhysicalDeviceVulkan12Properties.shaderSignedZeroInfNanPreserveFloat16) == profilePhysicalDeviceVulkan12Properties.shaderSignedZeroInfNanPreserveFloat16)
            && ((devicePhysicalDeviceVulkan12Properties.shaderSignedZeroInfNanPreserveFloat32 & profilePhysicalDeviceVulkan12Properties.shaderSignedZeroInfNanPreserveFloat32) == profilePhysicalDeviceVulkan12Properties.shaderSignedZeroInfNanPreserveFloat32)
            && (devicePhysicalDeviceVulkan12Properties.maxPerStageDescriptorUpdateAfterBindSamplers >= profilePhysicalDeviceVulkan12Properties.maxPerStageDescriptorUpdateAfterBindSamplers)
            && (devicePhysicalDeviceVulkan12Properties.maxPerStageDescriptorUpdateAfterBindUniformBuffers >= profilePhysicalDeviceVulkan12Properties.maxPerStageDescriptorUpdateAfterBindUniformBuffers)
            && (devicePhysicalDeviceVulkan12Properties.maxPerStageDescriptorUpdateAfterBindStorageBuffers >= profilePhysicalDeviceVulkan12Properties.maxPerStageDescriptorUpdateAfterBindStorageBuffers)
            && (devicePhysicalDeviceVulkan12Properties.maxPerStageDescriptorUpdateAfterBindSampledImages >= profilePhysicalDeviceVulkan12Properties.maxPerStageDescriptorUpdateAfterBindSampledImages)
            && (devicePhysicalDeviceVulkan12Properties.maxPerStageDescriptorUpdateAfterBindStorageImages >= profilePhysicalDeviceVulkan12Properties.maxPerStageDescriptorUpdateAfterBindStorageImages)
            && (devicePhysicalDeviceVulkan12Properties.maxPerStageDescriptorUpdateAfterBindInputAttachments >= profilePhysicalDeviceVulkan12Properties.maxPerStageDescriptorUpdateAfterBindInputAttachments)
            && (devicePhysicalDeviceVulkan12Properties.maxPerStageUpdateAfterBindResources >= profilePhysicalDeviceVulkan12Properties.maxPerStageUpdateAfterBindResources)
            && (devicePhysicalDeviceVulkan12Properties.maxDescriptorSetUpdateAfterBindSamplers >= profilePhysicalDeviceVulkan12Properties.maxDescriptorSetUpdateAfterBindSamplers)
            && (devicePhysicalDeviceVulkan12Properties.maxDescriptorSetUpdateAfterBindUniformBuffers >= profilePhysicalDeviceVulkan12Properties.maxDescriptorSetUpdateAfterBindUniformBuffers)
            && (devicePhysicalDeviceVulkan12Properties.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic >= profilePhysicalDeviceVulkan12Properties.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic)
            && (devicePhysicalDeviceVulkan12Properties.maxDescriptorSetUpdateAfterBindStorageBuffers >= profilePhysicalDeviceVulkan12Properties.maxDescriptorSetUpdateAfterBindStorageBuffers)
            && (devicePhysicalDeviceVulkan12Properties.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic >= profilePhysicalDeviceVulkan12Properties.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic)
            && (devicePhysicalDeviceVulkan12Properties.maxDescriptorSetUpdateAfterBindSampledImages >= profilePhysicalDeviceVulkan12Properties.maxDescriptorSetUpdateAfterBindSampledImages)
            && (devicePhysicalDeviceVulkan12Properties.maxDescriptorSetUpdateAfterBindStorageImages >= profilePhysicalDeviceVulkan12Properties.maxDescriptorSetUpdateAfterBindStorageImages)
            && (devicePhysicalDeviceVulkan12Properties.maxDescriptorSetUpdateAfterBindInputAttachments >= profilePhysicalDeviceVulkan12Properties.maxDescriptorSetUpdateAfterBindInputAttachments)
            && (devicePhysicalDeviceVulkan13Properties.maxBufferSize >= profilePhysicalDeviceVulkan13Properties.maxBufferSize)
            && (devicePhysicalDeviceVulkan13Properties.maxInlineUniformBlockSize >= profilePhysicalDeviceVulkan13Properties.maxInlineUniformBlockSize)
            && (devicePhysicalDeviceVulkan13Properties.maxPerStageDescriptorInlineUniformBlocks >= profilePhysicalDeviceVulkan13Properties.maxPerStageDescriptorInlineUniformBlocks)
            && (devicePhysicalDeviceVulkan13Properties.maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks >= profilePhysicalDeviceVulkan13Properties.maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks)
            && (devicePhysicalDeviceVulkan13Properties.maxDescriptorSetInlineUniformBlocks >= profilePhysicalDeviceVulkan13Properties.maxDescriptorSetInlineUniformBlocks)
            && (devicePhysicalDeviceVulkan13Properties.maxDescriptorSetUpdateAfterBindInlineUniformBlocks >= profilePhysicalDeviceVulkan13Properties.maxDescriptorSetUpdateAfterBindInlineUniformBlocks)
            && (devicePhysicalDeviceVulkan13Properties.maxInlineUniformTotalSize >= profilePhysicalDeviceVulkan13Properties.maxInlineUniformTotalSize)
            && (devicePhysicalDeviceProperties2.properties.limits.maxImageDimension1D >= profilePhysicalDeviceProperties2.properties.limits.maxImageDimension1D)
            && (devicePhysicalDeviceProperties2.properties.limits.maxImageDimension2D >= profilePhysicalDeviceProperties2.properties.limits.maxImageDimension2D)
            && (devicePhysicalDeviceProperties2.properties.limits.maxImageDimensionCube >= profilePhysicalDeviceProperties2.properties.limits.maxImageDimensionCube)
            && (devicePhysicalDeviceProperties2.properties.limits.maxImageArrayLayers >= profilePhysicalDeviceProperties2.properties.limits.maxImageArrayLayers)
            && (devicePhysicalDeviceProperties2.properties.limits.maxUniformBufferRange >= profilePhysicalDeviceProperties2.properties.limits.maxUniformBufferRange)
            && (devicePhysicalDeviceProperties2.properties.limits.bufferImageGranularity == profilePhysicalDeviceProperties2.properties.limits.bufferImageGranularity)
            && (devicePhysicalDeviceProperties2.properties.limits.maxPerStageDescriptorSamplers >= profilePhysicalDeviceProperties2.properties.limits.maxPerStageDescriptorSamplers)
            && (devicePhysicalDeviceProperties2.properties.limits.maxPerStageDescriptorUniformBuffers >= profilePhysicalDeviceProperties2.properties.limits.maxPerStageDescriptorUniformBuffers)
            && (devicePhysicalDeviceProperties2.properties.limits.maxPerStageDescriptorStorageBuffers >= profilePhysicalDeviceProperties2.properties.limits.maxPerStageDescriptorStorageBuffers)
            && (devicePhysicalDeviceProperties2.properties.limits.maxPerStageDescriptorSampledImages >= profilePhysicalDeviceProperties2.properties.limits.maxPerStageDescriptorSampledImages)
            && (devicePhysicalDeviceProperties2.properties.limits.maxPerStageDescriptorStorageImages >= profilePhysicalDeviceProperties2.properties.limits.maxPerStageDescriptorStorageImages)
            && (devicePhysicalDeviceProperties2.properties.limits.maxPerStageResources >= profilePhysicalDeviceProperties2.properties.limits.maxPerStageResources)
            && (devicePhysicalDeviceProperties2.properties.limits.maxDescriptorSetSamplers >= profilePhysicalDeviceProperties2.properties.limits.maxDescriptorSetSamplers)
            && (devicePhysicalDeviceProperties2.properties.limits.maxDescriptorSetUniformBuffers >= profilePhysicalDeviceProperties2.properties.limits.maxDescriptorSetUniformBuffers)
            && (devicePhysicalDeviceProperties2.properties.limits.maxDescriptorSetStorageBuffers >= profilePhysicalDeviceProperties2.properties.limits.maxDescriptorSetStorageBuffers)
            && (devicePhysicalDeviceProperties2.properties.limits.maxDescriptorSetSampledImages >= profilePhysicalDeviceProperties2.properties.limits.maxDescriptorSetSampledImages)
            && (devicePhysicalDeviceProperties2.properties.limits.maxDescriptorSetStorageImages >= profilePhysicalDeviceProperties2.properties.limits.maxDescriptorSetStorageImages)
            && (devicePhysicalDeviceProperties2.properties.limits.maxFragmentCombinedOutputResources >= profilePhysicalDeviceProperties2.properties.limits.maxFragmentCombinedOutputResources)
            && (devicePhysicalDeviceProperties2.properties.limits.maxComputeWorkGroupInvocations >= profilePhysicalDeviceProperties2.properties.limits.maxComputeWorkGroupInvocations)
            && (devicePhysicalDeviceProperties2.properties.limits.maxComputeWorkGroupSize[0] >= profilePhysicalDeviceProperties2.properties.limits.maxComputeWorkGroupSize[0])
            && (devicePhysicalDeviceProperties2.properties.limits.maxComputeWorkGroupSize[1] >= profilePhysicalDeviceProperties2.properties.limits.maxComputeWorkGroupSize[1])
            && (devicePhysicalDeviceProperties2.properties.limits.maxComputeWorkGroupSize[2] >= profilePhysicalDeviceProperties2.properties.limits.maxComputeWorkGroupSize[2])
            && (devicePhysicalDeviceProperties2.properties.limits.subTexelPrecisionBits == profilePhysicalDeviceProperties2.properties.limits.subTexelPrecisionBits)
            && (devicePhysicalDeviceProperties2.properties.limits.mipmapPrecisionBits == profilePhysicalDeviceProperties2.properties.limits.mipmapPrecisionBits)
            && (devicePhysicalDeviceProperties2.properties.limits.maxSamplerLodBias >= profilePhysicalDeviceProperties2.properties.limits.maxSamplerLodBias)
            && (devicePhysicalDeviceProperties2.properties.limits.pointSizeGranularity >= profilePhysicalDeviceProperties2.properties.limits.pointSizeGranularity)
            && (devicePhysicalDeviceProperties2.properties.limits.lineWidthGranularity >= profilePhysicalDeviceProperties2.properties.limits.lineWidthGranularity)
            && (devicePhysicalDeviceProperties2.properties.limits.standardSampleLocations == profilePhysicalDeviceProperties2.properties.limits.standardSampleLocations)
            && ((devicePhysicalDeviceProperties2.properties.limits.maxColorAttachments & profilePhysicalDeviceProperties2.properties.limits.maxColorAttachments) == profilePhysicalDeviceProperties2.properties.limits.maxColorAttachments);
        if (!propertiesSupported) return result;
    } else
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (strcmp(pProfile->profileName, VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_NAME) == 0) {
        if (VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_SPEC_VERSION < pProfile->specVersion) return result;

        VkPhysicalDeviceProperties devProps;
        vkGetPhysicalDeviceProperties(physicalDevice, &devProps);
        if (VK_VERSION_PATCH(devProps.apiVersion) < VK_VERSION_PATCH(VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_MIN_API_VERSION)) return result;

        bool extensionsSupported = true;
        for (uint32_t i = 0; i < _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_EXTENSIONS); ++i) {
            const bool supportedInstanceExt = _vpCheckExtension(instanceExtensions.data(), instanceExtensions.size(),
                                                                _VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_EXTENSIONS[i].extensionName);
            const bool supportedDeviceExt = _vpCheckExtension(deviceExtensions.data(), deviceExtensions.size(),
                                                              _VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_EXTENSIONS[i].extensionName);
            if (!supportedInstanceExt && !supportedDeviceExt) {
                extensionsSupported = false;
                break;
            }
        }
        if (!extensionsSupported) return result;

        VkPhysicalDeviceFeatures2 devicePhysicalDeviceFeatures2{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2 };
        VkPhysicalDeviceFeatures2 profilePhysicalDeviceFeatures2{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2 };
        VkPhysicalDevicePortabilitySubsetFeaturesKHR devicePhysicalDevicePortabilitySubsetFeaturesKHR{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_FEATURES_KHR };
        VkPhysicalDevicePortabilitySubsetFeaturesKHR profilePhysicalDevicePortabilitySubsetFeaturesKHR{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_FEATURES_KHR };
        profilePhysicalDevicePortabilitySubsetFeaturesKHR.pNext = &profilePhysicalDeviceFeatures2;
        devicePhysicalDeviceFeatures2.pNext = &devicePhysicalDevicePortabilitySubsetFeaturesKHR;
        vkGetPhysicalDeviceFeatures2(physicalDevice, &devicePhysicalDeviceFeatures2);
        vpGetProfileStructures(pProfile, &profilePhysicalDevicePortabilitySubsetFeaturesKHR);
        bool featuresSupported = true
            && (devicePhysicalDeviceFeatures2.features.depthBiasClamp == profilePhysicalDeviceFeatures2.features.depthBiasClamp)
            && (devicePhysicalDeviceFeatures2.features.depthClamp == profilePhysicalDeviceFeatures2.features.depthClamp)
            && (devicePhysicalDeviceFeatures2.features.drawIndirectFirstInstance == profilePhysicalDeviceFeatures2.features.drawIndirectFirstInstance)
            && (devicePhysicalDeviceFeatures2.features.dualSrcBlend == profilePhysicalDeviceFeatures2.features.dualSrcBlend)
            && (devicePhysicalDevicePortabilitySubsetFeaturesKHR.vertexAttributeAccessBeyondStride == profilePhysicalDevicePortabilitySubsetFeaturesKHR.vertexAttributeAccessBeyondStride)
            && (devicePhysicalDevicePortabilitySubsetFeaturesKHR.separateStencilMaskRef == profilePhysicalDevicePortabilitySubsetFeaturesKHR.separateStencilMaskRef)
            && (devicePhysicalDevicePortabilitySubsetFeaturesKHR.mutableComparisonSamplers == profilePhysicalDevicePortabilitySubsetFeaturesKHR.mutableComparisonSamplers)
            && (devicePhysicalDevicePortabilitySubsetFeaturesKHR.multisampleArrayImage == profilePhysicalDevicePortabilitySubsetFeaturesKHR.multisampleArrayImage)
            && (devicePhysicalDevicePortabilitySubsetFeaturesKHR.imageViewFormatSwizzle == profilePhysicalDevicePortabilitySubsetFeaturesKHR.imageViewFormatSwizzle)
            && (devicePhysicalDevicePortabilitySubsetFeaturesKHR.imageViewFormatReinterpretation == profilePhysicalDevicePortabilitySubsetFeaturesKHR.imageViewFormatReinterpretation)
            && (devicePhysicalDevicePortabilitySubsetFeaturesKHR.events == profilePhysicalDevicePortabilitySubsetFeaturesKHR.events)
            && (devicePhysicalDevicePortabilitySubsetFeaturesKHR.constantAlphaColorBlendFactors == profilePhysicalDevicePortabilitySubsetFeaturesKHR.constantAlphaColorBlendFactors);
        if (!featuresSupported) return result;

        VkPhysicalDeviceProperties2 devicePhysicalDeviceProperties2{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2 };
        VkPhysicalDeviceProperties2 profilePhysicalDeviceProperties2{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2 };
        VkPhysicalDevicePortabilitySubsetPropertiesKHR devicePhysicalDevicePortabilitySubsetPropertiesKHR{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_PROPERTIES_KHR };
        VkPhysicalDevicePortabilitySubsetPropertiesKHR profilePhysicalDevicePortabilitySubsetPropertiesKHR{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_PROPERTIES_KHR };
        profilePhysicalDevicePortabilitySubsetPropertiesKHR.pNext = &profilePhysicalDeviceProperties2;
        devicePhysicalDeviceProperties2.pNext = &devicePhysicalDevicePortabilitySubsetPropertiesKHR;
        vkGetPhysicalDeviceProperties2(physicalDevice, &devicePhysicalDeviceProperties2);
        vpGetProfileStructures(pProfile, &profilePhysicalDevicePortabilitySubsetPropertiesKHR);
        bool propertiesSupported = true
            && (devicePhysicalDeviceProperties2.properties.limits.maxImageDimension1D >= profilePhysicalDeviceProperties2.properties.limits.maxImageDimension1D)
            && (devicePhysicalDeviceProperties2.properties.limits.maxImageDimension2D >= profilePhysicalDeviceProperties2.properties.limits.maxImageDimension2D)
            && (devicePhysicalDeviceProperties2.properties.limits.maxImageDimension3D >= profilePhysicalDeviceProperties2.properties.limits.maxImageDimension3D)
            && (devicePhysicalDeviceProperties2.properties.limits.maxImageDimensionCube >= profilePhysicalDeviceProperties2.properties.limits.maxImageDimensionCube)
            && (devicePhysicalDeviceProperties2.properties.limits.maxImageArrayLayers >= profilePhysicalDeviceProperties2.properties.limits.maxImageArrayLayers)
            && (devicePhysicalDevicePortabilitySubsetPropertiesKHR.minVertexInputBindingStrideAlignment == profilePhysicalDevicePortabilitySubsetPropertiesKHR.minVertexInputBindingStrideAlignment);
        if (!propertiesSupported) return result;

        uint32_t queueFamilyCount = 0;
        vkGetPhysicalDeviceQueueFamilyProperties(physicalDevice, &queueFamilyCount, nullptr);
        std::vector<VkQueueFamilyProperties> queueFamilies(queueFamilyCount);
        vkGetPhysicalDeviceQueueFamilyProperties(physicalDevice, &queueFamilyCount, queueFamilies.data());

        bool queueFamiliesSupported = true;
        for (uint32_t i = 0; i < _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_QUEUE_FAMILY_PROPERTIES); ++i) {
            if (!_vpCheckQueueFamilyProperty(&queueFamilies[0], queueFamilyCount, _VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_QUEUE_FAMILY_PROPERTIES[i])) {
                queueFamiliesSupported = false;
                break;
            }
        }
        if (!queueFamiliesSupported) return result;
    } else
#endif
    if (strcmp(pProfile->profileName, VP_LUNARG_DESKTOP_PORTABILITY_2021_NAME) == 0) {
        if (VP_LUNARG_DESKTOP_PORTABILITY_2021_SPEC_VERSION < pProfile->specVersion) return result;

        VkPhysicalDeviceProperties devProps;
        vkGetPhysicalDeviceProperties(physicalDevice, &devProps);
        if (VK_VERSION_PATCH(devProps.apiVersion) < VK_VERSION_PATCH(VP_LUNARG_DESKTOP_PORTABILITY_2021_MIN_API_VERSION)) return result;

        bool extensionsSupported = true;
        for (uint32_t i = 0; i < _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_EXTENSIONS); ++i) {
            const bool supportedInstanceExt = _vpCheckExtension(instanceExtensions.data(), instanceExtensions.size(),
                                                                _VP_LUNARG_DESKTOP_PORTABILITY_2021_EXTENSIONS[i].extensionName);
            const bool supportedDeviceExt = _vpCheckExtension(deviceExtensions.data(), deviceExtensions.size(),
                                                              _VP_LUNARG_DESKTOP_PORTABILITY_2021_EXTENSIONS[i].extensionName);
            if (!supportedInstanceExt && !supportedDeviceExt) {
                extensionsSupported = false;
                break;
            }
        }
        if (!extensionsSupported) return result;

        VkPhysicalDeviceFeatures2 devicePhysicalDeviceFeatures2{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2 };
        VkPhysicalDeviceFeatures2 profilePhysicalDeviceFeatures2{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2 };
        vkGetPhysicalDeviceFeatures2(physicalDevice, &devicePhysicalDeviceFeatures2);
        vpGetProfileStructures(pProfile, &profilePhysicalDeviceFeatures2);
        bool featuresSupported = true
            && (devicePhysicalDeviceFeatures2.features.depthBiasClamp == profilePhysicalDeviceFeatures2.features.depthBiasClamp)
            && (devicePhysicalDeviceFeatures2.features.depthClamp == profilePhysicalDeviceFeatures2.features.depthClamp)
            && (devicePhysicalDeviceFeatures2.features.drawIndirectFirstInstance == profilePhysicalDeviceFeatures2.features.drawIndirectFirstInstance)
            && (devicePhysicalDeviceFeatures2.features.dualSrcBlend == profilePhysicalDeviceFeatures2.features.dualSrcBlend);
        if (!featuresSupported) return result;

        VkPhysicalDeviceProperties2 devicePhysicalDeviceProperties2{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2 };
        VkPhysicalDeviceProperties2 profilePhysicalDeviceProperties2{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2 };
        vkGetPhysicalDeviceProperties2(physicalDevice, &devicePhysicalDeviceProperties2);
        vpGetProfileStructures(pProfile, &profilePhysicalDeviceProperties2);
        bool propertiesSupported = true
            && (devicePhysicalDeviceProperties2.properties.limits.maxImageDimension1D >= profilePhysicalDeviceProperties2.properties.limits.maxImageDimension1D)
            && (devicePhysicalDeviceProperties2.properties.limits.maxImageDimension2D >= profilePhysicalDeviceProperties2.properties.limits.maxImageDimension2D)
            && (devicePhysicalDeviceProperties2.properties.limits.maxImageDimension3D >= profilePhysicalDeviceProperties2.properties.limits.maxImageDimension3D)
            && (devicePhysicalDeviceProperties2.properties.limits.maxImageDimensionCube >= profilePhysicalDeviceProperties2.properties.limits.maxImageDimensionCube)
            && (devicePhysicalDeviceProperties2.properties.limits.maxImageArrayLayers >= profilePhysicalDeviceProperties2.properties.limits.maxImageArrayLayers);
        if (!propertiesSupported) return result;

        uint32_t queueFamilyCount = 0;
        vkGetPhysicalDeviceQueueFamilyProperties(physicalDevice, &queueFamilyCount, nullptr);
        std::vector<VkQueueFamilyProperties> queueFamilies(queueFamilyCount);
        vkGetPhysicalDeviceQueueFamilyProperties(physicalDevice, &queueFamilyCount, queueFamilies.data());

        bool queueFamiliesSupported = true;
        for (uint32_t i = 0; i < _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_QUEUE_FAMILY_PROPERTIES); ++i) {
            if (!_vpCheckQueueFamilyProperty(&queueFamilies[0], queueFamilyCount, _VP_LUNARG_DESKTOP_PORTABILITY_2021_QUEUE_FAMILY_PROPERTIES[i])) {
                queueFamiliesSupported = false;
                break;
            }
        }
        if (!queueFamiliesSupported) return result;
    } else
    {
        return result;
    }

    *pSupported = VK_TRUE;
    return result;
}

VP_INLINE VkResult vpCreateDevice(VkPhysicalDevice physicalDevice, const VpDeviceCreateInfo *pCreateInfo,
                                  const VkAllocationCallbacks *pAllocator, VkDevice *pDevice) {
    assert(pCreateInfo != nullptr);

    if (physicalDevice == VK_NULL_HANDLE || pCreateInfo == nullptr || pDevice == nullptr) {
        return vkCreateDevice(physicalDevice, pCreateInfo == nullptr ? nullptr : pCreateInfo->pCreateInfo, pAllocator, pDevice);
    } else if (pCreateInfo->pProfile == nullptr || strcmp(pCreateInfo->pProfile->profileName, "") == 0) {
        return vkCreateDevice(physicalDevice, pCreateInfo->pCreateInfo, pAllocator, pDevice);
    } else
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    if (strcmp(pCreateInfo->pProfile->profileName, VP_ANDROID_BASELINE_2021_NAME) == 0) {
        std::vector<const char*> extensions;
        _vpGetExtensions(pCreateInfo, _vpArraySize(_VP_ANDROID_BASELINE_2021_EXTENSIONS), &_VP_ANDROID_BASELINE_2021_EXTENSIONS[0], extensions);

        void *pNext = const_cast<void*>(pCreateInfo->pCreateInfo->pNext);
        VkPhysicalDeviceFeatures2 profilePhysicalDeviceFeatures2{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2 };
        vpGetProfileStructures(pCreateInfo->pProfile, &profilePhysicalDeviceFeatures2);
        if (pCreateInfo->pCreateInfo->pEnabledFeatures != nullptr) {
            profilePhysicalDeviceFeatures2.features = *pCreateInfo->pCreateInfo->pEnabledFeatures;
        }
        if (pCreateInfo->flags & VP_DEVICE_CREATE_DISABLE_ROBUST_BUFFER_ACCESS_BIT) {
            profilePhysicalDeviceFeatures2.features.robustBufferAccess = VK_FALSE;
        }
        if (!_vpHasStructure(pNext, VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2) && pCreateInfo->pCreateInfo->pEnabledFeatures == nullptr) {
            profilePhysicalDeviceFeatures2.pNext = pNext;
            pNext = &profilePhysicalDeviceFeatures2;
        }

        VkDeviceCreateInfo deviceCreateInfo{ VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO };
        deviceCreateInfo.pNext = pNext;
        deviceCreateInfo.queueCreateInfoCount = pCreateInfo->pCreateInfo->queueCreateInfoCount;
        deviceCreateInfo.pQueueCreateInfos = pCreateInfo->pCreateInfo->pQueueCreateInfos;
        deviceCreateInfo.enabledExtensionCount = static_cast<uint32_t>(extensions.size());
        deviceCreateInfo.ppEnabledExtensionNames = extensions.data();
        return vkCreateDevice(physicalDevice, &deviceCreateInfo, pAllocator, pDevice);
    } else
#endif
    if (strcmp(pCreateInfo->pProfile->profileName, VP_KHR_ROADMAP_2022_NAME) == 0) {
        std::vector<const char*> extensions;
        _vpGetExtensions(pCreateInfo, _vpArraySize(_VP_KHR_ROADMAP_2022_EXTENSIONS), &_VP_KHR_ROADMAP_2022_EXTENSIONS[0], extensions);

        void *pNext = const_cast<void*>(pCreateInfo->pCreateInfo->pNext);
        VkPhysicalDeviceFeatures2 profilePhysicalDeviceFeatures2{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2 };
        VkPhysicalDeviceVulkan11Features profilePhysicalDeviceVulkan11Features{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES };
        profilePhysicalDeviceVulkan11Features.pNext = &profilePhysicalDeviceFeatures2;
        VkPhysicalDeviceVulkan12Features profilePhysicalDeviceVulkan12Features{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES };
        profilePhysicalDeviceVulkan12Features.pNext = &profilePhysicalDeviceVulkan11Features;
        VkPhysicalDeviceVulkan13Features profilePhysicalDeviceVulkan13Features{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES };
        profilePhysicalDeviceVulkan13Features.pNext = &profilePhysicalDeviceVulkan12Features;
        vpGetProfileStructures(pCreateInfo->pProfile, &profilePhysicalDeviceVulkan13Features);
        if (pCreateInfo->pCreateInfo->pEnabledFeatures != nullptr) {
            profilePhysicalDeviceFeatures2.features = *pCreateInfo->pCreateInfo->pEnabledFeatures;
        }
        if (pCreateInfo->flags & VP_DEVICE_CREATE_DISABLE_ROBUST_BUFFER_ACCESS_BIT) {
            profilePhysicalDeviceFeatures2.features.robustBufferAccess = VK_FALSE;
        }
        if (!_vpHasStructure(pNext, VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2) && pCreateInfo->pCreateInfo->pEnabledFeatures == nullptr) {
            profilePhysicalDeviceFeatures2.pNext = pNext;
            pNext = &profilePhysicalDeviceFeatures2;
        }
        if (!_vpHasStructure(pNext, VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES)) {
            profilePhysicalDeviceVulkan11Features.pNext = pNext;
            pNext = &profilePhysicalDeviceVulkan11Features;
        }
        if (!_vpHasStructure(pNext, VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES)) {
            profilePhysicalDeviceVulkan12Features.pNext = pNext;
            pNext = &profilePhysicalDeviceVulkan12Features;
        }
        if (!_vpHasStructure(pNext, VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES)) {
            profilePhysicalDeviceVulkan13Features.pNext = pNext;
            pNext = &profilePhysicalDeviceVulkan13Features;
        }

        VkDeviceCreateInfo deviceCreateInfo{ VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO };
        deviceCreateInfo.pNext = pNext;
        deviceCreateInfo.queueCreateInfoCount = pCreateInfo->pCreateInfo->queueCreateInfoCount;
        deviceCreateInfo.pQueueCreateInfos = pCreateInfo->pCreateInfo->pQueueCreateInfos;
        deviceCreateInfo.enabledExtensionCount = static_cast<uint32_t>(extensions.size());
        deviceCreateInfo.ppEnabledExtensionNames = extensions.data();
        return vkCreateDevice(physicalDevice, &deviceCreateInfo, pAllocator, pDevice);
    } else
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (strcmp(pCreateInfo->pProfile->profileName, VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_NAME) == 0) {
        std::vector<const char*> extensions;
        _vpGetExtensions(pCreateInfo, _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_EXTENSIONS), &_VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_EXTENSIONS[0], extensions);

        void *pNext = const_cast<void*>(pCreateInfo->pCreateInfo->pNext);
        VkPhysicalDeviceFeatures2 profilePhysicalDeviceFeatures2{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2 };
        VkPhysicalDevicePortabilitySubsetFeaturesKHR profilePhysicalDevicePortabilitySubsetFeaturesKHR{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_FEATURES_KHR };
        profilePhysicalDevicePortabilitySubsetFeaturesKHR.pNext = &profilePhysicalDeviceFeatures2;
        vpGetProfileStructures(pCreateInfo->pProfile, &profilePhysicalDevicePortabilitySubsetFeaturesKHR);
        if (pCreateInfo->pCreateInfo->pEnabledFeatures != nullptr) {
            profilePhysicalDeviceFeatures2.features = *pCreateInfo->pCreateInfo->pEnabledFeatures;
        }
        if (pCreateInfo->flags & VP_DEVICE_CREATE_DISABLE_ROBUST_BUFFER_ACCESS_BIT) {
            profilePhysicalDeviceFeatures2.features.robustBufferAccess = VK_FALSE;
        }
        if (!_vpHasStructure(pNext, VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2) && pCreateInfo->pCreateInfo->pEnabledFeatures == nullptr) {
            profilePhysicalDeviceFeatures2.pNext = pNext;
            pNext = &profilePhysicalDeviceFeatures2;
        }
        if (!_vpHasStructure(pNext, VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_FEATURES_KHR)) {
            profilePhysicalDevicePortabilitySubsetFeaturesKHR.pNext = pNext;
            pNext = &profilePhysicalDevicePortabilitySubsetFeaturesKHR;
        }

        VkDeviceCreateInfo deviceCreateInfo{ VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO };
        deviceCreateInfo.pNext = pNext;
        deviceCreateInfo.queueCreateInfoCount = pCreateInfo->pCreateInfo->queueCreateInfoCount;
        deviceCreateInfo.pQueueCreateInfos = pCreateInfo->pCreateInfo->pQueueCreateInfos;
        deviceCreateInfo.enabledExtensionCount = static_cast<uint32_t>(extensions.size());
        deviceCreateInfo.ppEnabledExtensionNames = extensions.data();
        return vkCreateDevice(physicalDevice, &deviceCreateInfo, pAllocator, pDevice);
    } else
#endif
    if (strcmp(pCreateInfo->pProfile->profileName, VP_LUNARG_DESKTOP_PORTABILITY_2021_NAME) == 0) {
        std::vector<const char*> extensions;
        _vpGetExtensions(pCreateInfo, _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_EXTENSIONS), &_VP_LUNARG_DESKTOP_PORTABILITY_2021_EXTENSIONS[0], extensions);

        void *pNext = const_cast<void*>(pCreateInfo->pCreateInfo->pNext);
        VkPhysicalDeviceFeatures2 profilePhysicalDeviceFeatures2{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2 };
        vpGetProfileStructures(pCreateInfo->pProfile, &profilePhysicalDeviceFeatures2);
        if (pCreateInfo->pCreateInfo->pEnabledFeatures != nullptr) {
            profilePhysicalDeviceFeatures2.features = *pCreateInfo->pCreateInfo->pEnabledFeatures;
        }
        if (pCreateInfo->flags & VP_DEVICE_CREATE_DISABLE_ROBUST_BUFFER_ACCESS_BIT) {
            profilePhysicalDeviceFeatures2.features.robustBufferAccess = VK_FALSE;
        }
        if (!_vpHasStructure(pNext, VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2) && pCreateInfo->pCreateInfo->pEnabledFeatures == nullptr) {
            profilePhysicalDeviceFeatures2.pNext = pNext;
            pNext = &profilePhysicalDeviceFeatures2;
        }

        VkDeviceCreateInfo deviceCreateInfo{ VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO };
        deviceCreateInfo.pNext = pNext;
        deviceCreateInfo.queueCreateInfoCount = pCreateInfo->pCreateInfo->queueCreateInfoCount;
        deviceCreateInfo.pQueueCreateInfos = pCreateInfo->pCreateInfo->pQueueCreateInfos;
        deviceCreateInfo.enabledExtensionCount = static_cast<uint32_t>(extensions.size());
        deviceCreateInfo.ppEnabledExtensionNames = extensions.data();
        return vkCreateDevice(physicalDevice, &deviceCreateInfo, pAllocator, pDevice);
    } else
    {
        return VK_ERROR_UNKNOWN;
    }
}

VP_INLINE VkResult vpGetProfileExtensionProperties(const VpProfileProperties *pProfile, uint32_t *pPropertyCount,
                                                   VkExtensionProperties *pProperties) {
    VkResult result = VK_SUCCESS;
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    if (strcmp(pProfile->profileName, VP_ANDROID_BASELINE_2021_NAME) == 0) {
        if (pProperties == nullptr) {
            *pPropertyCount = _vpArraySize(_VP_ANDROID_BASELINE_2021_EXTENSIONS);
        } else {
            if (*pPropertyCount < _vpArraySize(_VP_ANDROID_BASELINE_2021_EXTENSIONS)) {
                result = VK_INCOMPLETE;
            } else {
                *pPropertyCount = _vpArraySize(_VP_ANDROID_BASELINE_2021_EXTENSIONS);
            }
            for (uint32_t i = 0; i < *pPropertyCount; ++i) {
                pProperties[i] = _VP_ANDROID_BASELINE_2021_EXTENSIONS[i];
            }
        }
    } else
#endif
    if (strcmp(pProfile->profileName, VP_KHR_ROADMAP_2022_NAME) == 0) {
        if (pProperties == nullptr) {
            *pPropertyCount = _vpArraySize(_VP_KHR_ROADMAP_2022_EXTENSIONS);
        } else {
            if (*pPropertyCount < _vpArraySize(_VP_KHR_ROADMAP_2022_EXTENSIONS)) {
                result = VK_INCOMPLETE;
            } else {
                *pPropertyCount = _vpArraySize(_VP_KHR_ROADMAP_2022_EXTENSIONS);
            }
            for (uint32_t i = 0; i < *pPropertyCount; ++i) {
                pProperties[i] = _VP_KHR_ROADMAP_2022_EXTENSIONS[i];
            }
        }
    } else
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (strcmp(pProfile->profileName, VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_NAME) == 0) {
        if (pProperties == nullptr) {
            *pPropertyCount = _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_EXTENSIONS);
        } else {
            if (*pPropertyCount < _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_EXTENSIONS)) {
                result = VK_INCOMPLETE;
            } else {
                *pPropertyCount = _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_EXTENSIONS);
            }
            for (uint32_t i = 0; i < *pPropertyCount; ++i) {
                pProperties[i] = _VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_EXTENSIONS[i];
            }
        }
    } else
#endif
    if (strcmp(pProfile->profileName, VP_LUNARG_DESKTOP_PORTABILITY_2021_NAME) == 0) {
        if (pProperties == nullptr) {
            *pPropertyCount = _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_EXTENSIONS);
        } else {
            if (*pPropertyCount < _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_EXTENSIONS)) {
                result = VK_INCOMPLETE;
            } else {
                *pPropertyCount = _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_EXTENSIONS);
            }
            for (uint32_t i = 0; i < *pPropertyCount; ++i) {
                pProperties[i] = _VP_LUNARG_DESKTOP_PORTABILITY_2021_EXTENSIONS[i];
            }
        }
    } else
    {
        *pPropertyCount = 0;
    }
    return result;
}

VP_INLINE void vpGetProfileStructures(const VpProfileProperties *pProfile, void *pNext) {
    if (pProfile == nullptr || pNext == nullptr) return;
    VkBaseOutStructure* p = static_cast<VkBaseOutStructure*>(pNext);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    if (strcmp(pProfile->profileName, VP_ANDROID_BASELINE_2021_NAME) == 0) {
        while (p != nullptr) {
            switch (p->sType) {
                case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2: {
                    VkPhysicalDeviceFeatures2* wrap = reinterpret_cast<VkPhysicalDeviceFeatures2*>(p);
                    VkPhysicalDeviceFeatures* features = &wrap->features;
                    features->robustBufferAccess = VK_TRUE;
                    features->depthBiasClamp = VK_TRUE;
                    features->fragmentStoresAndAtomics = VK_TRUE;
                    features->fullDrawIndexUint32 = VK_TRUE;
                    features->imageCubeArray = VK_TRUE;
                    features->independentBlend = VK_TRUE;
                    features->largePoints = VK_TRUE;
                    features->shaderImageGatherExtended = VK_TRUE;
                    features->shaderInt16 = VK_TRUE;
                    features->shaderSampledImageArrayDynamicIndexing = VK_TRUE;
                    features->shaderStorageBufferArrayDynamicIndexing = VK_TRUE;
                    features->shaderStorageImageArrayDynamicIndexing = VK_TRUE;
                    features->shaderStorageImageWriteWithoutFormat = VK_TRUE;
                    features->shaderUniformBufferArrayDynamicIndexing = VK_TRUE;
                    features->textureCompressionASTC_LDR = VK_TRUE;
                    features->textureCompressionETC2 = VK_TRUE;
                } break;
                case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2: {
                    VkPhysicalDeviceProperties2* wrap = reinterpret_cast<VkPhysicalDeviceProperties2*>(p);
                    VkPhysicalDeviceProperties* props = &wrap->properties;
                    props->limits.maxImageDimension1D = 16384;
                    props->limits.maxImageDimension2D = 8192;
                    props->limits.maxImageDimension3D = 4096;
                    props->limits.maxImageDimensionCube = 8192;
                    props->limits.maxImageArrayLayers = 256;
                    props->limits.maxTexelBufferElements = 65536;
                    props->limits.maxUniformBufferRange = 65536;
                    props->limits.maxStorageBufferRange = 268435456;
                    props->limits.maxPushConstantsSize = 128;
                    props->limits.maxMemoryAllocationCount = 4294967295;
                    props->limits.maxSamplerAllocationCount = 16384;
                    props->limits.bufferImageGranularity = 4096;
                    props->limits.maxBoundDescriptorSets = 4;
                    props->limits.maxPerStageDescriptorSamplers = 128;
                    props->limits.maxPerStageDescriptorUniformBuffers = 12;
                    props->limits.maxPerStageDescriptorStorageBuffers = 35;
                    props->limits.maxPerStageDescriptorSampledImages = 16;
                    props->limits.maxPerStageDescriptorStorageImages = 8;
                    props->limits.maxPerStageDescriptorInputAttachments = 4;
                    props->limits.maxPerStageResources = 79;
                    props->limits.maxDescriptorSetSamplers = 768;
                    props->limits.maxDescriptorSetUniformBuffers = 72;
                    props->limits.maxDescriptorSetUniformBuffersDynamic = 8;
                    props->limits.maxDescriptorSetStorageBuffers = 72;
                    props->limits.maxDescriptorSetStorageBuffersDynamic = 4;
                    props->limits.maxDescriptorSetSampledImages = 96;
                    props->limits.maxDescriptorSetStorageImages = 48;
                    props->limits.maxDescriptorSetInputAttachments = 4;
                    props->limits.maxVertexInputAttributes = 16;
                    props->limits.maxVertexInputBindings = 16;
                    props->limits.maxVertexInputAttributeOffset = 2047;
                    props->limits.maxVertexInputBindingStride = 2048;
                    props->limits.maxVertexOutputComponents = 128;
                    props->limits.maxTessellationGenerationLevel = 64;
                    props->limits.maxTessellationPatchSize = 32;
                    props->limits.maxTessellationControlPerVertexInputComponents = 128;
                    props->limits.maxTessellationControlPerVertexOutputComponents = 128;
                    props->limits.maxTessellationControlPerPatchOutputComponents = 120;
                    props->limits.maxTessellationControlTotalOutputComponents = 4096;
                    props->limits.maxTessellationEvaluationInputComponents = 128;
                    props->limits.maxTessellationEvaluationOutputComponents = 128;
                    props->limits.maxFragmentInputComponents = 128;
                    props->limits.maxFragmentOutputAttachments = 4;
                    props->limits.maxFragmentDualSrcAttachments = 0;
                    props->limits.maxFragmentCombinedOutputResources = 47;
                    props->limits.maxComputeSharedMemorySize = 32768;
                    props->limits.maxComputeWorkGroupCount[0] = 65535;
                    props->limits.maxComputeWorkGroupCount[1] = 65535;
                    props->limits.maxComputeWorkGroupCount[2] = 65535;
                    props->limits.maxComputeWorkGroupInvocations = 128;
                    props->limits.maxComputeWorkGroupSize[0] = 128;
                    props->limits.maxComputeWorkGroupSize[1] = 128;
                    props->limits.maxComputeWorkGroupSize[2] = 128;
                    props->limits.subPixelPrecisionBits = 8;
                    props->limits.subTexelPrecisionBits = 8;
                    props->limits.mipmapPrecisionBits = 8;
                    props->limits.maxDrawIndexedIndexValue = 4294967295;
                    props->limits.maxDrawIndirectCount = 1;
                    props->limits.maxSamplerLodBias = 15.9961;
                    props->limits.maxSamplerAnisotropy = 1.0;
                    props->limits.maxViewports = 1;
                    props->limits.maxViewportDimensions[0] = 8192;
                    props->limits.maxViewportDimensions[1] = 8192;
                    props->limits.viewportBoundsRange[0] = -32768;
                    props->limits.viewportBoundsRange[1] = 32767;
                    props->limits.viewportSubPixelBits = 0;
                    props->limits.minMemoryMapAlignment = 64;
                    props->limits.minTexelBufferOffsetAlignment = 256;
                    props->limits.minUniformBufferOffsetAlignment = 64;
                    props->limits.minStorageBufferOffsetAlignment = 256;
                    props->limits.minTexelOffset = -8;
                    props->limits.maxTexelOffset = 7;
                    props->limits.minTexelGatherOffset = -8;
                    props->limits.maxTexelGatherOffset = 7;
                    props->limits.minInterpolationOffset = -0.5;
                    props->limits.maxInterpolationOffset = 0.5;
                    props->limits.subPixelInterpolationOffsetBits = 4;
                    props->limits.maxFramebufferWidth = 8192;
                    props->limits.maxFramebufferHeight = 8192;
                    props->limits.maxFramebufferLayers = 256;
                    props->limits.framebufferColorSampleCounts = VK_SAMPLE_COUNT_1_BIT | VK_SAMPLE_COUNT_4_BIT;
                    props->limits.framebufferDepthSampleCounts = VK_SAMPLE_COUNT_1_BIT | VK_SAMPLE_COUNT_4_BIT;
                    props->limits.framebufferStencilSampleCounts = VK_SAMPLE_COUNT_1_BIT | VK_SAMPLE_COUNT_4_BIT;
                    props->limits.framebufferNoAttachmentsSampleCounts = VK_SAMPLE_COUNT_1_BIT | VK_SAMPLE_COUNT_4_BIT;
                    props->limits.maxColorAttachments = 4;
                    props->limits.sampledImageColorSampleCounts = VK_SAMPLE_COUNT_1_BIT | VK_SAMPLE_COUNT_4_BIT;
                    props->limits.sampledImageIntegerSampleCounts = VK_SAMPLE_COUNT_1_BIT;
                    props->limits.sampledImageDepthSampleCounts = VK_SAMPLE_COUNT_1_BIT | VK_SAMPLE_COUNT_4_BIT;
                    props->limits.sampledImageStencilSampleCounts = VK_SAMPLE_COUNT_1_BIT | VK_SAMPLE_COUNT_4_BIT;
                    props->limits.storageImageSampleCounts = VK_SAMPLE_COUNT_1_BIT;
                    props->limits.maxSampleMaskWords = 1;
                    props->limits.timestampComputeAndGraphics = VK_TRUE;
                    props->limits.timestampPeriod = 38.4615;
                    props->limits.maxClipDistances = 0;
                    props->limits.maxCullDistances = 0;
                    props->limits.maxCombinedClipAndCullDistances = 0;
                    props->limits.discreteQueuePriorities = 2;
                    props->limits.pointSizeRange[0] = 1.0;
                    props->limits.pointSizeRange[1] = 1024.0;
                    props->limits.lineWidthRange[0] = 1.0;
                    props->limits.lineWidthRange[1] = 1.0;
                    props->limits.pointSizeGranularity = 0.0625;
                    props->limits.strictLines = VK_TRUE;
                    props->limits.nonCoherentAtomSize = 64;
                } break;
                default: break;
            }
            p = p->pNext;
        }
    } else
#endif
    if (strcmp(pProfile->profileName, VP_KHR_ROADMAP_2022_NAME) == 0) {
        while (p != nullptr) {
            switch (p->sType) {
                case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2: {
                    VkPhysicalDeviceFeatures2* wrap = reinterpret_cast<VkPhysicalDeviceFeatures2*>(p);
                    VkPhysicalDeviceFeatures* features = &wrap->features;
                    features->robustBufferAccess = VK_TRUE;
                    features->fullDrawIndexUint32 = VK_TRUE;
                    features->imageCubeArray = VK_TRUE;
                    features->independentBlend = VK_TRUE;
                    features->sampleRateShading = VK_TRUE;
                    features->drawIndirectFirstInstance = VK_TRUE;
                    features->depthClamp = VK_TRUE;
                    features->depthBiasClamp = VK_TRUE;
                    features->samplerAnisotropy = VK_TRUE;
                    features->occlusionQueryPrecise = VK_TRUE;
                    features->fragmentStoresAndAtomics = VK_TRUE;
                    features->shaderStorageImageExtendedFormats = VK_TRUE;
                    features->shaderUniformBufferArrayDynamicIndexing = VK_TRUE;
                    features->shaderSampledImageArrayDynamicIndexing = VK_TRUE;
                    features->shaderStorageBufferArrayDynamicIndexing = VK_TRUE;
                    features->shaderStorageImageArrayDynamicIndexing = VK_TRUE;
                } break;
                case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES: {
                    VkPhysicalDeviceVulkan11Features* features = reinterpret_cast<VkPhysicalDeviceVulkan11Features*>(p);
                    features->multiview = VK_TRUE;
                    features->samplerYcbcrConversion = VK_TRUE;
                } break;
                case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES: {
                    VkPhysicalDeviceVulkan12Features* features = reinterpret_cast<VkPhysicalDeviceVulkan12Features*>(p);
                    features->uniformBufferStandardLayout = VK_TRUE;
                    features->subgroupBroadcastDynamicId = VK_TRUE;
                    features->imagelessFramebuffer = VK_TRUE;
                    features->separateDepthStencilLayouts = VK_TRUE;
                    features->hostQueryReset = VK_TRUE;
                    features->timelineSemaphore = VK_TRUE;
                    features->shaderSubgroupExtendedTypes = VK_TRUE;
                    features->vulkanMemoryModel = VK_TRUE;
                    features->vulkanMemoryModelDeviceScope = VK_TRUE;
                    features->vulkanMemoryModelAvailabilityVisibilityChains = VK_TRUE;
                    features->bufferDeviceAddress = VK_TRUE;
                    features->samplerMirrorClampToEdge = VK_TRUE;
                    features->descriptorIndexing = VK_TRUE;
                    features->shaderUniformTexelBufferArrayDynamicIndexing = VK_TRUE;
                    features->shaderStorageTexelBufferArrayDynamicIndexing = VK_TRUE;
                    features->shaderUniformBufferArrayNonUniformIndexing = VK_TRUE;
                    features->shaderSampledImageArrayNonUniformIndexing = VK_TRUE;
                    features->shaderStorageBufferArrayNonUniformIndexing = VK_TRUE;
                    features->shaderStorageImageArrayNonUniformIndexing = VK_TRUE;
                    features->shaderUniformTexelBufferArrayNonUniformIndexing = VK_TRUE;
                    features->shaderStorageTexelBufferArrayNonUniformIndexing = VK_TRUE;
                    features->descriptorBindingUniformBufferUpdateAfterBind = VK_TRUE;
                    features->descriptorBindingSampledImageUpdateAfterBind = VK_TRUE;
                    features->descriptorBindingStorageImageUpdateAfterBind = VK_TRUE;
                    features->descriptorBindingStorageBufferUpdateAfterBind = VK_TRUE;
                    features->descriptorBindingUniformTexelBufferUpdateAfterBind = VK_TRUE;
                    features->descriptorBindingStorageTexelBufferUpdateAfterBind = VK_TRUE;
                    features->descriptorBindingUpdateUnusedWhilePending = VK_TRUE;
                    features->descriptorBindingPartiallyBound = VK_TRUE;
                    features->descriptorBindingVariableDescriptorCount = VK_TRUE;
                    features->runtimeDescriptorArray = VK_TRUE;
                    features->scalarBlockLayout = VK_TRUE;
                } break;
                case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES: {
                    VkPhysicalDeviceVulkan13Features* features = reinterpret_cast<VkPhysicalDeviceVulkan13Features*>(p);
                    features->robustImageAccess = VK_TRUE;
                    features->shaderTerminateInvocation = VK_TRUE;
                    features->shaderZeroInitializeWorkgroupMemory = VK_TRUE;
                    features->synchronization2 = VK_TRUE;
                    features->shaderIntegerDotProduct = VK_TRUE;
                    features->maintenance4 = VK_TRUE;
                    features->pipelineCreationCacheControl = VK_TRUE;
                    features->subgroupSizeControl = VK_TRUE;
                    features->computeFullSubgroups = VK_TRUE;
                    features->shaderDemoteToHelperInvocation = VK_TRUE;
                    features->inlineUniformBlock = VK_TRUE;
                    features->descriptorBindingInlineUniformBlockUpdateAfterBind = VK_TRUE;
                } break;
                case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES: {
                    VkPhysicalDeviceVulkan11Properties* props = reinterpret_cast<VkPhysicalDeviceVulkan11Properties*>(p);
                    props->maxMultiviewViewCount = 6;
                    props->maxMultiviewInstanceIndex = 134217727;
                    props->subgroupSize = 4;
                    props->subgroupSupportedStages = VK_SHADER_STAGE_COMPUTE_BIT | VK_SHADER_STAGE_FRAGMENT_BIT;
                    props->subgroupSupportedOperations = VK_SUBGROUP_FEATURE_BASIC_BIT | VK_SUBGROUP_FEATURE_VOTE_BIT | VK_SUBGROUP_FEATURE_ARITHMETIC_BIT | VK_SUBGROUP_FEATURE_BALLOT_BIT | VK_SUBGROUP_FEATURE_SHUFFLE_BIT | VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT | VK_SUBGROUP_FEATURE_QUAD_BIT;
                } break;
                case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES: {
                    VkPhysicalDeviceVulkan12Properties* props = reinterpret_cast<VkPhysicalDeviceVulkan12Properties*>(p);
                    props->maxTimelineSemaphoreValueDifference = 2147483647;
                    props->shaderSignedZeroInfNanPreserveFloat16 = VK_TRUE;
                    props->shaderSignedZeroInfNanPreserveFloat32 = VK_TRUE;
                    props->maxPerStageDescriptorUpdateAfterBindSamplers = 500000;
                    props->maxPerStageDescriptorUpdateAfterBindUniformBuffers = 12;
                    props->maxPerStageDescriptorUpdateAfterBindStorageBuffers = 500000;
                    props->maxPerStageDescriptorUpdateAfterBindSampledImages = 500000;
                    props->maxPerStageDescriptorUpdateAfterBindStorageImages = 500000;
                    props->maxPerStageDescriptorUpdateAfterBindInputAttachments = 7;
                    props->maxPerStageUpdateAfterBindResources = 500000;
                    props->maxDescriptorSetUpdateAfterBindSamplers = 500000;
                    props->maxDescriptorSetUpdateAfterBindUniformBuffers = 72;
                    props->maxDescriptorSetUpdateAfterBindUniformBuffersDynamic = 8;
                    props->maxDescriptorSetUpdateAfterBindStorageBuffers = 500000;
                    props->maxDescriptorSetUpdateAfterBindStorageBuffersDynamic = 4;
                    props->maxDescriptorSetUpdateAfterBindSampledImages = 500000;
                    props->maxDescriptorSetUpdateAfterBindStorageImages = 500000;
                    props->maxDescriptorSetUpdateAfterBindInputAttachments = 7;
                } break;
                case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_PROPERTIES: {
                    VkPhysicalDeviceVulkan13Properties* props = reinterpret_cast<VkPhysicalDeviceVulkan13Properties*>(p);
                    props->maxBufferSize = 1073741824;
                    props->maxInlineUniformBlockSize = 256;
                    props->maxPerStageDescriptorInlineUniformBlocks = 4;
                    props->maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks = 4;
                    props->maxDescriptorSetInlineUniformBlocks = 4;
                    props->maxDescriptorSetUpdateAfterBindInlineUniformBlocks = 4;
                    props->maxInlineUniformTotalSize = 4;
                } break;
                case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2: {
                    VkPhysicalDeviceProperties2* wrap = reinterpret_cast<VkPhysicalDeviceProperties2*>(p);
                    VkPhysicalDeviceProperties* props = &wrap->properties;
                    props->limits.maxImageDimension1D = 8192;
                    props->limits.maxImageDimension2D = 8192;
                    props->limits.maxImageDimensionCube = 8192;
                    props->limits.maxImageArrayLayers = 2048;
                    props->limits.maxUniformBufferRange = 65536;
                    props->limits.bufferImageGranularity = 4096;
                    props->limits.maxPerStageDescriptorSamplers = 64;
                    props->limits.maxPerStageDescriptorUniformBuffers = 15;
                    props->limits.maxPerStageDescriptorStorageBuffers = 30;
                    props->limits.maxPerStageDescriptorSampledImages = 200;
                    props->limits.maxPerStageDescriptorStorageImages = 16;
                    props->limits.maxPerStageResources = 200;
                    props->limits.maxDescriptorSetSamplers = 576;
                    props->limits.maxDescriptorSetUniformBuffers = 90;
                    props->limits.maxDescriptorSetStorageBuffers = 96;
                    props->limits.maxDescriptorSetSampledImages = 1800;
                    props->limits.maxDescriptorSetStorageImages = 144;
                    props->limits.maxFragmentCombinedOutputResources = 16;
                    props->limits.maxComputeWorkGroupInvocations = 256;
                    props->limits.maxComputeWorkGroupSize[0] = 1024;
                    props->limits.maxComputeWorkGroupSize[1] = 1024;
                    props->limits.maxComputeWorkGroupSize[2] = 64;
                    props->limits.subTexelPrecisionBits = 8;
                    props->limits.mipmapPrecisionBits = 6;
                    props->limits.maxSamplerLodBias = 14;
                    props->limits.pointSizeGranularity = 0.125;
                    props->limits.lineWidthGranularity = 0.5;
                    props->limits.standardSampleLocations = VK_TRUE;
                    props->limits.maxColorAttachments = 7;
                } break;
                default: break;
            }
            p = p->pNext;
        }
    } else
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (strcmp(pProfile->profileName, VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_NAME) == 0) {
        while (p != nullptr) {
            switch (p->sType) {
                case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2: {
                    VkPhysicalDeviceFeatures2* wrap = reinterpret_cast<VkPhysicalDeviceFeatures2*>(p);
                    VkPhysicalDeviceFeatures* features = &wrap->features;
                    features->depthBiasClamp = VK_TRUE;
                    features->depthClamp = VK_TRUE;
                    features->drawIndirectFirstInstance = VK_TRUE;
                    features->dualSrcBlend = VK_TRUE;
                } break;
                case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_FEATURES_KHR: {
                    VkPhysicalDevicePortabilitySubsetFeaturesKHR* features = reinterpret_cast<VkPhysicalDevicePortabilitySubsetFeaturesKHR*>(p);
                    features->vertexAttributeAccessBeyondStride = VK_TRUE;
                    features->separateStencilMaskRef = VK_TRUE;
                    features->mutableComparisonSamplers = VK_TRUE;
                    features->multisampleArrayImage = VK_TRUE;
                    features->imageViewFormatSwizzle = VK_TRUE;
                    features->imageViewFormatReinterpretation = VK_TRUE;
                    features->events = VK_TRUE;
                    features->constantAlphaColorBlendFactors = VK_TRUE;
                } break;
                case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2: {
                    VkPhysicalDeviceProperties2* wrap = reinterpret_cast<VkPhysicalDeviceProperties2*>(p);
                    VkPhysicalDeviceProperties* props = &wrap->properties;
                    props->limits.maxImageDimension1D = 16384;
                    props->limits.maxImageDimension2D = 16384;
                    props->limits.maxImageDimension3D = 2048;
                    props->limits.maxImageDimensionCube = 16384;
                    props->limits.maxImageArrayLayers = 2048;
                } break;
                case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_PROPERTIES_KHR: {
                    VkPhysicalDevicePortabilitySubsetPropertiesKHR* props = reinterpret_cast<VkPhysicalDevicePortabilitySubsetPropertiesKHR*>(p);
                    props->minVertexInputBindingStrideAlignment = 4;
                } break;
                default: break;
            }
            p = p->pNext;
        }
    } else
#endif
    if (strcmp(pProfile->profileName, VP_LUNARG_DESKTOP_PORTABILITY_2021_NAME) == 0) {
        while (p != nullptr) {
            switch (p->sType) {
                case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2: {
                    VkPhysicalDeviceFeatures2* wrap = reinterpret_cast<VkPhysicalDeviceFeatures2*>(p);
                    VkPhysicalDeviceFeatures* features = &wrap->features;
                    features->depthBiasClamp = VK_TRUE;
                    features->depthClamp = VK_TRUE;
                    features->drawIndirectFirstInstance = VK_TRUE;
                    features->dualSrcBlend = VK_TRUE;
                } break;
                case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2: {
                    VkPhysicalDeviceProperties2* wrap = reinterpret_cast<VkPhysicalDeviceProperties2*>(p);
                    VkPhysicalDeviceProperties* props = &wrap->properties;
                    props->limits.maxImageDimension1D = 16384;
                    props->limits.maxImageDimension2D = 16384;
                    props->limits.maxImageDimension3D = 2048;
                    props->limits.maxImageDimensionCube = 16384;
                    props->limits.maxImageArrayLayers = 2048;
                } break;
                default: break;
            }
            p = p->pNext;
        }
    } else
    {
    }
}

VP_INLINE VkResult vpGetProfileStructureProperties(const VpProfileProperties *pProfile, uint32_t *pPropertyCount,
                                                   VpStructureProperties *pProperties) {
    VkResult result = VK_SUCCESS;
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    if (strcmp(pProfile->profileName, VP_ANDROID_BASELINE_2021_NAME) == 0) {
        if (pProperties == nullptr) {
            *pPropertyCount = _vpArraySize(_VP_ANDROID_BASELINE_2021_STRUCTURE_PROPERTIES);
        } else {
            if (*pPropertyCount < _vpArraySize(_VP_ANDROID_BASELINE_2021_STRUCTURE_PROPERTIES)) {
                result = VK_INCOMPLETE;
            } else {
                *pPropertyCount = _vpArraySize(_VP_ANDROID_BASELINE_2021_STRUCTURE_PROPERTIES);
            }
            for (uint32_t i = 0; i < *pPropertyCount; ++i) {
                pProperties[i] = _VP_ANDROID_BASELINE_2021_STRUCTURE_PROPERTIES[i];
            }
        }
    } else
#endif
    if (strcmp(pProfile->profileName, VP_KHR_ROADMAP_2022_NAME) == 0) {
        if (pProperties == nullptr) {
            *pPropertyCount = _vpArraySize(_VP_KHR_ROADMAP_2022_STRUCTURE_PROPERTIES);
        } else {
            if (*pPropertyCount < _vpArraySize(_VP_KHR_ROADMAP_2022_STRUCTURE_PROPERTIES)) {
                result = VK_INCOMPLETE;
            } else {
                *pPropertyCount = _vpArraySize(_VP_KHR_ROADMAP_2022_STRUCTURE_PROPERTIES);
            }
            for (uint32_t i = 0; i < *pPropertyCount; ++i) {
                pProperties[i] = _VP_KHR_ROADMAP_2022_STRUCTURE_PROPERTIES[i];
            }
        }
    } else
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (strcmp(pProfile->profileName, VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_NAME) == 0) {
        if (pProperties == nullptr) {
            *pPropertyCount = _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_STRUCTURE_PROPERTIES);
        } else {
            if (*pPropertyCount < _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_STRUCTURE_PROPERTIES)) {
                result = VK_INCOMPLETE;
            } else {
                *pPropertyCount = _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_STRUCTURE_PROPERTIES);
            }
            for (uint32_t i = 0; i < *pPropertyCount; ++i) {
                pProperties[i] = _VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_STRUCTURE_PROPERTIES[i];
            }
        }
    } else
#endif
    if (strcmp(pProfile->profileName, VP_LUNARG_DESKTOP_PORTABILITY_2021_NAME) == 0) {
        if (pProperties == nullptr) {
            *pPropertyCount = _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_STRUCTURE_PROPERTIES);
        } else {
            if (*pPropertyCount < _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_STRUCTURE_PROPERTIES)) {
                result = VK_INCOMPLETE;
            } else {
                *pPropertyCount = _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_STRUCTURE_PROPERTIES);
            }
            for (uint32_t i = 0; i < *pPropertyCount; ++i) {
                pProperties[i] = _VP_LUNARG_DESKTOP_PORTABILITY_2021_STRUCTURE_PROPERTIES[i];
            }
        }
    } else
    {
        *pPropertyCount = 0;
    }
    return result;
}

VP_INLINE VkResult vpGetProfileFormats(const VpProfileProperties *pProfile, uint32_t *pFormatCount, VkFormat *pFormats) {
    VkResult result = VK_SUCCESS;
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    if (strcmp(pProfile->profileName, VP_ANDROID_BASELINE_2021_NAME) == 0) {
        if (pFormats == nullptr) {
            *pFormatCount = _vpArraySize(_VP_ANDROID_BASELINE_2021_FORMATS);
        } else {
            if (*pFormatCount < _vpArraySize(_VP_ANDROID_BASELINE_2021_FORMATS)) {
                result = VK_INCOMPLETE;
            } else {
                *pFormatCount = _vpArraySize(_VP_ANDROID_BASELINE_2021_FORMATS);
            }
            for (uint32_t i = 0; i < *pFormatCount; ++i) {
                pFormats[i] = _VP_ANDROID_BASELINE_2021_FORMATS[i].format;
            }
        }
    } else
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (strcmp(pProfile->profileName, VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_NAME) == 0) {
        if (pFormats == nullptr) {
            *pFormatCount = _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_FORMATS);
        } else {
            if (*pFormatCount < _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_FORMATS)) {
                result = VK_INCOMPLETE;
            } else {
                *pFormatCount = _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_FORMATS);
            }
            for (uint32_t i = 0; i < *pFormatCount; ++i) {
                pFormats[i] = _VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_FORMATS[i].format;
            }
        }
    } else
#endif
    if (strcmp(pProfile->profileName, VP_LUNARG_DESKTOP_PORTABILITY_2021_NAME) == 0) {
        if (pFormats == nullptr) {
            *pFormatCount = _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_FORMATS);
        } else {
            if (*pFormatCount < _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_FORMATS)) {
                result = VK_INCOMPLETE;
            } else {
                *pFormatCount = _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_FORMATS);
            }
            for (uint32_t i = 0; i < *pFormatCount; ++i) {
                pFormats[i] = _VP_LUNARG_DESKTOP_PORTABILITY_2021_FORMATS[i].format;
            }
        }
    } else
    {
        *pFormatCount = 0;
    }
    return result;
}

VP_INLINE void vpGetProfileFormatProperties(const VpProfileProperties *pProfile, VkFormat format, void *pNext) {
    if (pProfile == nullptr || pNext == nullptr) return;
    VkBaseOutStructure* p = static_cast<VkBaseOutStructure*>(pNext);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    if (strcmp(pProfile->profileName, VP_ANDROID_BASELINE_2021_NAME) == 0) {
        for (uint32_t i = 0; i < _vpArraySize(_VP_ANDROID_BASELINE_2021_FORMATS); ++i) {
            const VpFormatProperties& props = _VP_ANDROID_BASELINE_2021_FORMATS[i];
            if (props.format != format) continue;

            while (p != nullptr) {
                switch (p->sType) {
                    case VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2: {
                        VkFormatProperties2* pProps = reinterpret_cast<VkFormatProperties2*>(p);;
                        pProps->formatProperties.linearTilingFeatures = static_cast<VkFormatFeatureFlags>(props.linearTilingFeatures);
                        pProps->formatProperties.optimalTilingFeatures = static_cast<VkFormatFeatureFlags>(props.optimalTilingFeatures);
                        pProps->formatProperties.bufferFeatures = static_cast<VkFormatFeatureFlags>(props.bufferFeatures);
                    } break;
                    case VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_3_KHR: {
                        VkFormatProperties3KHR* pProps = reinterpret_cast<VkFormatProperties3KHR*>(p);;
                        pProps->linearTilingFeatures = (props.linearTilingFeatures);
                        pProps->optimalTilingFeatures = (props.optimalTilingFeatures);
                        pProps->bufferFeatures = (props.bufferFeatures);
                    } break;
                    default: break;
                }
                p = p->pNext;
            }
        }
    } else
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (strcmp(pProfile->profileName, VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_NAME) == 0) {
        for (uint32_t i = 0; i < _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_FORMATS); ++i) {
            const VpFormatProperties& props = _VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_FORMATS[i];
            if (props.format != format) continue;

            while (p != nullptr) {
                switch (p->sType) {
                    case VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2: {
                        VkFormatProperties2* pProps = reinterpret_cast<VkFormatProperties2*>(p);;
                        pProps->formatProperties.linearTilingFeatures = static_cast<VkFormatFeatureFlags>(props.linearTilingFeatures);
                        pProps->formatProperties.optimalTilingFeatures = static_cast<VkFormatFeatureFlags>(props.optimalTilingFeatures);
                        pProps->formatProperties.bufferFeatures = static_cast<VkFormatFeatureFlags>(props.bufferFeatures);
                    } break;
                    case VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_3_KHR: {
                        VkFormatProperties3KHR* pProps = reinterpret_cast<VkFormatProperties3KHR*>(p);;
                        pProps->linearTilingFeatures = (props.linearTilingFeatures);
                        pProps->optimalTilingFeatures = (props.optimalTilingFeatures);
                        pProps->bufferFeatures = (props.bufferFeatures);
                    } break;
                    default: break;
                }
                p = p->pNext;
            }
        }
    } else
#endif
    if (strcmp(pProfile->profileName, VP_LUNARG_DESKTOP_PORTABILITY_2021_NAME) == 0) {
        for (uint32_t i = 0; i < _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_FORMATS); ++i) {
            const VpFormatProperties& props = _VP_LUNARG_DESKTOP_PORTABILITY_2021_FORMATS[i];
            if (props.format != format) continue;

            while (p != nullptr) {
                switch (p->sType) {
                    case VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2: {
                        VkFormatProperties2* pProps = reinterpret_cast<VkFormatProperties2*>(p);;
                        pProps->formatProperties.linearTilingFeatures = static_cast<VkFormatFeatureFlags>(props.linearTilingFeatures);
                        pProps->formatProperties.optimalTilingFeatures = static_cast<VkFormatFeatureFlags>(props.optimalTilingFeatures);
                        pProps->formatProperties.bufferFeatures = static_cast<VkFormatFeatureFlags>(props.bufferFeatures);
                    } break;
                    case VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_3_KHR: {
                        VkFormatProperties3KHR* pProps = reinterpret_cast<VkFormatProperties3KHR*>(p);;
                        pProps->linearTilingFeatures = (props.linearTilingFeatures);
                        pProps->optimalTilingFeatures = (props.optimalTilingFeatures);
                        pProps->bufferFeatures = (props.bufferFeatures);
                    } break;
                    default: break;
                }
                p = p->pNext;
            }
        }
    } else
    {
    }
}

VP_INLINE VkResult vpGetProfileQueueFamilies(const VpProfileProperties *pProfile, uint32_t *pQueueFamilyPropertiesCount,
                                             VkQueueFamilyProperties *pQueueFamilyProperties) {
    VkResult result = VK_SUCCESS;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (strcmp(pProfile->profileName, VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_NAME) == 0) {
        if (pQueueFamilyProperties == nullptr) {
            *pQueueFamilyPropertiesCount = _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_QUEUE_FAMILY_PROPERTIES);
        } else {
            if (*pQueueFamilyPropertiesCount < _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_QUEUE_FAMILY_PROPERTIES)) {
                result = VK_INCOMPLETE;
            } else {
                *pQueueFamilyPropertiesCount = _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_QUEUE_FAMILY_PROPERTIES);
            }
            for (uint32_t i = 0; i < *pQueueFamilyPropertiesCount; ++i) {
                pQueueFamilyProperties[i] = _VP_LUNARG_DESKTOP_PORTABILITY_2021_SUBSET_QUEUE_FAMILY_PROPERTIES[i];
            }
        }
    } else
#endif
    if (strcmp(pProfile->profileName, VP_LUNARG_DESKTOP_PORTABILITY_2021_NAME) == 0) {
        if (pQueueFamilyProperties == nullptr) {
            *pQueueFamilyPropertiesCount = _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_QUEUE_FAMILY_PROPERTIES);
        } else {
            if (*pQueueFamilyPropertiesCount < _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_QUEUE_FAMILY_PROPERTIES)) {
                result = VK_INCOMPLETE;
            } else {
                *pQueueFamilyPropertiesCount = _vpArraySize(_VP_LUNARG_DESKTOP_PORTABILITY_2021_QUEUE_FAMILY_PROPERTIES);
            }
            for (uint32_t i = 0; i < *pQueueFamilyPropertiesCount; ++i) {
                pQueueFamilyProperties[i] = _VP_LUNARG_DESKTOP_PORTABILITY_2021_QUEUE_FAMILY_PROPERTIES[i];
            }
        }
    } else
    {
        *pQueueFamilyPropertiesCount = 0;
    }
    return result;
}
