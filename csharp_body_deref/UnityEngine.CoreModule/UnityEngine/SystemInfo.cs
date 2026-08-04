// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SystemInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Rendering;

namespace UnityEngine;

[Token(Token = "0x200019B")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/SystemInfo.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Mesh/MeshScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/RenderLoops/MotionVectorRenderLoop.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/GetInput.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/GraphicsCapsScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/SystemInfoMemory.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsFormatUtility.bindings.h")]
public sealed class SystemInfo
{
	[Token(Token = "0x170001E2")]
	public static OperatingSystemFamily operatingSystemFamily
	{
		[Token(Token = "0x6000B80")]
		[Address(RVA = "0x4E04DB0", Offset = "0x4E04DB0", VA = "0x4E04DB0")]
		get
		{
			return default(OperatingSystemFamily);
		}
	}

	[Token(Token = "0x170001E3")]
	public static string processorType
	{
		[Token(Token = "0x6000B81")]
		[Address(RVA = "0x4E04E10", Offset = "0x4E04E10", VA = "0x4E04E10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E4")]
	public static string deviceUniqueIdentifier
	{
		[Token(Token = "0x6000B82")]
		[Address(RVA = "0x4E04E70", Offset = "0x4E04E70", VA = "0x4E04E70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E5")]
	public static DeviceType deviceType
	{
		[Token(Token = "0x6000B83")]
		[Address(RVA = "0x4E04ED0", Offset = "0x4E04ED0", VA = "0x4E04ED0")]
		get
		{
			return default(DeviceType);
		}
	}

	[Token(Token = "0x170001E6")]
	public static GraphicsDeviceType graphicsDeviceType
	{
		[Token(Token = "0x6000B84")]
		[Address(RVA = "0x4E04F30", Offset = "0x4E04F30", VA = "0x4E04F30")]
		get
		{
			return default(GraphicsDeviceType);
		}
	}

	[Token(Token = "0x170001E7")]
	public static bool graphicsUVStartsAtTop
	{
		[Token(Token = "0x6000B85")]
		[Address(RVA = "0x4E04F90", Offset = "0x4E04F90", VA = "0x4E04F90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E8")]
	public static int graphicsShaderLevel
	{
		[Token(Token = "0x6000B86")]
		[Address(RVA = "0x4E04FF0", Offset = "0x4E04FF0", VA = "0x4E04FF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001E9")]
	public static FoveatedRenderingCaps foveatedRenderingCaps
	{
		[Token(Token = "0x6000B87")]
		[Address(RVA = "0x4E05050", Offset = "0x4E05050", VA = "0x4E05050")]
		get
		{
			return default(FoveatedRenderingCaps);
		}
	}

	[Token(Token = "0x170001EA")]
	public static bool supportsMotionVectors
	{
		[Token(Token = "0x6000B88")]
		[Address(RVA = "0x4E050B0", Offset = "0x4E050B0", VA = "0x4E050B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EB")]
	[Obsolete("supportsImageEffects always returns true, no need to call it")]
	public static bool supportsImageEffects
	{
		[Token(Token = "0x6000B89")]
		[Address(RVA = "0x4E05110", Offset = "0x4E05110", VA = "0x4E05110")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EC")]
	public static bool supports3DTextures
	{
		[Token(Token = "0x6000B8A")]
		[Address(RVA = "0x4E05120", Offset = "0x4E05120", VA = "0x4E05120")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001ED")]
	public static bool supports3DRenderTextures
	{
		[Token(Token = "0x6000B8B")]
		[Address(RVA = "0x4E05180", Offset = "0x4E05180", VA = "0x4E05180")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EE")]
	public static CopyTextureSupport copyTextureSupport
	{
		[Token(Token = "0x6000B8C")]
		[Address(RVA = "0x4E051E0", Offset = "0x4E051E0", VA = "0x4E051E0")]
		get
		{
			return default(CopyTextureSupport);
		}
	}

	[Token(Token = "0x170001EF")]
	public static bool supportsComputeShaders
	{
		[Token(Token = "0x6000B8D")]
		[Address(RVA = "0x4E05240", Offset = "0x4E05240", VA = "0x4E05240")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F0")]
	public static bool supportsRenderTargetArrayIndexFromVertexShader
	{
		[Token(Token = "0x6000B8E")]
		[Address(RVA = "0x4E052A0", Offset = "0x4E052A0", VA = "0x4E052A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F1")]
	public static bool supportsInstancing
	{
		[Token(Token = "0x6000B8F")]
		[Address(RVA = "0x4E05300", Offset = "0x4E05300", VA = "0x4E05300")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F2")]
	public static int supportedRenderTargetCount
	{
		[Token(Token = "0x6000B90")]
		[Address(RVA = "0x4E05360", Offset = "0x4E05360", VA = "0x4E05360")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001F3")]
	public static bool usesReversedZBuffer
	{
		[Token(Token = "0x6000B91")]
		[Address(RVA = "0x4E053C0", Offset = "0x4E053C0", VA = "0x4E053C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F4")]
	public static int maxTextureSize
	{
		[Token(Token = "0x6000B95")]
		[Address(RVA = "0x4E056D0", Offset = "0x4E056D0", VA = "0x4E056D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001F5")]
	internal static int maxRenderTextureSize
	{
		[Token(Token = "0x6000B96")]
		[Address(RVA = "0x4E05730", Offset = "0x4E05730", VA = "0x4E05730")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001F6")]
	public static bool supportsGraphicsFence
	{
		[Token(Token = "0x6000B97")]
		[Address(RVA = "0x4E05790", Offset = "0x4E05790", VA = "0x4E05790")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F7")]
	public static long maxGraphicsBufferSize
	{
		[Token(Token = "0x6000B98")]
		[Address(RVA = "0x4E04200", Offset = "0x4E04200", VA = "0x4E04200")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170001F8")]
	public static bool usesLoadStoreActions
	{
		[Token(Token = "0x6000B99")]
		[Address(RVA = "0x4E05820", Offset = "0x4E05820", VA = "0x4E05820")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F9")]
	public static bool supportsMultiview
	{
		[Token(Token = "0x6000B9A")]
		[Address(RVA = "0x4E05880", Offset = "0x4E05880", VA = "0x4E05880")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001FA")]
	public static bool supportsIndirectArgumentsBuffer
	{
		[Token(Token = "0x6000B9B")]
		[Address(RVA = "0x4E058E0", Offset = "0x4E058E0", VA = "0x4E058E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000B92")]
	[Address(RVA = "0x4E05420", Offset = "0x4E05420", VA = "0x4E05420")]
	private static bool IsValidEnumValue(Enum value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B93")]
	[Address(RVA = "0x4E05470", Offset = "0x4E05470", VA = "0x4E05470")]
	public static bool SupportsRenderTextureFormat(RenderTextureFormat format)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B94")]
	[Address(RVA = "0x4E055A0", Offset = "0x4E055A0", VA = "0x4E055A0")]
	public static bool SupportsTextureFormat(TextureFormat format)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x4E04DE0", Offset = "0x4E04DE0", VA = "0x4E04DE0")]
	[UnityEngine.Bindings.FreeFunction("systeminfo::GetOperatingSystemFamily")]
	private static extern OperatingSystemFamily GetOperatingSystemFamily();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B9D")]
	[Address(RVA = "0x4E04E40", Offset = "0x4E04E40", VA = "0x4E04E40")]
	[UnityEngine.Bindings.FreeFunction("systeminfo::GetProcessorType")]
	private static extern string GetProcessorType();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B9E")]
	[Address(RVA = "0x4E04EA0", Offset = "0x4E04EA0", VA = "0x4E04EA0")]
	[UnityEngine.Bindings.FreeFunction("systeminfo::GetDeviceUniqueIdentifier")]
	private static extern string GetDeviceUniqueIdentifier();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B9F")]
	[Address(RVA = "0x4E04F00", Offset = "0x4E04F00", VA = "0x4E04F00")]
	[UnityEngine.Bindings.FreeFunction("systeminfo::GetDeviceType")]
	private static extern DeviceType GetDeviceType();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BA0")]
	[Address(RVA = "0x4E04F60", Offset = "0x4E04F60", VA = "0x4E04F60")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetGraphicsDeviceType")]
	private static extern GraphicsDeviceType GetGraphicsDeviceType();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BA1")]
	[Address(RVA = "0x4E04FC0", Offset = "0x4E04FC0", VA = "0x4E04FC0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetGraphicsUVStartsAtTop")]
	private static extern bool GetGraphicsUVStartsAtTop();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BA2")]
	[Address(RVA = "0x4E05020", Offset = "0x4E05020", VA = "0x4E05020")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetGraphicsShaderLevel")]
	private static extern int GetGraphicsShaderLevel();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x4E05080", Offset = "0x4E05080", VA = "0x4E05080")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetFoveatedRenderingCaps")]
	private static extern FoveatedRenderingCaps GetFoveatedRenderingCaps();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BA4")]
	[Address(RVA = "0x4E050E0", Offset = "0x4E050E0", VA = "0x4E050E0")]
	[UnityEngine.Bindings.FreeFunction("SupportsMotionVectors")]
	private static extern bool SupportsMotionVectors();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BA5")]
	[Address(RVA = "0x4E05150", Offset = "0x4E05150", VA = "0x4E05150")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::Supports3DTextures")]
	private static extern bool Supports3DTextures();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BA6")]
	[Address(RVA = "0x4E051B0", Offset = "0x4E051B0", VA = "0x4E051B0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::Supports3DRenderTextures")]
	private static extern bool Supports3DRenderTextures();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BA7")]
	[Address(RVA = "0x4E05210", Offset = "0x4E05210", VA = "0x4E05210")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetCopyTextureSupport")]
	private static extern CopyTextureSupport GetCopyTextureSupport();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BA8")]
	[Address(RVA = "0x4E05270", Offset = "0x4E05270", VA = "0x4E05270")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsComputeShaders")]
	private static extern bool SupportsComputeShaders();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BA9")]
	[Address(RVA = "0x4E052D0", Offset = "0x4E052D0", VA = "0x4E052D0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsRenderTargetArrayIndexFromVertexShader")]
	private static extern bool SupportsRenderTargetArrayIndexFromVertexShader();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BAA")]
	[Address(RVA = "0x4E05330", Offset = "0x4E05330", VA = "0x4E05330")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsInstancing")]
	private static extern bool SupportsInstancing();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BAB")]
	[Address(RVA = "0x4E05390", Offset = "0x4E05390", VA = "0x4E05390")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportedRenderTargetCount")]
	private static extern int SupportedRenderTargetCount();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BAC")]
	[Address(RVA = "0x4E053F0", Offset = "0x4E053F0", VA = "0x4E053F0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::UsesReversedZBuffer")]
	private static extern bool UsesReversedZBuffer();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BAD")]
	[Address(RVA = "0x4E05570", Offset = "0x4E05570", VA = "0x4E05570")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::HasRenderTexture")]
	private static extern bool HasRenderTextureNative(RenderTextureFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x4E056A0", Offset = "0x4E056A0", VA = "0x4E056A0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsTextureFormat")]
	private static extern bool SupportsTextureFormatNative(TextureFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BAF")]
	[Address(RVA = "0x4E05700", Offset = "0x4E05700", VA = "0x4E05700")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetMaxTextureSize")]
	private static extern int GetMaxTextureSize();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x4E05760", Offset = "0x4E05760", VA = "0x4E05760")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetMaxRenderTextureSize")]
	private static extern int GetMaxRenderTextureSize();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x4E057C0", Offset = "0x4E057C0", VA = "0x4E057C0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsGPUFence")]
	private static extern bool SupportsGPUFence();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BB2")]
	[Address(RVA = "0x4E057F0", Offset = "0x4E057F0", VA = "0x4E057F0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::MaxGraphicsBufferSize")]
	private static extern long MaxGraphicsBufferSize();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x4E05940", Offset = "0x4E05940", VA = "0x4E05940")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::IsFormatSupported")]
	public static extern bool IsFormatSupported(GraphicsFormat format, FormatUsage usage);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x4E05980", Offset = "0x4E05980", VA = "0x4E05980")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetCompatibleFormat")]
	public static extern GraphicsFormat GetCompatibleFormat(GraphicsFormat format, FormatUsage usage);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BB5")]
	[Address(RVA = "0x4E059C0", Offset = "0x4E059C0", VA = "0x4E059C0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetGraphicsFormat")]
	public static extern GraphicsFormat GetGraphicsFormat(DefaultFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BB6")]
	[Address(RVA = "0x4E05850", Offset = "0x4E05850", VA = "0x4E05850")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::UsesLoadStoreActions")]
	private static extern bool UsesLoadStoreActions();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BB7")]
	[Address(RVA = "0x4E058B0", Offset = "0x4E058B0", VA = "0x4E058B0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsMultiview")]
	private static extern bool SupportsMultiview();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BB8")]
	[Address(RVA = "0x4E05910", Offset = "0x4E05910", VA = "0x4E05910")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsIndirectArgumentsBuffer")]
	private static extern bool SupportsIndirectArgumentsBuffer();
}
