using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Rendering;

namespace UnityEngine;

[Token(Token = "0x2000198")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/SystemInfo.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Mesh/MeshScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/RenderLoops/MotionVectorRenderLoop.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/GetInput.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/GraphicsCapsScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/SystemInfoMemory.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsFormatUtility.bindings.h")]
public sealed class SystemInfo
{
	[Token(Token = "0x170001E1")]
	public static OperatingSystemFamily operatingSystemFamily
	{
		[Token(Token = "0x6000B7E")]
		[Address(RVA = "0x4ADD480", Offset = "0x4ADD480", VA = "0x4ADD480")]
		get
		{
			return default(OperatingSystemFamily);
		}
	}

	[Token(Token = "0x170001E2")]
	public static string processorType
	{
		[Token(Token = "0x6000B7F")]
		[Address(RVA = "0x4ADD4E0", Offset = "0x4ADD4E0", VA = "0x4ADD4E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E3")]
	public static string deviceUniqueIdentifier
	{
		[Token(Token = "0x6000B80")]
		[Address(RVA = "0x4ADD540", Offset = "0x4ADD540", VA = "0x4ADD540")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E4")]
	public static DeviceType deviceType
	{
		[Token(Token = "0x6000B81")]
		[Address(RVA = "0x4ADD5A0", Offset = "0x4ADD5A0", VA = "0x4ADD5A0")]
		get
		{
			return default(DeviceType);
		}
	}

	[Token(Token = "0x170001E5")]
	public static GraphicsDeviceType graphicsDeviceType
	{
		[Token(Token = "0x6000B82")]
		[Address(RVA = "0x4ADD600", Offset = "0x4ADD600", VA = "0x4ADD600")]
		get
		{
			return default(GraphicsDeviceType);
		}
	}

	[Token(Token = "0x170001E6")]
	public static bool graphicsUVStartsAtTop
	{
		[Token(Token = "0x6000B83")]
		[Address(RVA = "0x4ADD660", Offset = "0x4ADD660", VA = "0x4ADD660")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E7")]
	public static int graphicsShaderLevel
	{
		[Token(Token = "0x6000B84")]
		[Address(RVA = "0x4ADD6C0", Offset = "0x4ADD6C0", VA = "0x4ADD6C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001E8")]
	public static FoveatedRenderingCaps foveatedRenderingCaps
	{
		[Token(Token = "0x6000B85")]
		[Address(RVA = "0x4ADD720", Offset = "0x4ADD720", VA = "0x4ADD720")]
		get
		{
			return default(FoveatedRenderingCaps);
		}
	}

	[Token(Token = "0x170001E9")]
	public static bool supportsMotionVectors
	{
		[Token(Token = "0x6000B86")]
		[Address(RVA = "0x4ADD780", Offset = "0x4ADD780", VA = "0x4ADD780")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EA")]
	[Obsolete("supportsImageEffects always returns true, no need to call it")]
	public static bool supportsImageEffects
	{
		[Token(Token = "0x6000B87")]
		[Address(RVA = "0x4ADD7E0", Offset = "0x4ADD7E0", VA = "0x4ADD7E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EB")]
	public static bool supports3DTextures
	{
		[Token(Token = "0x6000B88")]
		[Address(RVA = "0x4ADD7F0", Offset = "0x4ADD7F0", VA = "0x4ADD7F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EC")]
	public static bool supports3DRenderTextures
	{
		[Token(Token = "0x6000B89")]
		[Address(RVA = "0x4ADD850", Offset = "0x4ADD850", VA = "0x4ADD850")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001ED")]
	public static CopyTextureSupport copyTextureSupport
	{
		[Token(Token = "0x6000B8A")]
		[Address(RVA = "0x4ADD8B0", Offset = "0x4ADD8B0", VA = "0x4ADD8B0")]
		get
		{
			return default(CopyTextureSupport);
		}
	}

	[Token(Token = "0x170001EE")]
	public static bool supportsComputeShaders
	{
		[Token(Token = "0x6000B8B")]
		[Address(RVA = "0x4ADD910", Offset = "0x4ADD910", VA = "0x4ADD910")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EF")]
	public static bool supportsRenderTargetArrayIndexFromVertexShader
	{
		[Token(Token = "0x6000B8C")]
		[Address(RVA = "0x4ADD970", Offset = "0x4ADD970", VA = "0x4ADD970")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F0")]
	public static bool supportsInstancing
	{
		[Token(Token = "0x6000B8D")]
		[Address(RVA = "0x4ADD9D0", Offset = "0x4ADD9D0", VA = "0x4ADD9D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F1")]
	public static int supportedRenderTargetCount
	{
		[Token(Token = "0x6000B8E")]
		[Address(RVA = "0x4ADDA30", Offset = "0x4ADDA30", VA = "0x4ADDA30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001F2")]
	public static bool usesReversedZBuffer
	{
		[Token(Token = "0x6000B8F")]
		[Address(RVA = "0x4ADDA90", Offset = "0x4ADDA90", VA = "0x4ADDA90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F3")]
	public static int maxTextureSize
	{
		[Token(Token = "0x6000B93")]
		[Address(RVA = "0x4ADDDA0", Offset = "0x4ADDDA0", VA = "0x4ADDDA0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001F4")]
	internal static int maxRenderTextureSize
	{
		[Token(Token = "0x6000B94")]
		[Address(RVA = "0x4ADDE00", Offset = "0x4ADDE00", VA = "0x4ADDE00")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001F5")]
	public static bool supportsGraphicsFence
	{
		[Token(Token = "0x6000B95")]
		[Address(RVA = "0x4ADDE60", Offset = "0x4ADDE60", VA = "0x4ADDE60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F6")]
	public static long maxGraphicsBufferSize
	{
		[Token(Token = "0x6000B96")]
		[Address(RVA = "0x4ADC8D0", Offset = "0x4ADC8D0", VA = "0x4ADC8D0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170001F7")]
	public static bool usesLoadStoreActions
	{
		[Token(Token = "0x6000B97")]
		[Address(RVA = "0x4ADDEF0", Offset = "0x4ADDEF0", VA = "0x4ADDEF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F8")]
	public static bool supportsMultiview
	{
		[Token(Token = "0x6000B98")]
		[Address(RVA = "0x4ADDF50", Offset = "0x4ADDF50", VA = "0x4ADDF50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F9")]
	public static bool supportsIndirectArgumentsBuffer
	{
		[Token(Token = "0x6000B99")]
		[Address(RVA = "0x4ADDFB0", Offset = "0x4ADDFB0", VA = "0x4ADDFB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000B90")]
	[Address(RVA = "0x4ADDAF0", Offset = "0x4ADDAF0", VA = "0x4ADDAF0")]
	private static bool IsValidEnumValue(Enum value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B91")]
	[Address(RVA = "0x4ADDB40", Offset = "0x4ADDB40", VA = "0x4ADDB40")]
	public static bool SupportsRenderTextureFormat(RenderTextureFormat format)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B92")]
	[Address(RVA = "0x4ADDC70", Offset = "0x4ADDC70", VA = "0x4ADDC70")]
	public static bool SupportsTextureFormat(TextureFormat format)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B9A")]
	[Address(RVA = "0x4ADD4B0", Offset = "0x4ADD4B0", VA = "0x4ADD4B0")]
	[UnityEngine.Bindings.FreeFunction("systeminfo::GetOperatingSystemFamily")]
	private static extern OperatingSystemFamily GetOperatingSystemFamily();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B9B")]
	[Address(RVA = "0x4ADD510", Offset = "0x4ADD510", VA = "0x4ADD510")]
	[UnityEngine.Bindings.FreeFunction("systeminfo::GetProcessorType")]
	private static extern string GetProcessorType();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x4ADD570", Offset = "0x4ADD570", VA = "0x4ADD570")]
	[UnityEngine.Bindings.FreeFunction("systeminfo::GetDeviceUniqueIdentifier")]
	private static extern string GetDeviceUniqueIdentifier();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B9D")]
	[Address(RVA = "0x4ADD5D0", Offset = "0x4ADD5D0", VA = "0x4ADD5D0")]
	[UnityEngine.Bindings.FreeFunction("systeminfo::GetDeviceType")]
	private static extern DeviceType GetDeviceType();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B9E")]
	[Address(RVA = "0x4ADD630", Offset = "0x4ADD630", VA = "0x4ADD630")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetGraphicsDeviceType")]
	private static extern GraphicsDeviceType GetGraphicsDeviceType();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B9F")]
	[Address(RVA = "0x4ADD690", Offset = "0x4ADD690", VA = "0x4ADD690")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetGraphicsUVStartsAtTop")]
	private static extern bool GetGraphicsUVStartsAtTop();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BA0")]
	[Address(RVA = "0x4ADD6F0", Offset = "0x4ADD6F0", VA = "0x4ADD6F0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetGraphicsShaderLevel")]
	private static extern int GetGraphicsShaderLevel();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BA1")]
	[Address(RVA = "0x4ADD750", Offset = "0x4ADD750", VA = "0x4ADD750")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetFoveatedRenderingCaps")]
	private static extern FoveatedRenderingCaps GetFoveatedRenderingCaps();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BA2")]
	[Address(RVA = "0x4ADD7B0", Offset = "0x4ADD7B0", VA = "0x4ADD7B0")]
	[UnityEngine.Bindings.FreeFunction("SupportsMotionVectors")]
	private static extern bool SupportsMotionVectors();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x4ADD820", Offset = "0x4ADD820", VA = "0x4ADD820")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::Supports3DTextures")]
	private static extern bool Supports3DTextures();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BA4")]
	[Address(RVA = "0x4ADD880", Offset = "0x4ADD880", VA = "0x4ADD880")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::Supports3DRenderTextures")]
	private static extern bool Supports3DRenderTextures();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BA5")]
	[Address(RVA = "0x4ADD8E0", Offset = "0x4ADD8E0", VA = "0x4ADD8E0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetCopyTextureSupport")]
	private static extern CopyTextureSupport GetCopyTextureSupport();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BA6")]
	[Address(RVA = "0x4ADD940", Offset = "0x4ADD940", VA = "0x4ADD940")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsComputeShaders")]
	private static extern bool SupportsComputeShaders();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BA7")]
	[Address(RVA = "0x4ADD9A0", Offset = "0x4ADD9A0", VA = "0x4ADD9A0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsRenderTargetArrayIndexFromVertexShader")]
	private static extern bool SupportsRenderTargetArrayIndexFromVertexShader();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BA8")]
	[Address(RVA = "0x4ADDA00", Offset = "0x4ADDA00", VA = "0x4ADDA00")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsInstancing")]
	private static extern bool SupportsInstancing();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BA9")]
	[Address(RVA = "0x4ADDA60", Offset = "0x4ADDA60", VA = "0x4ADDA60")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportedRenderTargetCount")]
	private static extern int SupportedRenderTargetCount();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BAA")]
	[Address(RVA = "0x4ADDAC0", Offset = "0x4ADDAC0", VA = "0x4ADDAC0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::UsesReversedZBuffer")]
	private static extern bool UsesReversedZBuffer();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BAB")]
	[Address(RVA = "0x4ADDC40", Offset = "0x4ADDC40", VA = "0x4ADDC40")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::HasRenderTexture")]
	private static extern bool HasRenderTextureNative(RenderTextureFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BAC")]
	[Address(RVA = "0x4ADDD70", Offset = "0x4ADDD70", VA = "0x4ADDD70")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsTextureFormat")]
	private static extern bool SupportsTextureFormatNative(TextureFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BAD")]
	[Address(RVA = "0x4ADDDD0", Offset = "0x4ADDDD0", VA = "0x4ADDDD0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetMaxTextureSize")]
	private static extern int GetMaxTextureSize();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x4ADDE30", Offset = "0x4ADDE30", VA = "0x4ADDE30")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetMaxRenderTextureSize")]
	private static extern int GetMaxRenderTextureSize();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BAF")]
	[Address(RVA = "0x4ADDE90", Offset = "0x4ADDE90", VA = "0x4ADDE90")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsGPUFence")]
	private static extern bool SupportsGPUFence();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x4ADDEC0", Offset = "0x4ADDEC0", VA = "0x4ADDEC0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::MaxGraphicsBufferSize")]
	private static extern long MaxGraphicsBufferSize();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x4ADE010", Offset = "0x4ADE010", VA = "0x4ADE010")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::IsFormatSupported")]
	public static extern bool IsFormatSupported(GraphicsFormat format, FormatUsage usage);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BB2")]
	[Address(RVA = "0x4ADE050", Offset = "0x4ADE050", VA = "0x4ADE050")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetCompatibleFormat")]
	public static extern GraphicsFormat GetCompatibleFormat(GraphicsFormat format, FormatUsage usage);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x4ADE090", Offset = "0x4ADE090", VA = "0x4ADE090")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::GetGraphicsFormat")]
	public static extern GraphicsFormat GetGraphicsFormat(DefaultFormat format);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x4ADDF20", Offset = "0x4ADDF20", VA = "0x4ADDF20")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::UsesLoadStoreActions")]
	private static extern bool UsesLoadStoreActions();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BB5")]
	[Address(RVA = "0x4ADDF80", Offset = "0x4ADDF80", VA = "0x4ADDF80")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsMultiview")]
	private static extern bool SupportsMultiview();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BB6")]
	[Address(RVA = "0x4ADDFE0", Offset = "0x4ADDFE0", VA = "0x4ADDFE0")]
	[UnityEngine.Bindings.FreeFunction("ScriptingGraphicsCaps::SupportsIndirectArgumentsBuffer")]
	private static extern bool SupportsIndirectArgumentsBuffer();
}
